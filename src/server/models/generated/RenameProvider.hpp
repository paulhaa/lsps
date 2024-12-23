//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class RenameOptions;
}

namespace lsps {
    /**
     * The server provides rename support. RenameOptions may only be specified if the client
     * states that it supports `prepareSupport` in its initial `initialize` request.
     */

    using nlohmann::json;

    using RenameProvider = std::variant<bool, RenameOptions>;
}
