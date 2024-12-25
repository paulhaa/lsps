//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentRangeFormattingProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class DocumentRangeFormattingOptions;
}
}

namespace lsps {
namespace models {
    /**
     * The server provides document range formatting.
     */

    using nlohmann::json;

    using DocumentRangeFormattingProvider = std::variant<bool, DocumentRangeFormattingOptions>;
}
}
