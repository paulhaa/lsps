//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ImplementationProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class ImplementationAtionOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides goto implementation support.
     */

    using nlohmann::json;

    using ImplementationProvider = std::variant<bool, ImplementationAtionOptions>;
}
}
