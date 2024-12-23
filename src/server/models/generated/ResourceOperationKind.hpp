//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ResourceOperationKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * A create
     *
     * A rename
     *
     * A delete
     *
     * The kind of resource operations supported by the client.
     */

    using nlohmann::json;

    /**
     * A create
     *
     * A rename
     *
     * A delete
     *
     * The kind of resource operations supported by the client.
     */
    enum class ResourceOperationKind : int { CREATE, DELETE, RENAME };
}
