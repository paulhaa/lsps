//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WillSaveTextDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    /**
     * The parameters send in a will save text document notification.
     */

    using nlohmann::json;

    /**
     * The parameters send in a will save text document notification.
     */
    class WillSaveTextDocumentParams {
        public:
        WillSaveTextDocumentParams() = default;
        virtual ~WillSaveTextDocumentParams() = default;

        private:
        double reason;
        TextDocumentIdentifier text_document;

        public:
        /**
         * The 'TextDocumentSaveReason'.
         */
        const double & get_reason() const { return reason; }
        double & get_mutable_reason() { return reason; }
        void set_reason(const double & value) { this->reason = value; }

        /**
         * The document that will be saved.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }
    };
}
}
