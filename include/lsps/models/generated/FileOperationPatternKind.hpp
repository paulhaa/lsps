//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileOperationPatternKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Whether to match files or folders with this pattern.
     *
     * Matches both if undefined.
     *
     * A pattern kind describing if a glob pattern matches a file a folder or both.
     */

    using nlohmann::json;

    /**
     * Whether to match files or folders with this pattern.
     *
     * Matches both if undefined.
     *
     * A pattern kind describing if a glob pattern matches a file a folder or both.
     */
    enum class FileOperationPatternKind : int { FILE, FOLDER };
}
}
