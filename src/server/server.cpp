#include "server.hpp"

#include "methodProviders/initializeProvider.hpp"
#include "methodProviders/shutdownProvider.hpp"

namespace lsps {
void Server::start() {
    initialize();

    bool _continue = true;
    while (_continue) {
        _continue = handleRequest();
    }
}

void Server::addHandler(std::unique_ptr<MethodProvider> handler) {
    router.addHandler(std::move(handler));
};

void Server::initialize() {
    router.addHandler(std::make_unique<InitializeProvider>(serverInfo, capabilities));
    router.addHandler(std::make_unique<ShutdownProvider>());
}

bool Server::handleRequest() {
    auto request = parseRequest();
    auto method = MethodEnum::getMethodFromString(request.get_method());
    auto result = router.invoke(method, request.get_params());
    dispatchResponse(request.get_id(), result);

    return method != Method::SHUTDOWN;
}

RequestMessage Server::parseRequest() {
    const auto contentLength = readHeader();
    auto payload = readPayload(contentLength);
    RequestMessage request;
    from_json(payload, request);
    return request;
}

int Server::readHeader() {
    std::string input;
    ioHandler->readLine(input);
    std::string ignore;
    ioHandler->readLine(ignore);

    std::string headerPrefix = "Content-Length: ";
    if (input.substr(0, headerPrefix.size()) != headerPrefix) {
        throw std::invalid_argument("Invalid header");
    }
    const std::string length = input.substr(headerPrefix.length());

    try {
        const auto contentLength = stoi(length);
        return contentLength;
    } catch (std::invalid_argument const& ex) {
        throw std::invalid_argument("Invalid content length");
    }
}

json Server::readPayload(int contentLength) {
    std::vector<char> data(contentLength);
    auto dataReceived = ioHandler->read(data, contentLength);

    if (dataReceived != contentLength) {
        const auto expected = std::to_string(contentLength);
        const auto actual = std::to_string(dataReceived);
        const auto error = "Expected " + expected + " bytes but received " + actual + ".\n";
        throw std::length_error(error);
    }

    const auto payload = std::string(data.begin(), data.end());
    if (!nlohmann::json::accept(payload)) {
        throw std::invalid_argument("Invalid json");
    }
    json json = nlohmann::json::parse(payload);
    return json;
}

void Server::dispatchResponse(const std::variant<int64_t, std::string>& id, const LspAny& result) {
    ResponseMessage response;
    response.set_jsonrpc(JSON_RPC_VERSION);
    response.set_id(id);
    response.set_result(result);

    json json;
    to_json(json, response);

    auto content = json.dump();
    const size_t contentLength = content.length();
    const auto responseMessage = "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
    ioHandler->writeOutput(responseMessage);
}
}  // namespace lsps