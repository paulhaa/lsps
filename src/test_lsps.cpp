#include <cppunit/ui/text/TestRunner.h>

#include "server/test/test_server.hpp"

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(LspsTest::suite());
    runner.run();
}