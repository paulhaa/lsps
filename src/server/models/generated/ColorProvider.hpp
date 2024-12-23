//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ColorProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DocumentColorOptions;
}

namespace lsps {
    /**
     * The server provides color provider support.
     */

    using nlohmann::json;

    using ColorProvider = std::variant<bool, DocumentColorOptions>;
}
