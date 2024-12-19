#include <cppunit/ui/text/TestRunner.h>

#include "unittest/test_requestHandler.hpp"
#include "unittest/test_router.hpp"
#include "unittest/test_server.hpp"

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(ServerTest::suite());
    runner.addTest(RequestHandlerTest::suite());
    runner.addTest(RouterTest::suite());
    runner.run();
}