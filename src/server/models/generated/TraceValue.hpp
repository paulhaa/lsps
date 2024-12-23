//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TraceValue.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The initial trace setting. If omitted trace is disabled ('off').
     *
     * The new value that should be assigned to the trace setting.
     */

    using nlohmann::json;

    /**
     * The initial trace setting. If omitted trace is disabled ('off').
     *
     * The new value that should be assigned to the trace setting.
     */
    enum class TraceValue : int { MESSAGES, OFF, VERBOSE };
}
