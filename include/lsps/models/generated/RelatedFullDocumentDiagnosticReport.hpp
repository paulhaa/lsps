//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RelatedFullDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"
#include "RelatedDocumentValue.hpp"

namespace lsps {
namespace models {
    enum class FullDocumentDiagnosticReportKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * A full diagnostic report with a set of related documents.
     */

    using nlohmann::json;

    /**
     * A full diagnostic report with a set of related documents.
     */
    class RelatedFullDocumentDiagnosticReport {
        public:
        RelatedFullDocumentDiagnosticReport() = default;
        virtual ~RelatedFullDocumentDiagnosticReport() = default;

        private:
        std::vector<Diagnostic> items;
        FullDocumentDiagnosticReportKind kind;
        std::optional<std::map<std::string, RelatedDocumentValue>> related_documents;
        std::optional<std::string> result_id;

        public:
        /**
         * The actual items.
         */
        const std::vector<Diagnostic> & get_items() const { return items; }
        std::vector<Diagnostic> & get_mutable_items() { return items; }
        void set_items(const std::vector<Diagnostic> & value) { this->items = value; }

        /**
         * A full document diagnostic report.
         */
        const FullDocumentDiagnosticReportKind & get_kind() const { return kind; }
        FullDocumentDiagnosticReportKind & get_mutable_kind() { return kind; }
        void set_kind(const FullDocumentDiagnosticReportKind & value) { this->kind = value; }

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
         */
        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }
    };
}
}
