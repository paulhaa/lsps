//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LinkedEditingRangeProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class LinkedEditingRangeOptions;
}

namespace lsps {
    /**
     * The server provides linked editing range support.
     */

    using nlohmann::json;

    using LinkedEditingRangeProvider = std::variant<bool, LinkedEditingRangeOptions>;
}
