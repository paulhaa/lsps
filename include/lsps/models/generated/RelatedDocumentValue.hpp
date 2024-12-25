//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RelatedDocumentValue.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"

namespace lsps {
namespace models {
    enum class DocumentDiagnosticReportKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * A diagnostic report with a full set of problems.
     *
     * A diagnostic report indicating that the last returned report is still accurate.
     */

    using nlohmann::json;

    /**
     * A diagnostic report with a full set of problems.
     *
     * A diagnostic report indicating that the last returned report is still accurate.
     */
    class RelatedDocumentValue {
        public:
        RelatedDocumentValue() = default;
        virtual ~RelatedDocumentValue() = default;

        private:
        std::optional<std::vector<Diagnostic>> items;
        DocumentDiagnosticReportKind kind;
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
