#include "server.hpp"

#include "methodProviders/initializeProvider.hpp"
#include "methodProviders/shutdownProvider.hpp"
#include "models/generated/Generators.hpp"

namespace lsps {
void Server::start() {
    initialize();

    while (handleRequest()) {
    }
}

void Server::initialize() {
    router.addProvider<InitializeParams, InitializeResult>(
        std::make_shared<InitializeProvider>(serverInfo, capabilities));
    router.addProvider<EmptyParams, EmptyResult>(std::make_shared<ShutdownProvider>());
}

void Server::addCapability(const Method& method) {
    switch (method) {
        case Method::HOVER:
            capabilities.set_hover_provider(true);
            break;
        case Method::INITIALIZE:
        case Method::SHUTDOWN:
        case Method::EXIT:
            break;
    }
}

bool Server::handleRequest() {
    auto request = parseRequest();
    auto method = MethodEnum::fromString(request.get_method());
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

void Server::dispatchResponse(const std::variant<int64_t, std::string>& id,
                              const std::variant<json, ResponseError>& result) {
    ResponseMessage response;
    response.set_jsonrpc(JSON_RPC_VERSION);
    response.set_id(id);
    if (auto error = std::get_if<ResponseError>(&result)) {
        response.set_error(*error);
    } else {
        auto res = std::get<json>(result);
        response.set_result(res.dump());
    }

    json json;
    to_json(json, response);

    auto content = json.dump();
    const size_t contentLength = content.length();
    const auto responseMessage = "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
    ioHandler->writeOutput(responseMessage);
}
}  // namespace lsps