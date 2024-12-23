//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"
#include "TextDocumentIdentifier.hpp"
#include "ProgressToken.hpp"

namespace lsps {
    /**
     * A parameter literal used in inlay hint requests.
     */

    using nlohmann::json;

    /**
     * A parameter literal used in inlay hint requests.
     */
    class InlayHintParams {
        public:
        InlayHintParams() = default;
        virtual ~InlayHintParams() = default;

        private:
        PurpleRange range;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The visible document range for which inlay hints should be computed.
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
