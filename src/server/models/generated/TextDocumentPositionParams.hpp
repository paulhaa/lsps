//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentPositionParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Position.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
    using nlohmann::json;

    class TextDocumentPositionParams {
        public:
        TextDocumentPositionParams() = default;
        virtual ~TextDocumentPositionParams() = default;

        private:
        Position position;
        TextDocumentIdentifier text_document;

        public:
        /**
         * The position inside the text document.
         */
        const Position & get_position() const { return position; }
        Position & get_mutable_position() { return position; }
        void set_position(const Position & value) { this->position = value; }

        /**
         * The text document.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }
    };
}
