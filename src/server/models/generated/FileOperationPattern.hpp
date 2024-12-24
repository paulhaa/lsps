//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileOperationPattern.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileOperationPatternOptions.hpp"

namespace lsps {
namespace models {
    enum class FileOperationPatternKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * The actual file operation pattern.
     *
     * A pattern to describe in which file operation requests or notifications the server is
     * interested in.
     */

    using nlohmann::json;

    /**
     * The actual file operation pattern.
     *
     * A pattern to describe in which file operation requests or notifications the server is
     * interested in.
     */
    class FileOperationPattern {
        public:
        FileOperationPattern() = default;
        virtual ~FileOperationPattern() = default;

        private:
        std::string glob;
        std::optional<FileOperationPatternKind> matches;
        std::optional<FileOperationPatternOptions> options;

        public:
        /**
         * The glob pattern to match. Glob patterns can have the following syntax:
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
        const std::string & get_glob() const { return glob; }
        std::string & get_mutable_glob() { return glob; }
        void set_glob(const std::string & value) { this->glob = value; }

        /**
         * Whether to match files or folders with this pattern.
         *
         * Matches both if undefined.
         */
        std::optional<FileOperationPatternKind> get_matches() const { return matches; }
        void set_matches(std::optional<FileOperationPatternKind> value) { this->matches = value; }

        /**
         * Additional options used during matching.
         */
        std::optional<FileOperationPatternOptions> get_options() const { return options; }
        void set_options(std::optional<FileOperationPatternOptions> value) { this->options = value; }
    };
}
}
