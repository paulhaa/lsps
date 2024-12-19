#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

#include "nlohmann/json.hpp"
#include "requestHandler/router.hpp"

class ServerTest : public CppUnit::TestFixture {
  public:
    ServerTest() : CppUnit::TestFixture() {}

    void testStartServer();

  private:
    static lsps::LspAny handleTest(const std::optional<lsps::Params>& request) { return "testRequest"; }

    std::string join(const std::vector<std::string>& str, const char* delimiter);
    std::string createRequest(int64_t id, const std::string& method);
    std::string createResponse(int64_t id, const std::string& result);
    std::string queryServer(const std::string& request, const std::map<std::string, lsps::MethodHandler>& handlers);

    CPPUNIT_TEST_SUITE(ServerTest);
    CPPUNIT_TEST(testStartServer);
    CPPUNIT_TEST_SUITE_END();
};
