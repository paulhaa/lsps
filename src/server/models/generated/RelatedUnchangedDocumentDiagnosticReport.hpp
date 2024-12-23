//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RelatedUnchangedDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "RelatedDocumentValue.hpp"

namespace lsps {
    enum class RelatedUnchangedDocumentDiagnosticReportKind : int;
}

namespace lsps {
    /**
     * An unchanged diagnostic report with a set of related documents.
     */

    using nlohmann::json;

    /**
     * An unchanged diagnostic report with a set of related documents.
     */
    class RelatedUnchangedDocumentDiagnosticReport {
        public:
        RelatedUnchangedDocumentDiagnosticReport() = default;
        virtual ~RelatedUnchangedDocumentDiagnosticReport() = default;

        private:
        RelatedUnchangedDocumentDiagnosticReportKind kind;
        std::optional<std::map<std::string, RelatedDocumentValue>> related_documents;
        std::string result_id;

        public:
        /**
         * A document diagnostic report indicating no changes to the last result. A server can only
         * return `unchanged` if result ids are provided.
         */
        const RelatedUnchangedDocumentDiagnosticReportKind & get_kind() const { return kind; }
        RelatedUnchangedDocumentDiagnosticReportKind & get_mutable_kind() { return kind; }
        void set_kind(const RelatedUnchangedDocumentDiagnosticReportKind & value) { this->kind = value; }

        /**
         * Diagnostics of related documents. This information is useful in programming languages
         * where code in a file A can generate diagnostics in a file B which A depends on. An
         * example of such a language is C/C++ where macro definitions in a file a.cpp and result in
         * errors in a header file b.hpp.
         */
        std::optional<std::map<std::string, RelatedDocumentValue>> get_related_documents() const { return related_documents; }
        void set_related_documents(std::optional<std::map<std::string, RelatedDocumentValue>> value) { this->related_documents = value; }

        /**
         * A result id which will be sent on the next diagnostic request for the same document.
         */
        const std::string & get_result_id() const { return result_id; }
        std::string & get_mutable_result_id() { return result_id; }
        void set_result_id(const std::string & value) { this->result_id = value; }
    };
}
