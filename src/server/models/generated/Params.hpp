//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Params.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The notification's params.
     *
     * The method's params.
     */

    using nlohmann::json;

    using Params = std::variant<std::vector<nlohmann::json>, std::map<std::string, nlohmann::json>>;
}
