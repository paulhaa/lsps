#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

#include "nlohmann/json.hpp"
#include "router.hpp"

class ServerTest : public CppUnit::TestFixture {
  public:
    ServerTest() : CppUnit::TestFixture() {}

    void testStartServer();
    void testInitialize();
    void testHandleRequest();

  private:
    class TestHandler : public lsps::MethodProvider {
      public:
        TestHandler() : MethodProvider(lsps::HOVER) {}
        lsps::LspAny handle(const std::optional<lsps::Params>& params) override { return "testRequest"; }
    };

    std::string join(const std::vector<std::string>& str, const char* delimiter = "");
    std::string createRequest(int64_t id,
                              const std::string& method,
                              std::optional<nlohmann::json> params = std::nullopt);
    std::string createResponse(int64_t id, const std::string& result);
    std::string queryServer(const std::string& request);

    CPPUNIT_TEST_SUITE(ServerTest);
    CPPUNIT_TEST(testStartServer);
    CPPUNIT_TEST(testInitialize);
    CPPUNIT_TEST(testHandleRequest);
    CPPUNIT_TEST_SUITE_END();
};
