//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentDiagnosticParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    /**
     * Parameters of the document diagnostic request.
     */

    using nlohmann::json;

    /**
     * Parameters of the document diagnostic request.
     */
    class DocumentDiagnosticParams {
        public:
        DocumentDiagnosticParams() = default;
        virtual ~DocumentDiagnosticParams() = default;

        private:
        std::optional<std::string> identifier;
        std::optional<ProgressToken> partial_result_token;
        std::optional<std::string> previous_result_id;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The additional identifier  provided during registration.
         */
        std::optional<std::string> get_identifier() const { return identifier; }
        void set_identifier(std::optional<std::string> value) { this->identifier = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * The result id of a previous response if provided.
         */
        std::optional<std::string> get_previous_result_id() const { return previous_result_id; }
        void set_previous_result_id(std::optional<std::string> value) { this->previous_result_id = value; }

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
