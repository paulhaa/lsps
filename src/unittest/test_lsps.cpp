#include <cppunit/ui/text/TestRunner.h>

#include "../server/unittest/test_server.hpp"

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(LspsTest::suite());
    runner.run();
}