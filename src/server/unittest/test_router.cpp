#include "test_router.hpp"

#include "requestHandler/router.hpp"

void RouterTest::testAddHandler() {
    lsps::Router router;
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "missing handler should throw", router.invoke("test", std::nullopt), std::runtime_error);

    router.addHandler("test", handleTest);

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("added handler should not throw", router.invoke("test", std::nullopt));
}

void RouterTest::testInvoke() {
    lsps::Router router;
    router.addHandler("test", handleTest);
    auto result = router.invoke("test", std::nullopt);

    CPPUNIT_ASSERT_MESSAGE("should return result", result.has_value());

    auto value = std::get<std::string>(result.value());

    std::string expectedResult{"testRequest"};
    auto message = "expected: '" + expectedResult + "', got: '" + value + "'";
    CPPUNIT_ASSERT_MESSAGE(message, value == expectedResult);
}
