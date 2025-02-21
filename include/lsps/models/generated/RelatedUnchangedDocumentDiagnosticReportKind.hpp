//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RelatedUnchangedDocumentDiagnosticReportKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * A document diagnostic report indicating no changes to the last result. A server can only
     * return `unchanged` if result ids are provided.
     */

    using nlohmann::json;

    /**
     * A document diagnostic report indicating no changes to the last result. A server can only
     * return `unchanged` if result ids are provided.
     */
    enum class RelatedUnchangedDocumentDiagnosticReportKind : int { UNCHANGED };
}
}
