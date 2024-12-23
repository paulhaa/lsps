//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The document that was opened.
     */

    using nlohmann::json;

    /**
     * The document that was opened.
     */
    class TextDocumentItem {
        public:
        TextDocumentItem() = default;
        virtual ~TextDocumentItem() = default;

        private:
        std::string language_id;
        std::string text;
        std::string uri;
        int64_t version;

        public:
        /**
         * The text document's language identifier.
         */
        const std::string & get_language_id() const { return language_id; }
        std::string & get_mutable_language_id() { return language_id; }
        void set_language_id(const std::string & value) { this->language_id = value; }

        /**
         * The content of the opened text document.
         */
        const std::string & get_text() const { return text; }
        std::string & get_mutable_text() { return text; }
        void set_text(const std::string & value) { this->text = value; }

        /**
         * The text document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number of this document (it will increase after each change, including
         * undo/redo).
         */
        const int64_t & get_version() const { return version; }
        int64_t & get_mutable_version() { return version; }
        void set_version(const int64_t & value) { this->version = value; }
    };
}
