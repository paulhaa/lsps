#include "test_server.hpp"

#include <nlohmann/json.hpp>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

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

std::string ServerTest::createRequest(int64_t id, const std::string& method, std::optional<nlohmann::json> params) {
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

std::string ServerTest::createResponse(int64_t id, const std::string& result) {
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

std::string ServerTest::queryServer(const std::string& request) {
    std::istringstream iss(request);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    lsps::ServerInfo serverInfo;
    serverInfo.set_name("testServer");
    serverInfo.set_version("0.0.1");
    lsps::Server server(serverInfo, std::move(ioHandler));
    server.addHandler(std::make_unique<TestHandler>());

    server.start();

    return oss.str();
}

void ServerTest::testStartServer() {
    auto req1 = createRequest(1, "textDocument/hover");
    auto req2 = createRequest(2, "textDocument/hover");
    auto shutdownRequest = createRequest(3, "shutdown");
    auto request = join({req1, req2, shutdownRequest});

    auto resp1 = createResponse(1, "testRequest");
    auto resp2 = createResponse(2, "testRequest");
    auto shutdownResponse = createResponse(3, "shutdown");
    auto expectedResponse = join({resp1, resp2, shutdownResponse});

    auto response = queryServer(request);

    auto message = "expected '" + std::string(expectedResponse) + "', got '" + response + "'";
    CPPUNIT_ASSERT_MESSAGE(message, response == expectedResponse);
}

void ServerTest::testInitialize() {
    auto initializeRequest = createRequest(1, "initialize");
    auto shutdownRequest = createRequest(2, "shutdown");
    auto request = join({initializeRequest, shutdownRequest});
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("initialize handler should not throw", queryServer(request));

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("shutdown handler should not throw", queryServer(shutdownRequest));
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
    server.addHandler(std::make_unique<TestHandler>());

    CPPUNIT_ASSERT_THROW_MESSAGE(
        "message after message with extra bytes should throw", server.start(), std::invalid_argument);

    // correct message
    auto shutdownRequest = createRequest(2, "shutdown");
    auto request = join({req, shutdownRequest});
    CPPUNIT_ASSERT_NO_THROW_MESSAGE("correct message should not throw", queryServer(request));
}
