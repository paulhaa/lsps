//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ContentsUnion.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "MarkedString.hpp"

namespace lsps {
    class ContentsMarkupContent;
}

namespace lsps {
    /**
     * The hover's content
     */

    using nlohmann::json;

    using ContentsUnion = std::variant<std::vector<MarkedString>, ContentsMarkupContent, std::string>;
}
