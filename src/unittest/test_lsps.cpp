#include <cppunit/ui/text/TestRunner.h>

#include "methodProviders/unittest/test_initializeProvider.hpp"
#include "unittest/test_router.hpp"
#include "unittest/test_server.hpp"

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(ServerTest::suite());
    runner.addTest(RouterTest::suite());
    runner.addTest(InitializeProviderTest::suite());
    runner.run();
}