//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelpParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SignatureHelpContext.hpp"
#include "Position.hpp"
#include "TextDocumentIdentifier.hpp"
#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SignatureHelpParams {
        public:
        SignatureHelpParams() = default;
        virtual ~SignatureHelpParams() = default;

        private:
        std::optional<SignatureHelpContext> context;
        Position position;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The signature help context. This is only available if the client specifies to send this
         * using the client capability `textDocument.signatureHelp.contextSupport === true`
         */
        std::optional<SignatureHelpContext> get_context() const { return context; }
        void set_context(std::optional<SignatureHelpContext> value) { this->context = value; }

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

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
}
