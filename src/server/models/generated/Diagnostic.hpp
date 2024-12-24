//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Diagnostic.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"
#include "CodeDescription.hpp"
#include "LspAny.hpp"
#include "PurpleRange.hpp"
#include "DiagnosticRelatedInformation.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class Diagnostic {
        public:
        Diagnostic() = default;
        virtual ~Diagnostic() = default;

        private:
        std::optional<ProgressToken> code;
        std::optional<CodeDescription> code_description;
        LspAny data;
        std::string message;
        PurpleRange range;
        std::optional<std::vector<DiagnosticRelatedInformation>> related_information;
        std::optional<double> severity;
        std::optional<std::string> source;
        std::optional<std::vector<double>> tags;

        public:
        /**
         * The diagnostic's code, which might appear in the user interface.
         */
        std::optional<ProgressToken> get_code() const { return code; }
        void set_code(std::optional<ProgressToken> value) { this->code = value; }

        /**
         * An optional property to describe the error code.
         */
        std::optional<CodeDescription> get_code_description() const { return code_description; }
        void set_code_description(std::optional<CodeDescription> value) { this->code_description = value; }

        /**
         * A data entry field that is preserved between a `textDocument/publishDiagnostics`
         * notification and `textDocument/codeAction` request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The diagnostic's message.
         */
        const std::string & get_message() const { return message; }
        std::string & get_mutable_message() { return message; }
        void set_message(const std::string & value) { this->message = value; }

        /**
         * The range at which the message applies.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * An array of related diagnostic information, e.g. when symbol-names within a scope collide
         * all definitions can be marked via this property.
         */
        std::optional<std::vector<DiagnosticRelatedInformation>> get_related_information() const { return related_information; }
        void set_related_information(std::optional<std::vector<DiagnosticRelatedInformation>> value) { this->related_information = value; }

        /**
         * The diagnostic's severity. To avoid interpretation mismatches when a server is used with
         * different clients it is highly recommended that servers always provide a severity value.
         * If omitted, it’s recommended for the client to interpret it as an Error severity.
         */
        std::optional<double> get_severity() const { return severity; }
        void set_severity(std::optional<double> value) { this->severity = value; }

        /**
         * A human-readable string describing the source of this diagnostic, e.g. 'typescript' or
         * 'super lint'.
         */
        std::optional<std::string> get_source() const { return source; }
        void set_source(std::optional<std::string> value) { this->source = value; }

        /**
         * Additional metadata about the diagnostic.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }
    };
}
}
