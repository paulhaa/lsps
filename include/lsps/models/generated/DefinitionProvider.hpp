//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DefinitionProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class DefinitionOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides goto definition support.
     */

    using nlohmann::json;

    using DefinitionProvider = std::variant<bool, DefinitionOptions>;
}
}
