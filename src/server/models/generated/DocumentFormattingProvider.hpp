//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentFormattingProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DocumentFormattingOptions;
}

namespace lsps {
    /**
     * The server provides document formatting.
     */

    using nlohmann::json;

    using DocumentFormattingProvider = std::variant<bool, DocumentFormattingOptions>;
}
