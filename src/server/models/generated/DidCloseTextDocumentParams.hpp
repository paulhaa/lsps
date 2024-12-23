//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidCloseTextDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentIdentifier.hpp"

namespace lsps {
    using nlohmann::json;

    class DidCloseTextDocumentParams {
        public:
        DidCloseTextDocumentParams() = default;
        virtual ~DidCloseTextDocumentParams() = default;

        private:
        TextDocumentIdentifier text_document;

        public:
        /**
         * The document that was closed.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }
    };
}
