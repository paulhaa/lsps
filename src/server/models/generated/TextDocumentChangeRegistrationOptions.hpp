//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentChangeRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
    /**
     * Describe options to be used when registering for text document change events.
     */

    using nlohmann::json;

    /**
     * Describe options to be used when registering for text document change events.
     */
    class TextDocumentChangeRegistrationOptions {
        public:
        TextDocumentChangeRegistrationOptions() = default;
        virtual ~TextDocumentChangeRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        double sync_kind;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * How documents are synced to the server. See TextDocumentSyncKind.Full and
         * TextDocumentSyncKind.Incremental.
         */
        const double & get_sync_kind() const { return sync_kind; }
        double & get_mutable_sync_kind() { return sync_kind; }
        void set_sync_kind(const double & value) { this->sync_kind = value; }
    };
}
