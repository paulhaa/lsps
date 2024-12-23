//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentSaveRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
    using nlohmann::json;

    class TextDocumentSaveRegistrationOptions {
        public:
        TextDocumentSaveRegistrationOptions() = default;
        virtual ~TextDocumentSaveRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<bool> include_text;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * The client is supposed to include the content on save.
         */
        std::optional<bool> get_include_text() const { return include_text; }
        void set_include_text(std::optional<bool> value) { this->include_text = value; }
    };
}
