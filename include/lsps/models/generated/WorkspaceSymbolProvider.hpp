//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class WorkspaceSymbolOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides workspace symbol support.
     */

    using nlohmann::json;

    using WorkspaceSymbolProvider = std::variant<bool, WorkspaceSymbolOptions>;
}
}
