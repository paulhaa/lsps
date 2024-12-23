//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MarkupKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Describes the content type that a client supports in various result literals like
     * `Hover`, `ParameterInfo` or `CompletionItem`.
     *
     * Please note that `MarkupKinds` must not start with a `$`. This kinds are reserved for
     * internal usage.
     *
     * The type of the Markup
     */

    using nlohmann::json;

    /**
     * Describes the content type that a client supports in various result literals like
     * `Hover`, `ParameterInfo` or `CompletionItem`.
     *
     * Please note that `MarkupKinds` must not start with a `$`. This kinds are reserved for
     * internal usage.
     *
     * The type of the Markup
     */
    enum class MarkupKind : int { MARKDOWN, PLAINTEXT };
}
