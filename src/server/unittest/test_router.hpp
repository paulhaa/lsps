#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <models/generated/LspAny.hpp>
#include <models/generated/Params.hpp>

#include "methodProvider.hpp"

class RouterTest : public CppUnit::TestFixture {
  public:
    RouterTest() : CppUnit::TestFixture() {}

    void testAddHandler();
    void testInvoke();

  private:
    class TestHandler : public lsps::MethodProvider {
      public:
        TestHandler() : MethodProvider(lsps::HOVER) {}
        lsps::LspAny handle(const std::optional<lsps::Params>& params) override { return "testRequest"; }
    };

    CPPUNIT_TEST_SUITE(RouterTest);
    CPPUNIT_TEST(testAddHandler);
    CPPUNIT_TEST(testInvoke);
    CPPUNIT_TEST_SUITE_END();
};
