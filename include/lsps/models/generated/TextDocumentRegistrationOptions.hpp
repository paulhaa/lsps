//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
namespace models {
    /**
     * General text document registration options.
     */

    using nlohmann::json;

    /**
     * General text document registration options.
     */
    class TextDocumentRegistrationOptions {
        public:
        TextDocumentRegistrationOptions() = default;
        virtual ~TextDocumentRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }
    };
}
}
