//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FoldingRangeProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class FoldingRangeOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides folding provider support.
     */

    using nlohmann::json;

    using FoldingRangeProvider = std::variant<bool, FoldingRangeOptions>;
}
}
