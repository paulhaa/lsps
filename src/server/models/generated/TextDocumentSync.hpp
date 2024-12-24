//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentSync.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class TextDocumentSyncOptions;
}
}

namespace lsps {
namespace models {
    /**
     * Defines how text documents are synced. Is either a detailed structure defining each
     * notification or for backwards compatibility the TextDocumentSyncKind number. If omitted
     * it defaults to `TextDocumentSyncKind.None`.
     */

    using nlohmann::json;

    using TextDocumentSync = std::variant<TextDocumentSyncOptions, double>;
}
}
