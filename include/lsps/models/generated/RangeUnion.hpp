//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RangeUnion.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class RangeClass;
}
}

namespace lsps {
namespace models {
    using nlohmann::json;

    using RangeUnion = std::variant<bool, RangeClass>;
}
}
