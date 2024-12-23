//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FullCapability.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class FullCapabilityClass;
}

namespace lsps {
    /**
     * The client will send the `textDocument/semanticTokens/full` request if the server
     * provides a corresponding handler.
     */

    using nlohmann::json;

    using FullCapability = std::variant<bool, FullCapabilityClass>;
}
