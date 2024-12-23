//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookUnion.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class NotebookClass;
}

namespace lsps {
    using nlohmann::json;

    using NotebookUnion = std::variant<NotebookClass, std::string>;
}
