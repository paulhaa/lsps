//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FailureHandlingKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The failure handling strategy of a client if applying the workspace edit fails.
     */

    using nlohmann::json;

    /**
     * The failure handling strategy of a client if applying the workspace edit fails.
     */
    enum class FailureHandlingKind : int { ABORT, TEXT_ONLY_TRANSACTIONAL, TRANSACTIONAL, UNDO };
}
}
