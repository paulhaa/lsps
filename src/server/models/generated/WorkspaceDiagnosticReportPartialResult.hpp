//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceDiagnosticReportPartialResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceDocumentDiagnosticReport.hpp"

namespace lsps {
    /**
     * A partial result for a workspace diagnostic report.
     */

    using nlohmann::json;

    /**
     * A partial result for a workspace diagnostic report.
     */
    class WorkspaceDiagnosticReportPartialResult {
        public:
        WorkspaceDiagnosticReportPartialResult() = default;
        virtual ~WorkspaceDiagnosticReportPartialResult() = default;

        private:
        std::vector<WorkspaceDocumentDiagnosticReport> items;

        public:
        const std::vector<WorkspaceDocumentDiagnosticReport> & get_items() const { return items; }
        std::vector<WorkspaceDocumentDiagnosticReport> & get_mutable_items() { return items; }
        void set_items(const std::vector<WorkspaceDocumentDiagnosticReport> & value) { this->items = value; }
    };
}
