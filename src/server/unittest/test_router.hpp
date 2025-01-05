#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include "lsps/methodProvider.hpp"
#include "lsps/methodProviders/definitionProvider.hpp"
#include "lsps/methodProviders/hoverProvider.hpp"
#include "lsps/models/generated/Generators.hpp"

class RouterTest : public CppUnit::TestFixture {
  public:
    RouterTest() : CppUnit::TestFixture() {}

    void testAddProvider();
    void testInvoke();

  private:
    CPPUNIT_TEST_SUITE(RouterTest);
    CPPUNIT_TEST(testAddProvider);
    CPPUNIT_TEST(testInvoke);
    CPPUNIT_TEST_SUITE_END();

    class TestHoverProvider : public lsps::HoverProvider {
      public:
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

    class TestDefinitionProvider : public lsps::DefinitionProvider {
      public:
        std::variant<std::optional<lsps::models::LocationClass>, lsps::models::ResponseError> handle(
            const std::optional<lsps::models::DefinitionParams>& params) override {
            if (!params.has_value()) {
                return std::nullopt;
            }

            lsps::models::LocationClass location;
            location.set_uri(params.value().get_text_document().get_uri());

            lsps::models::PurpleRange range;
            lsps::models::Position start;
            start.set_line(0);
            start.set_character(0);
            range.set_start(start);
            lsps::models::Position end;
            end.set_line(1);
            end.set_character(0);
            range.set_end(end);
            location.set_range(range);

            return location;
        }
    };
};
