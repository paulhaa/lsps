//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MonikerProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class MonikerOptions;
}
}

namespace lsps {
namespace models {
    /**
     * Whether server provides moniker support.
     */

    using nlohmann::json;

    using MonikerProvider = std::variant<bool, MonikerOptions>;
}
}
