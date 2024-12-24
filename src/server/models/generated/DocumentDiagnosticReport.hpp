//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"
#include "RelatedDocumentValue.hpp"

namespace lsps {
namespace models {
    enum class DocumentDiagnosticReportKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * The result of a document diagnostic pull request. A report can either be a full report
     * containing all diagnostics for the requested document or a unchanged report indicating
     * that nothing has changed in terms of diagnostics in comparison to the last pull request.
     *
     * A full diagnostic report with a set of related documents.
     *
     * An unchanged diagnostic report with a set of related documents.
     */

    using nlohmann::json;

    /**
     * The result of a document diagnostic pull request. A report can either be a full report
     * containing all diagnostics for the requested document or a unchanged report indicating
     * that nothing has changed in terms of diagnostics in comparison to the last pull request.
     *
     * A full diagnostic report with a set of related documents.
     *
     * An unchanged diagnostic report with a set of related documents.
     */
    class DocumentDiagnosticReport {
        public:
        DocumentDiagnosticReport() = default;
        virtual ~DocumentDiagnosticReport() = default;

        private:
        std::optional<std::vector<Diagnostic>> items;
        DocumentDiagnosticReportKind kind;
        std::optional<std::map<std::string, RelatedDocumentValue>> related_documents;
        std::optional<std::string> result_id;

        public:
        /**
         * The actual items.
         */
        std::optional<std::vector<Diagnostic>> get_items() const { return items; }
        void set_items(std::optional<std::vector<Diagnostic>> value) { this->items = value; }

        /**
         * A full document diagnostic report.
         *
         * A document diagnostic report indicating no changes to the last result. A server can only
         * return `unchanged` if result ids are provided.
         */
        const DocumentDiagnosticReportKind & get_kind() const { return kind; }
        DocumentDiagnosticReportKind & get_mutable_kind() { return kind; }
        void set_kind(const DocumentDiagnosticReportKind & value) { this->kind = value; }

        /**
         * Diagnostics of related documents. This information is useful in programming languages
         * where code in a file A can generate diagnostics in a file B which A depends on. An
         * example of such a language is C/C++ where macro definitions in a file a.cpp and result in
         * errors in a header file b.hpp.
         */
        std::optional<std::map<std::string, RelatedDocumentValue>> get_related_documents() const { return related_documents; }
        void set_related_documents(std::optional<std::map<std::string, RelatedDocumentValue>> value) { this->related_documents = value; }

        /**
         * An optional result id. If provided it will be sent on the next diagnostic request for the
         * same document.
         *
         * A result id which will be sent on the next diagnostic request for the same document.
         */
        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }
    };
}
}
