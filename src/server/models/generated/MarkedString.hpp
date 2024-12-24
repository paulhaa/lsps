//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MarkedString.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class MarkedStringClass;
}
}

namespace lsps {
namespace models {
    /**
     * MarkedString can be used to render human readable text. It is either a markdown string or
     * a code-block that provides a language and a code snippet. The language identifier is
     * semantically equal to the optional language identifier in fenced code blocks in GitHub
     * issues.
     *
     * The pair of a language and a value is an equivalent to markdown: ```${language} ${value}
     * ```
     *
     * Note that markdown strings will be sanitized - that means html will be escaped.
     */

    using nlohmann::json;

    using MarkedString = std::variant<MarkedStringClass, std::string>;
}
}
