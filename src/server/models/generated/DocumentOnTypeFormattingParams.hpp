//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentOnTypeFormattingParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FormattingOptions.hpp"
#include "Position.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class DocumentOnTypeFormattingParams {
        public:
        DocumentOnTypeFormattingParams() = default;
        virtual ~DocumentOnTypeFormattingParams() = default;

        private:
        std::string ch;
        FormattingOptions options;
        Position position;
        TextDocumentIdentifier text_document;

        public:
        /**
         * The character that has been typed that triggered the formatting on type request. That is
         * not necessarily the last character that got inserted into the document since the client
         * could auto insert characters as well (e.g. like automatic brace completion).
         */
        const std::string & get_ch() const { return ch; }
        std::string & get_mutable_ch() { return ch; }
        void set_ch(const std::string & value) { this->ch = value; }

        /**
         * The formatting options.
         */
        const FormattingOptions & get_options() const { return options; }
        FormattingOptions & get_mutable_options() { return options; }
        void set_options(const FormattingOptions & value) { this->options = value; }

        /**
         * The position around which the on type formatting should happen. This is not necessarily
         * the exact position where the character denoted by the property `ch` got typed.
         */
        const Position & get_position() const { return position; }
        Position & get_mutable_position() { return position; }
        void set_position(const Position & value) { this->position = value; }

        /**
         * The document to format.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }
    };
}
}
