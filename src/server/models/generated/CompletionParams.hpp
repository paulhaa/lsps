//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CompletionContext.hpp"
#include "ProgressToken.hpp"
#include "Position.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CompletionParams {
        public:
        CompletionParams() = default;
        virtual ~CompletionParams() = default;

        private:
        std::optional<CompletionContext> context;
        std::optional<ProgressToken> partial_result_token;
        Position position;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The completion context. This is only available if the client specifies to send this using
         * the client capability `completion.contextSupport === true`
         */
        std::optional<CompletionContext> get_context() const { return context; }
        void set_context(std::optional<CompletionContext> value) { this->context = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

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
