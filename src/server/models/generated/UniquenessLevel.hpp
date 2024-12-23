//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     UniquenessLevel.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The scope in which the moniker is unique
     *
     * Moniker uniqueness level to define scope of the moniker.
     */

    using nlohmann::json;

    /**
     * The scope in which the moniker is unique
     *
     * Moniker uniqueness level to define scope of the moniker.
     */
    enum class UniquenessLevel : int { DOCUMENT, GLOBAL, GROUP, PROJECT, SCHEME };
}
