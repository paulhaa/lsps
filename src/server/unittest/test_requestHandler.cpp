#include "test_requestHandler.hpp"

#include <nlohmann/json.hpp>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

#include "generated/ResponseMessage.hpp"
#include "models/generated/Generators.hpp"

std::string RequestHandlerTest::join(const std::vector<std::string>& str, const char* delimiter) {
    if (str.empty()) {
        return "";
    }

    return std::accumulate(
        std::next(str.begin()), str.end(), str[0], [&delimiter](const std::string& a, const std::string& b) {
            return a + delimiter + b;
        });
}

nlohmann::json RequestHandlerTest::createParams(const std::map<std::string, std::string>& params) {
    nlohmann::json result;
    nlohmann::to_json(result, params);
    return result;
}

std::string RequestHandlerTest::createRequest(int64_t id,
                                              const std::string& method,
                                              std::optional<nlohmann::json> params) {
    std::variant<int64_t, std::string> _id(id);
    lsps::RequestMessage request;
    request.set_jsonrpc(lsps::JSON_RPC_VERSION);
    request.set_id(_id);
    request.set_method(method);
    request.set_params(params);
    nlohmann::json json;
    to_json(json, request);
    auto content = json.dump();
    const size_t contentLength = content.length();
    return "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
}

std::string RequestHandlerTest::createResponse(int64_t id, const std::string& result) {
    std::variant<int64_t, std::string> _id(id);
    lsps::ResponseMessage response;
    response.set_jsonrpc(lsps::JSON_RPC_VERSION);
    response.set_id(_id);
    response.set_result(result);
    nlohmann::json json;
    to_json(json, response);
    auto content = json.dump();
    const size_t contentLength = content.length();
    return "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
}

std::string RequestHandlerTest::handleRequest(const std::string& request,
                                              const std::map<std::string, lsps::MethodHandler>& handlers) {
    std::istringstream iss(request);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    auto requestHandler = std::make_unique<lsps::RequestHandler>(std::move(ioHandler));

    requestHandler->initialize();
    for (const auto& [method, handler] : handlers) {
        requestHandler->addHandler(method, handler);
    }

    requestHandler->handleRequest();

    return oss.str();
}

void RequestHandlerTest::testInitialize() {
    auto request = createRequest(1, "initialize");
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("initialize handler should not throw", handleRequest(request, {}));
}

void RequestHandlerTest::testHandleRequest() {
    auto req = createRequest(1, "test");

    // missing header
    auto missingHeader = req.substr(22, req.length() - 1);
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "missing header should throw", handleRequest(missingHeader, {{"test", handleTest}}), std::invalid_argument);

    // wrong header
    auto wrongHeader = req.substr(0, req.length() - 3) + "abc";
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "wrong header should throw", handleRequest(wrongHeader, {{"test", handleTest}}), std::invalid_argument);

    // short message
    auto shortMessage = req.substr(0, req.length() - 5);
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "short message should throw", handleRequest(shortMessage, {{"test", handleTest}}), std::length_error);

    // long message
    auto longMessage = req.substr(0, req.length() - 2) + R"(,"extraProp":"extraValue")";
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "long message should throw", handleRequest(longMessage, {{"test", handleTest}}), std::invalid_argument);

    // extra bytes
    auto extraBytes = join({req + "extraChars", req});
    std::istringstream iss(extraBytes);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    auto reqHandler = std::make_unique<lsps::RequestHandler>(std::move(ioHandler));
    reqHandler->addHandler("test", handleTest);

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("message with extra bytes should not throw", reqHandler->handleRequest());
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "message after message with extra bytes should throw", reqHandler->handleRequest(), std::invalid_argument);

    // correct message
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("correct message should not throw", handleRequest(req, {{"test", handleTest}}));
}

void RequestHandlerTest::testHandleInitializeRequest() {
    // Initialize request without parameters
    auto reqWithoutParams = createRequest(1, "initialize");
    auto responseWithoutParams = handleRequest(reqWithoutParams, {});
    auto expectedResponse = createResponse(1, "no params");
    auto message = "expected '" + expectedResponse + "', got '" + responseWithoutParams + "'";
    CPPUNIT_ASSERT_MESSAGE(message, responseWithoutParams == expectedResponse);

    // Initialize request with parameters
    auto params = createParams({{"param1", "value1"}, {"param2", "value2"}});
    auto reqWithParams = createRequest(1, "initialize", params);
    auto responseWithParams = handleRequest(reqWithParams, {});
    expectedResponse = createResponse(1, "has params");
    message = "expected '" + expectedResponse + "', got '" + responseWithParams + "'";
    CPPUNIT_ASSERT_MESSAGE(message, responseWithParams == expectedResponse);
}
