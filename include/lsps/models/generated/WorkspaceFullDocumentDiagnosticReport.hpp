//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceFullDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"

namespace lsps {
namespace models {
    enum class FullDocumentDiagnosticReportKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * A full document diagnostic report for a workspace diagnostic result.
     */

    using nlohmann::json;

    /**
     * A full document diagnostic report for a workspace diagnostic result.
     */
    class WorkspaceFullDocumentDiagnosticReport {
        public:
        WorkspaceFullDocumentDiagnosticReport() = default;
        virtual ~WorkspaceFullDocumentDiagnosticReport() = default;

        private:
        std::vector<Diagnostic> items;
        FullDocumentDiagnosticReportKind kind;
        std::optional<std::string> result_id;
        std::string uri;
        std::optional<int64_t> version;

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
         * An optional result id. If provided it will be sent on the next diagnostic request for the
         * same document.
         */
        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }

        /**
         * The URI for which diagnostic information is reported.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number for which the diagnostics are reported. If the document is not marked
         * as open `null` can be provided.
         */
        std::optional<int64_t> get_version() const { return version; }
        void set_version(std::optional<int64_t> value) { this->version = value; }
    };
}
}
