//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RangeOption.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class RangeOptionClass;
}

namespace lsps {
    /**
     * Server supports providing semantic tokens for a specific range of a document.
     */

    using nlohmann::json;

    using RangeOption = std::variant<bool, RangeOptionClass>;
}
