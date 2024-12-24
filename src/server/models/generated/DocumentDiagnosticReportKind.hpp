//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentDiagnosticReportKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * A full document diagnostic report.
     *
     * A document diagnostic report indicating no changes to the last result. A server can only
     * return `unchanged` if result ids are provided.
     *
     * The document diagnostic report kinds.
     */

    using nlohmann::json;

    /**
     * A full document diagnostic report.
     *
     * A document diagnostic report indicating no changes to the last result. A server can only
     * return `unchanged` if result ids are provided.
     *
     * The document diagnostic report kinds.
     */
    enum class DocumentDiagnosticReportKind : int { FULL, UNCHANGED };
}
}
