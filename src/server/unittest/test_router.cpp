#include "test_router.hpp"

#include "lsps/router.hpp"

void RouterTest::testAddProvider() {
    lsps::Router router;
    CPPUNIT_ASSERT_THROW_MESSAGE(
        "missing provider should throw", router.invoke(lsps::HOVER, std::nullopt), std::runtime_error);

    router.addProvider<lsps::models::HoverParams, lsps::models::Hover>(std::make_shared<TestHoverProvider>());

    CPPUNIT_ASSERT_NO_THROW_MESSAGE("added provider should not throw", router.invoke(lsps::HOVER, std::nullopt));
}

void RouterTest::testInvoke() {
    lsps::Router router;
    router.addProvider<lsps::models::HoverParams, lsps::models::Hover>(std::make_shared<TestHoverProvider>());
    auto result = router.invoke(lsps::HOVER, std::nullopt);
    auto res = std::get_if<nlohmann::json>(&result);

    CPPUNIT_ASSERT_MESSAGE("should return result", res != nullptr);

    auto value = res->at("contents").dump();

    std::string expectedResult{"\"testResult\""};
    auto message = "expected: '" + expectedResult + "', got: '" + value + "'";
    CPPUNIT_ASSERT_MESSAGE(message, value == expectedResult);

    router.addProvider<lsps::models::DefinitionParams, std::optional<lsps::models::LocationClass>>(
        std::make_shared<TestDefinitionProvider>());

    // Return null
    result = router.invoke(lsps::DEFINITION, std::nullopt);
    res = std::get_if<nlohmann::json>(&result);
    CPPUNIT_ASSERT_MESSAGE("should return nullptr", res->is_null());

    // Return optional result
    lsps::models::Position pos;
    pos.set_line(0);
    pos.set_character(0);

    lsps::models::TextDocumentIdentifier documentIdentifier;
    std::string uri = "/some/test/uri";
    documentIdentifier.set_uri(uri);

    lsps::models::DefinitionParams definitionParams;
    definitionParams.set_position(pos);
    definitionParams.set_text_document(documentIdentifier);
    result = router.invoke(lsps::DEFINITION, definitionParams);
    res = std::get_if<nlohmann::json>(&result);

    value = res->at("uri").dump();
    std::string expectedUri = '"' + uri + '"';
    message = "expected: '" + expectedUri + "', got: '" + value + "'";
    CPPUNIT_ASSERT_MESSAGE(message, value == expectedUri);
}
