#include "test_router.hpp"

#include "router.hpp"

void RouterTest::testAddProvider() {
    lsps::Router router;
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "missing provider should throw", router.invoke(lsps::HOVER, std::nullopt), std::runtime_error);

    router.addProvider<lsps::models::HoverParams, lsps::models::Hover>(std::make_shared<TestProvider>());

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("added provider should not throw", router.invoke(lsps::HOVER, std::nullopt));
}

void RouterTest::testInvoke() {
    lsps::Router router;
    router.addProvider<lsps::models::HoverParams, lsps::models::Hover>(std::make_shared<TestProvider>());
    auto result = router.invoke(lsps::HOVER, std::nullopt);
    auto res = std::get_if<nlohmann::json>(&result);

    CPPUNIT_ASSERT_MESSAGE("should return result", res != nullptr);

    auto value = res->at("contents").dump();

    std::string expectedResult{"\"testResult\""};
    auto message = "expected: '" + expectedResult + "', got: '" + value + "'";
    CPPUNIT_ASSERT_MESSAGE(message, value == expectedResult);
}
