//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "InlineValueContext.hpp"
#include "PurpleRange.hpp"
#include "TextDocumentIdentifier.hpp"
#include "ProgressToken.hpp"

namespace lsps {
    /**
     * A parameter literal used in inline value requests.
     */

    using nlohmann::json;

    /**
     * A parameter literal used in inline value requests.
     */
    class InlineValueParams {
        public:
        InlineValueParams() = default;
        virtual ~InlineValueParams() = default;

        private:
        InlineValueContext context;
        PurpleRange range;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * Additional information about the context in which inline values were requested.
         */
        const InlineValueContext & get_context() const { return context; }
        InlineValueContext & get_mutable_context() { return context; }
        void set_context(const InlineValueContext & value) { this->context = value; }

        /**
         * The document range for which inline values should be computed.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

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
