#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <models/generated/LspAny.hpp>
#include <models/generated/Params.hpp>

#include "generated/Hover.hpp"
#include "generated/HoverParams.hpp"
#include "methodProvider.hpp"

class RouterTest : public CppUnit::TestFixture {
  public:
    RouterTest() : CppUnit::TestFixture() {}

    void testAddProvider();
    void testInvoke();

  private:
    class TestProvider : public lsps::MethodProvider<lsps::HoverParams, lsps::Hover> {
      public:
        TestProvider() : MethodProvider(lsps::HOVER) {}
        std::variant<lsps::Hover, lsps::ResponseError> handle(const std::optional<lsps::HoverParams>& params) override {
            lsps::Hover hover;
            hover.set_contents("testResult");

            lsps::PurpleRange range;
            lsps::Position start;
            start.set_line(0);
            start.set_character(0);
            range.set_start(start);
            lsps::Position end;
            end.set_line(0);
            end.set_character(0);
            range.set_end(end);
            hover.set_range(range);

            return hover;
        }
    };

    CPPUNIT_TEST_SUITE(RouterTest);
    CPPUNIT_TEST(testAddProvider);
    CPPUNIT_TEST(testInvoke);
    CPPUNIT_TEST_SUITE_END();
};
