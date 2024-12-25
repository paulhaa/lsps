//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CallHierarchyProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class CallHierarchyOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides call hierarchy support.
     */

    using nlohmann::json;

    using CallHierarchyProvider = std::variant<bool, CallHierarchyOptions>;
}
}
