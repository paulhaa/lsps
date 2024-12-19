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

std::string ServerTest::createRequest(int64_t id, const std::string& method) {
    std::variant<int64_t, std::string> _id(id);
    lsps::RequestMessage request;
    request.set_jsonrpc(lsps::JSON_RPC_VERSION);
    request.set_id(_id);
    request.set_method(method);
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

std::string ServerTest::queryServer(const std::string& request,
                                    const std::map<std::string, lsps::MethodHandler>& handlers) {
    std::istringstream iss(request);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    lsps::Server server(std::move(ioHandler));
    for (const auto& [method, handler] : handlers) {
        server.addHandler(method, handler);
    }

    server.start();

    return oss.str();
}

void ServerTest::testStartServer() {
    auto req1 = createRequest(1, "test");
    auto req2 = createRequest(2, "test");
    auto shutdownRequest = createRequest(3, "shutdown");
    std::vector<std::string> requests{req1, req2, shutdownRequest};
    const char* delimiter = "";
    auto request = join(requests, delimiter);

    auto resp1 = createResponse(1, "testRequest");
    auto resp2 = createResponse(2, "testRequest");
    std::vector<std::string> responses{resp1, resp2};
    auto expectedResponse = join(responses, delimiter);

    std::map<std::string, lsps::MethodHandler> handlers{{"test", handleTest}};

    auto response = queryServer(request, handlers);

    auto message = "expected '" + std::string(expectedResponse) + "', got '" + response + "'";
    CPPUNIT_ASSERT_MESSAGE(message, response == expectedResponse);
}
