//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Id.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The request id.
     */

    using nlohmann::json;

    using Id = std::optional<std::variant<int64_t, std::string>>;
}
}
