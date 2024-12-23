//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentSymbolProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class DocumentSymbolOptions;
}

namespace lsps {
    /**
     * The server provides document symbol support.
     */

    using nlohmann::json;

    using DocumentSymbolProvider = std::variant<bool, DocumentSymbolOptions>;
}
