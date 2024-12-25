//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceDiagnosticReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceDocumentDiagnosticReport.hpp"

namespace lsps {
namespace models {
    /**
     * A workspace diagnostic report.
     */

    using nlohmann::json;

    /**
     * A workspace diagnostic report.
     */
    class WorkspaceDiagnosticReport {
        public:
        WorkspaceDiagnosticReport() = default;
        virtual ~WorkspaceDiagnosticReport() = default;

        private:
        std::vector<WorkspaceDocumentDiagnosticReport> items;

        public:
        const std::vector<WorkspaceDocumentDiagnosticReport> & get_items() const { return items; }
        std::vector<WorkspaceDocumentDiagnosticReport> & get_mutable_items() { return items; }
        void set_items(const std::vector<WorkspaceDocumentDiagnosticReport> & value) { this->items = value; }
    };
}
}
