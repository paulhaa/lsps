//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DeclarationProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DeclarationRationOptions;
}

namespace lsps {
    /**
     * The server provides go to declaration support.
     */

    using nlohmann::json;

    using DeclarationProvider = std::variant<bool, DeclarationRationOptions>;
}
