#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

#include "../ioHandler/stdIoHandler.hpp"
#include "../requestHandler/requestHandler.hpp"

class RequestHandlerTest : public CppUnit::TestFixture {
  public:
    RequestHandlerTest() : CppUnit::TestFixture() {}

    void testInitialize();
    void testHandleRequest();
    void testHandleInitializeRequest();

  private:
    static lsps::LspAny handleTest(const std::optional<lsps::Params>& request) { return "testRequest"; }

    std::string join(const std::vector<std::string>& str, const char* delimiter = "");
    std::string createRequest(int64_t id,
                              const std::string& content,
                              std::optional<nlohmann::json> params = std::nullopt);
    nlohmann::json createParams(const std::map<std::string, std::string>& params);
    std::string createResponse(int64_t id, const std::string& result);
    std::string handleRequest(const std::string& requests, const std::map<std::string, lsps::MethodHandler>& handlers);

    CPPUNIT_TEST_SUITE(RequestHandlerTest);
    CPPUNIT_TEST(testInitialize);
    CPPUNIT_TEST(testHandleRequest);
    CPPUNIT_TEST(testHandleInitializeRequest);
    CPPUNIT_TEST_SUITE_END();
};
