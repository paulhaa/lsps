#include "test_initializeProvider.hpp"

#include "lsps/methodProviders/initializeProvider.hpp"

void InitializeProviderTest::testHandleInitialize() {
    lsps::models::ServerInfo serverInfo;
    serverInfo.set_name("testServer");
    serverInfo.set_version("0.0.1");
    lsps::models::ServerCapabilities capabilities;
    lsps::InitializeProvider provider(serverInfo, capabilities);

    auto result = provider.handle(std::nullopt);
    auto res = std::get_if<lsps::models::InitializeResult>(&result);
    CPPUNIT_ASSERT_MESSAGE("should have result", res != nullptr);
    CPPUNIT_ASSERT_MESSAGE("server name should be 'testServer'", res->get_server_info().has_value());
    auto resultStr = res->get_server_info().value().get_name();

    std::string expectedResult{"testServer"};
    auto message = "expected '" + expectedResult + "', got '" + resultStr + "'";
    CPPUNIT_ASSERT_MESSAGE(message, expectedResult == resultStr);
}
