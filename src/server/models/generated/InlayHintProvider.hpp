//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class InlayHintOptions;
}

namespace lsps {
    /**
     * The server provides inlay hints.
     */

    using nlohmann::json;

    using InlayHintProvider = std::variant<bool, InlayHintOptions>;
}
