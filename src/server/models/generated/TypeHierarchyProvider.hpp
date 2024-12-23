//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TypeHierarchyProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class TypeHierarchyOptions;
}

namespace lsps {
    /**
     * The server provides type hierarchy support.
     */

    using nlohmann::json;

    using TypeHierarchyProvider = std::variant<bool, TypeHierarchyOptions>;
}
