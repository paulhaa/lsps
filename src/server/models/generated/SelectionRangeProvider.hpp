//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SelectionRangeProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class SelectionRangeOptions;
}

namespace lsps {
    /**
     * The server provides selection range support.
     */

    using nlohmann::json;

    using SelectionRangeProvider = std::variant<bool, SelectionRangeOptions>;
}
