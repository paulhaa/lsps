//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FullDocumentDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

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
     * A diagnostic report with a full set of problems.
     */

    using nlohmann::json;

    /**
     * A diagnostic report with a full set of problems.
     */
    class FullDocumentDiagnosticReport {
        public:
        FullDocumentDiagnosticReport() = default;
        virtual ~FullDocumentDiagnosticReport() = default;

        private:
        std::vector<Diagnostic> items;
        FullDocumentDiagnosticReportKind kind;
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
         * An optional result id. If provided it will be sent on the next diagnostic request for the
         * same document.
         */
        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }
    };
}
}
