//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CodeActionContext.hpp"
#include "ProgressToken.hpp"
#include "PurpleRange.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    /**
     * Params for the CodeActionRequest
     */

    using nlohmann::json;

    /**
     * Params for the CodeActionRequest
     */
    class CodeActionParams {
        public:
        CodeActionParams() = default;
        virtual ~CodeActionParams() = default;

        private:
        CodeActionContext context;
        std::optional<ProgressToken> partial_result_token;
        PurpleRange range;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * Context carrying additional information.
         */
        const CodeActionContext & get_context() const { return context; }
        CodeActionContext & get_mutable_context() { return context; }
        void set_context(const CodeActionContext & value) { this->context = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * The range for which the command was invoked.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The document in which the command was invoked.
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
