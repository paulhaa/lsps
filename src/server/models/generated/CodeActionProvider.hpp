//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionProvider.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class CodeActionOptions;
}

namespace lsps {
    /**
     * The server provides code actions. The `CodeActionOptions` return type is only valid if
     * the client signals code action literal support via the property
     * `textDocument.codeAction.codeActionLiteralSupport`.
     */

    using nlohmann::json;

    using CodeActionProvider = std::variant<bool, CodeActionOptions>;
}
