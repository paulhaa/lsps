#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class InitializeProviderTest : public CppUnit::TestFixture {
  public:
    InitializeProviderTest() : CppUnit::TestFixture() {}

    void testHandleInitialize();

  private:
    CPPUNIT_TEST_SUITE(InitializeProviderTest);
    CPPUNIT_TEST(testHandleInitialize);
    CPPUNIT_TEST_SUITE_END();
};
