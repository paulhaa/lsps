//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ContentsUnion.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <nlohmann/json.hpp>
#include <optional>
#include <variant>

#include "MarkedString.hpp"
#include "helper.hpp"

namespace lsps {
class ContentsMarkupContent;
}

namespace lsps {
/**
 * The hover's content
 */

using nlohmann::json;

using ContentsUnion = std::variant<std::vector<MarkedString>, ContentsMarkupContent, std::string>;
}  // namespace lsps
