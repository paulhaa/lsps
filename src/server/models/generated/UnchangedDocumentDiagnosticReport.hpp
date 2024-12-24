//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     UnchangedDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

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
     * A diagnostic report indicating that the last returned report is still accurate.
     */

    using nlohmann::json;

    /**
     * A diagnostic report indicating that the last returned report is still accurate.
     */
    class UnchangedDocumentDiagnosticReport {
        public:
        UnchangedDocumentDiagnosticReport() = default;
        virtual ~UnchangedDocumentDiagnosticReport() = default;

        private:
        RelatedUnchangedDocumentDiagnosticReportKind kind;
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
         * A result id which will be sent on the next diagnostic request for the same document.
         */
        const std::string & get_result_id() const { return result_id; }
        std::string & get_mutable_result_id() { return result_id; }
        void set_result_id(const std::string & value) { this->result_id = value; }
    };
}
}
