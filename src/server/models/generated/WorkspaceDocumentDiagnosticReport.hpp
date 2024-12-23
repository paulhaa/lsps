//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"

namespace lsps {
    enum class DocumentDiagnosticReportKind : int;
}

namespace lsps {
    /**
     * A workspace diagnostic document report.
     *
     * A full document diagnostic report for a workspace diagnostic result.
     *
     * An unchanged document diagnostic report for a workspace diagnostic result.
     */

    using nlohmann::json;

    /**
     * A workspace diagnostic document report.
     *
     * A full document diagnostic report for a workspace diagnostic result.
     *
     * An unchanged document diagnostic report for a workspace diagnostic result.
     */
    class WorkspaceDocumentDiagnosticReport {
        public:
        WorkspaceDocumentDiagnosticReport() = default;
        virtual ~WorkspaceDocumentDiagnosticReport() = default;

        private:
        std::optional<std::vector<Diagnostic>> items;
        DocumentDiagnosticReportKind kind;
        std::optional<std::string> result_id;
        std::string uri;
        std::optional<int64_t> version;

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
         * An optional result id. If provided it will be sent on the next diagnostic request for the
         * same document.
         *
         * A result id which will be sent on the next diagnostic request for the same document.
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
