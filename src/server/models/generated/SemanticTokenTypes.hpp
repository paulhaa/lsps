//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokenTypes.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    enum class SemanticTokenTypes : int { CLASS, COMMENT, DECORATOR, ENUM, ENUM_MEMBER, EVENT, FUNCTION, INTERFACE, KEYWORD, MACRO, METHOD, MODIFIER, NAMESPACE, NUMBER, OPERATOR, PARAMETER, PROPERTY, REGEXP, STRING, STRUCT, TYPE, TYPE_PARAMETER, VARIABLE };
}
