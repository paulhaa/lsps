//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokenModifiers.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    enum class SemanticTokenModifiers : int { ABSTRACT, ASYNC, DECLARATION, DEFAULT_LIBRARY, DEFINITION, DEPRECATED, DOCUMENTATION, MODIFICATION, READONLY, STATIC };
}
