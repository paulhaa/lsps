//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidOpenTextDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentItem.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class DidOpenTextDocumentParams {
        public:
        DidOpenTextDocumentParams() = default;
        virtual ~DidOpenTextDocumentParams() = default;

        private:
        TextDocumentItem text_document;

        public:
        /**
         * The document that was opened.
         */
        const TextDocumentItem & get_text_document() const { return text_document; }
        TextDocumentItem & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentItem & value) { this->text_document = value; }
    };
}
}
