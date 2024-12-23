//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidSaveTextDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentIdentifier.hpp"

namespace lsps {
    using nlohmann::json;

    class DidSaveTextDocumentParams {
        public:
        DidSaveTextDocumentParams() = default;
        virtual ~DidSaveTextDocumentParams() = default;

        private:
        std::optional<std::string> text;
        TextDocumentIdentifier text_document;

        public:
        /**
         * Optional the content when saved. Depends on the includeText value when the save
         * notification was requested.
         */
        std::optional<std::string> get_text() const { return text; }
        void set_text(std::optional<std::string> value) { this->text = value; }

        /**
         * The document that was saved.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }
    };
}
