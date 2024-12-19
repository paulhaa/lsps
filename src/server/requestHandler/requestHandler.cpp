#include "requestHandler.hpp"

#include <iostream>
#include <vector>

#include "methodHandlers/initializeHandler.hpp"
#include "methodHandlers/shutdownHandler.hpp"
#include "models/generated/Generators.hpp"

namespace lsps {
void RequestHandler::initialize() {
    router.addHandler("initialize", handleInitialize);
    router.addHandler("shutdown", handleShutdown);
}

void RequestHandler::addHandler(const std::string& method, const MethodHandler& handler) {
    router.addHandler(method, handler);
};

bool RequestHandler::handleRequest() {
    auto request = parseRequest();
    auto result = router.invoke(request.get_method(), request.get_params());
    return dispatchResponse(request, result);
}

RequestMessage RequestHandler::parseRequest() {
    const auto contentLength = readHeader();
    auto payload = readPayload(contentLength);
    RequestMessage request;
    from_json(payload, request);
    return request;
}

bool RequestHandler::dispatchResponse(const RequestMessage& request, const LspAny& result) {
    if (request.get_method() == "shutdown") {
        return false;
    }

    ResponseMessage response;
    response.set_jsonrpc(JSON_RPC_VERSION);
    response.set_id(request.get_id());
    response.set_result(result);

    json json;
    to_json(json, response);

    auto content = json.dump();
    const size_t contentLength = content.length();
    const auto responseMessage = "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
    ioHandler_->writeOutput(responseMessage);

    return true;
}

int RequestHandler::readHeader() {
    std::string input;
    ioHandler_->readLine(input);
    std::string ignore;
    ioHandler_->readLine(ignore);

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

json RequestHandler::readPayload(int contentLength) {
    std::vector<char> data(contentLength);
    auto dataReceived = ioHandler_->read(data, contentLength);

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
}  // namespace lsps