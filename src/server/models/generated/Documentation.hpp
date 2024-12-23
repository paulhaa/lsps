//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Documentation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DocumentationMarkupContent;
}

namespace lsps {
    using nlohmann::json;

    using Documentation = std::variant<DocumentationMarkupContent, std::string>;
}
