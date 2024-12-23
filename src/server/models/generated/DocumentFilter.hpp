//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentFilter.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class DocumentFilter {
        public:
        DocumentFilter() = default;
        virtual ~DocumentFilter() = default;

        private:
        std::optional<std::string> language;
        std::optional<std::string> pattern;
        std::optional<std::string> scheme;

        public:
        /**
         * A language id, like `typescript`.
         */
        std::optional<std::string> get_language() const { return language; }
        void set_language(std::optional<std::string> value) { this->language = value; }

        /**
         * A glob pattern, like `*.{ts,js}`.
         *
         * Glob patterns can have the following syntax:
         * - `*` to match one or more characters in a path segment
         * - `?` to match on one character in a path segment
         * - `**` to match any number of path segments, including none
         * - `{}` to group sub patterns into an OR expression. (e.g. `**​/*.{ts,js}`   matches all
         * TypeScript and JavaScript files)
         * - `[]` to declare a range of characters to match in a path segment   (e.g.,
         * `example.[0-9]` to match on `example.0`, `example.1`, …)
         * - `[!...]` to negate a range of characters to match in a path segment   (e.g.,
         * `example.[!0-9]` to match on `example.a`, `example.b`, but   not `example.0`)
         */
        std::optional<std::string> get_pattern() const { return pattern; }
        void set_pattern(std::optional<std::string> value) { this->pattern = value; }

        /**
         * A Uri scheme, like `file` or `untitled`.
         */
        std::optional<std::string> get_scheme() const { return scheme; }
        void set_scheme(std::optional<std::string> value) { this->scheme = value; }
    };
}
