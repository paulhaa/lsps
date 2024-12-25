//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MonikerKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The moniker kind if known.
     *
     * The moniker kind.
     */

    using nlohmann::json;

    /**
     * The moniker kind if known.
     *
     * The moniker kind.
     */
    enum class MonikerKind : int { EXPORT, IMPORT, LOCAL };
}
}
