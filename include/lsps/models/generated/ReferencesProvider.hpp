//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ReferencesProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class ReferenceOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides find references support.
     */

    using nlohmann::json;

    using ReferencesProvider = std::variant<bool, ReferenceOptions>;
}
}
