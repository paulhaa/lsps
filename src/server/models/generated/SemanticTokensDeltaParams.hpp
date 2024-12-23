//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensDeltaParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
    using nlohmann::json;

    class SemanticTokensDeltaParams {
        public:
        SemanticTokensDeltaParams() = default;
        virtual ~SemanticTokensDeltaParams() = default;

        private:
        std::optional<ProgressToken> partial_result_token;
        std::string previous_result_id;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * The result id of a previous response. The result Id can either point to a full response
         * or a delta response depending on what was received last.
         */
        const std::string & get_previous_result_id() const { return previous_result_id; }
        std::string & get_mutable_previous_result_id() { return previous_result_id; }
        void set_previous_result_id(const std::string & value) { this->previous_result_id = value; }

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
