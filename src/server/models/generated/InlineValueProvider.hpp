//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class InlineValueOptions;
}

namespace lsps {
    /**
     * The server provides inline values.
     */

    using nlohmann::json;

    using InlineValueProvider = std::variant<bool, InlineValueOptions>;
}
