//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentEditClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "EditElement.hpp"
#include "OptionalVersionedTextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class TextDocumentEditClass {
        public:
        TextDocumentEditClass() = default;
        virtual ~TextDocumentEditClass() = default;

        private:
        std::vector<EditElement> edits;
        OptionalVersionedTextDocumentIdentifier text_document;

        public:
        /**
         * The edits to be applied.
         */
        const std::vector<EditElement> & get_edits() const { return edits; }
        std::vector<EditElement> & get_mutable_edits() { return edits; }
        void set_edits(const std::vector<EditElement> & value) { this->edits = value; }

        /**
         * The text document to change.
         */
        const OptionalVersionedTextDocumentIdentifier & get_text_document() const { return text_document; }
        OptionalVersionedTextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const OptionalVersionedTextDocumentIdentifier & value) { this->text_document = value; }
    };
}
}
