#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <iostream>

#include "../server.hpp"

class LspsTest : public CppUnit::TestFixture {
  public:
    LspsTest() : CppUnit::TestFixture() {}

    void testHandleRequest();

  private:
    std::string join(const std::vector<std::string>& str, const char* delimiter);
    std::string queryServer(const std::vector<std::string>& requests);

    CPPUNIT_TEST_SUITE(LspsTest);
    CPPUNIT_TEST(testHandleRequest);
    CPPUNIT_TEST_SUITE_END();
};
