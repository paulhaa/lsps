//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentIdentifier.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The text document.
     *
     * The document in which the command was invoked.
     *
     * The document to request code lens for.
     *
     * The document that was closed.
     *
     * The document that was saved.
     *
     * The document to format.
     *
     * The document to provide document links for.
     *
     * The document that will be saved.
     */

    using nlohmann::json;

    /**
     * The text document.
     *
     * The document in which the command was invoked.
     *
     * The document to request code lens for.
     *
     * The document that was closed.
     *
     * The document that was saved.
     *
     * The document to format.
     *
     * The document to provide document links for.
     *
     * The document that will be saved.
     */
    class TextDocumentIdentifier {
        public:
        TextDocumentIdentifier() = default;
        virtual ~TextDocumentIdentifier() = default;

        private:
        std::string uri;

        public:
        /**
         * The text document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
