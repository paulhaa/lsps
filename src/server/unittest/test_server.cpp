#include "test_server.hpp"

#include <nlohmann/json.hpp>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

#include "errorFactory.hpp"
#include "ioHandler/ioHandler.hpp"
#include "models/generated/Generators.hpp"
#include "server.hpp"

std::string ServerTest::join(const std::vector<std::string>& str, const char* delimiter) {
    if (str.empty()) {
        return "";
    }

    return std::accumulate(
        std::next(str.begin()), str.end(), str[0], [&delimiter](const std::string& a, const std::string& b) {
            return a + delimiter + b;
        });
}

std::string ServerTest::createNotification(const std::string& method, const std::optional<nlohmann::json>& params) {
    lsps::NotificationMessage notification;
    notification.set_jsonrpc(lsps::JSON_RPC_VERSION);
    notification.set_method(method);
    notification.set_params(params);
    nlohmann::json json;
    to_json(json, notification);
    auto content = json.dump();
    const size_t contentLength = content.length();
    return "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
}

std::string ServerTest::createRequest(int64_t id,
                                      const std::string& method,
                                      const std::optional<nlohmann::json>& params) {
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

std::string ServerTest::createResponse(int64_t id,
                                       const std::optional<std::string>& result,
                                       const std::optional<lsps::ResponseError>& error) {
    std::variant<int64_t, std::string> _id(id);
    lsps::ResponseMessage response;
    response.set_jsonrpc(lsps::JSON_RPC_VERSION);
    response.set_id(_id);
    if (result.has_value()) {
        response.set_result(result.value());
    }
    if (error.has_value()) {
        response.set_error(error);
    }
    nlohmann::json json;
    to_json(json, response);
    auto content = json.dump();
    const size_t contentLength = content.length();
    return "Content-Length: " + std::to_string(contentLength) + "\r\n\r\n" + content;
}

std::string ServerTest::queryServer(const std::string& request) {
    std::istringstream iss(request);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    lsps::ServerInfo serverInfo;
    serverInfo.set_name("testServer");
    serverInfo.set_version("0.0.1");
    lsps::Server server(serverInfo, std::move(ioHandler));
    server.addProvider<lsps::HoverParams, lsps::Hover>(std::make_unique<TestProvider>());

    server.start();

    return oss.str();
}

void ServerTest::testStart() {
    auto initializeRequest = createRequest(1, "initialize");
    auto req1 = createRequest(2, "textDocument/hover");
    auto req2 = createRequest(3, "textDocument/hover");
    auto shutdownRequest = createRequest(4, "shutdown");
    auto exitNotification = createNotification("exit");
    auto request = join({initializeRequest, req1, req2, shutdownRequest, exitNotification});

    auto result =
        R"({"contents":"testResult","range":{"end":{"character":0,"line":0},"start":{"character":0,"line":0}}})";
    auto resp1 = createResponse(2, result);
    auto resp2 = createResponse(3, result);
    auto shutdownResponse = createResponse(4, "null");
    auto expectedResponse = join({resp1, resp2, shutdownResponse});

    auto response = queryServer(request);
    // Remove initialize response.
    auto resp = response.substr(1193);

    auto message = "expected '" + std::string(expectedResponse) + "', got '" + resp + "'";
    CPPUNIT_ASSERT_MESSAGE(message, resp == expectedResponse);
}

void ServerTest::testInitialize() {
    std::map<std::string, nlohmann::json> params;
    params.emplace("capabilities", "{}");
    auto initializeRequest = createRequest(1, "initialize", params);
    auto shutdownRequest = createRequest(2, "shutdown");
    auto exitNotification = createNotification("exit");
    auto initialize = join({initializeRequest, shutdownRequest, exitNotification});
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("initialize provider should not throw", queryServer(initialize));

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("exit should not throw", queryServer(exitNotification));

    auto req = createRequest(1, "textDocument/hover");
    auto request = join({req, exitNotification});
    auto response = queryServer(request);
    auto notInitializedResponse = createResponse(1, std::nullopt, lsps::ErrorFactory::serverNotInitialized());
    auto message = "expected '" + std::string(notInitializedResponse) + "', got '" + response + "'";
    CPPUNIT_ASSERT_MESSAGE(message, response == notInitializedResponse);
}

void ServerTest::testShutdown() {
    auto initializeRequest = createRequest(1, "initialize");
    auto req1 = createRequest(2, "textDocument/hover");
    auto shutdownRequest = createRequest(3, "shutdown");
    auto req2 = createRequest(4, "textDocument/hover");
    auto exitNotification = createNotification("exit");
    auto request = join({initializeRequest, req1, shutdownRequest, req2, exitNotification});

    auto result =
        R"({"contents":"testResult","range":{"end":{"character":0,"line":0},"start":{"character":0,"line":0}}})";
    auto resp1 = createResponse(2, result);
    auto shutdownResponse = createResponse(3, "null");
    auto errorResponse = createResponse(4, std::nullopt, lsps::ErrorFactory::invalidRequest());
    auto expectedResponse = join({resp1, shutdownResponse, errorResponse});

    auto response = queryServer(request);
    // Remove initialize response.
    auto resp = response.substr(1193);

    auto message = "expected '" + std::string(expectedResponse) + "', got '" + resp + "'";
    CPPUNIT_ASSERT_MESSAGE(message, resp == expectedResponse);
}

void ServerTest::testAddProvider() {
    auto initializeRequest = createRequest(1, "initialize");
    auto shutdownRequest = createRequest(2, "shutdown");
    auto exitNotification = createNotification("exit");
    auto request = join({initializeRequest, shutdownRequest, exitNotification});

    auto response = queryServer(request);

    auto message = "should have hover capability";
    auto hoverCapability = R"("hoverProvider\":true)";
    CPPUNIT_ASSERT_MESSAGE(message, response.find(hoverCapability) != std::string::npos);

    message = "should not have call hierarchy capability";
    auto callHierarchyCapability = R"("callHierarchyProvider\":null)";
    CPPUNIT_ASSERT_MESSAGE(message, response.find(callHierarchyCapability) != std::string::npos);
}

void ServerTest::testHandleRequest() {
    auto req = createRequest(1, "textDocument/hover");

    // missing header
    auto missingHeader = req.substr(22, req.length() - 1);
    CPPUNIT_ASSERT_THROW_MESSAGE("missing header should throw", queryServer(missingHeader), std::invalid_argument);

    // wrong header
    auto wrongHeader = req.substr(0, req.length() - 3) + "abc";
    CPPUNIT_ASSERT_THROW_MESSAGE("wrong header should throw", queryServer(wrongHeader), std::invalid_argument);

    // short message
    auto shortMessage = req.substr(0, req.length() - 5);
    CPPUNIT_ASSERT_THROW_MESSAGE("short message should throw", queryServer(shortMessage), std::length_error);

    // long message
    auto longMessage = req.substr(0, req.length() - 2) + R"(,"extraProp":"extraValue")";
    CPPUNIT_ASSERT_THROW_MESSAGE("long message should throw", queryServer(longMessage), std::invalid_argument);

    // extra bytes
    auto extraBytes = join({req + "extraChars", req});
    std::istringstream iss(extraBytes);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    lsps::ServerInfo serverInfo;
    serverInfo.set_name("testServer");
    serverInfo.set_version("0.0.1");
    lsps::Server server(serverInfo, std::move(ioHandler));
    server.addProvider<lsps::HoverParams, lsps::Hover>(std::make_unique<TestProvider>());

    CPPUNIT_ASSERT_THROW_MESSAGE(
        "message after message with extra bytes should throw", server.start(), std::invalid_argument);

    // correct message
    auto shutdownRequest = createRequest(2, "shutdown");
    auto exitNotification = createNotification("exit");
    auto request = join({req, shutdownRequest, exitNotification});
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("correct message should not throw", queryServer(request));
}
