//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentHighlightProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DocumentHighlightOptions;
}

namespace lsps {
    /**
     * The server provides document highlight support.
     */

    using nlohmann::json;

    using DocumentHighlightProvider = std::variant<bool, DocumentHighlightOptions>;
}
