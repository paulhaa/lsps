#include "test_server.hpp"

#include <numeric>
#include <sstream>
#include <string>
#include <vector>

std::string LspsTest::join(const std::vector<std::string>& str, const char* delimiter) {
    if (str.empty()) {
        return "";
    }

    return std::accumulate(
        std::next(str.begin()), str.end(), str[0], [&delimiter](const std::string& a, const std::string& b) {
            return a + delimiter + b;
        });
}

std::string LspsTest::queryServer(const std::vector<std::string>& requests) {
    const char* delimiter = "\n";
    auto request = join(requests, delimiter);

    std::istringstream iss(request);
    std::ostringstream oss;
    std::unique_ptr<lsps::IoHandler> ioHandler = std::make_unique<lsps::StdIoHandler>(iss, oss);
    lsps::Server server(std::move(ioHandler));

    server.start();

    return oss.str();
}

void LspsTest::testHandleRequest() {
    std::vector<std::string> requests{"testRequest", "stop"};
    auto expectedResponse = "testRequest";
    auto response = queryServer(requests);
    CPPUNIT_ASSERT_MESSAGE("Should echo request", response == expectedResponse);
}
