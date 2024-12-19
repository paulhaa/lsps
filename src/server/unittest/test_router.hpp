#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <models/generated/LspAny.hpp>
#include <models/generated/Params.hpp>

class RouterTest : public CppUnit::TestFixture {
  public:
    RouterTest() : CppUnit::TestFixture() {}

    void testAddHandler();
    void testInvoke();

  private:
    static lsps::LspAny handleTest(const std::optional<lsps::Params>& request) { return "testRequest"; };

    CPPUNIT_TEST_SUITE(RouterTest);
    CPPUNIT_TEST(testAddHandler);
    CPPUNIT_TEST(testInvoke);
    CPPUNIT_TEST_SUITE_END();
};
