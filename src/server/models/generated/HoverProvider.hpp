//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     HoverProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class HoverOptions;
}

namespace lsps {
    /**
     * The server provides hover support.
     */

    using nlohmann::json;

    using HoverProvider = std::variant<bool, HoverOptions>;
}
