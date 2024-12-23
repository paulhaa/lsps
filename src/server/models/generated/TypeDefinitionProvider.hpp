//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TypeDefinitionProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class TypeDefinitionTionOptions;
}

namespace lsps {
    /**
     * The server provides goto type definition support.
     */

    using nlohmann::json;

    using TypeDefinitionProvider = std::variant<bool, TypeDefinitionTionOptions>;
}
