//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceUnchangedDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    enum class RelatedUnchangedDocumentDiagnosticReportKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * An unchanged document diagnostic report for a workspace diagnostic result.
     */

    using nlohmann::json;

    /**
     * An unchanged document diagnostic report for a workspace diagnostic result.
     */
    class WorkspaceUnchangedDocumentDiagnosticReport {
        public:
        WorkspaceUnchangedDocumentDiagnosticReport() = default;
        virtual ~WorkspaceUnchangedDocumentDiagnosticReport() = default;

        private:
        RelatedUnchangedDocumentDiagnosticReportKind kind;
        std::string result_id;
        std::string uri;
        std::optional<int64_t> version;

        public:
        /**
         * A document diagnostic report indicating no changes to the last result. A server can only
         * return `unchanged` if result ids are provided.
         */
        const RelatedUnchangedDocumentDiagnosticReportKind & get_kind() const { return kind; }
        RelatedUnchangedDocumentDiagnosticReportKind & get_mutable_kind() { return kind; }
        void set_kind(const RelatedUnchangedDocumentDiagnosticReportKind & value) { this->kind = value; }

        /**
         * A result id which will be sent on the next diagnostic request for the same document.
         */
        const std::string & get_result_id() const { return result_id; }
        std::string & get_mutable_result_id() { return result_id; }
        void set_result_id(const std::string & value) { this->result_id = value; }

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
