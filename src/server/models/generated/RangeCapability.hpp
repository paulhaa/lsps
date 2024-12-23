//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RangeCapability.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class RangeCapabilityClass;
}

namespace lsps {
    /**
     * The client will send the `textDocument/semanticTokens/range` request if the server
     * provides a corresponding handler.
     */

    using nlohmann::json;

    using RangeCapability = std::variant<bool, RangeCapabilityClass>;
}
