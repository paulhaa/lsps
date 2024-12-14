#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

class LspsTest : public CppUnit::TestFixture {
  public:
    LspsTest() : CppUnit::TestFixture() {}

    void testStart() { CPPUNIT_ASSERT(true); }

    CPPUNIT_TEST_SUITE(LspsTest);
    CPPUNIT_TEST(testStart);
    CPPUNIT_TEST_SUITE_END();
};
