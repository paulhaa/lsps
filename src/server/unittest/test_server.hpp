#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

#include "generated/Hover.hpp"
#include "generated/HoverParams.hpp"
#include "nlohmann/json.hpp"
#include "router.hpp"

class ServerTest : public CppUnit::TestFixture {
  public:
    ServerTest() : CppUnit::TestFixture() {}

    void testStart();
    void testShutdown();
    void testAddProvider();
    void testInitialize();
    void testHandleRequest();

  private:
    class TestProvider : public lsps::MethodProvider<lsps::models::HoverParams, lsps::models::Hover> {
      public:
        TestProvider() : MethodProvider(lsps::HOVER) {}
        std::variant<lsps::models::Hover, lsps::models::ResponseError> handle(
            const std::optional<lsps::models::HoverParams>& params) override {
            lsps::models::Hover hover;
            hover.set_contents("testResult");

            lsps::models::PurpleRange range;
            lsps::models::Position start;
            start.set_line(0);
            start.set_character(0);
            range.set_start(start);
            lsps::models::Position end;
            end.set_line(0);
            end.set_character(0);
            range.set_end(end);
            hover.set_range(range);

            return hover;
        }
    };

    std::string join(const std::vector<std::string>& str, const char* delimiter = "");
    std::string createNotification(const std::string& method,
                                   const std::optional<nlohmann::json>& params = std::nullopt);
    std::string createRequest(int64_t id,
                              const std::string& method,
                              const std::optional<nlohmann::json>& params = std::nullopt);
    std::string createResponse(int64_t id,
                               const std::optional<nlohmann::json>& result = std::nullopt,
                               const std::optional<lsps::models::ResponseError>& error = std::nullopt);
    std::string queryServer(const std::string& request);

    CPPUNIT_TEST_SUITE(ServerTest);
    CPPUNIT_TEST(testStart);
    CPPUNIT_TEST(testShutdown);
    CPPUNIT_TEST(testInitialize);
    CPPUNIT_TEST(testAddProvider);
    CPPUNIT_TEST(testHandleRequest);
    CPPUNIT_TEST_SUITE_END();
};
