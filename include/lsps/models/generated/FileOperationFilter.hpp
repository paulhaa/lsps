//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileOperationFilter.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileOperationPattern.hpp"

namespace lsps {
namespace models {
    /**
     * A filter to describe in which file operation requests or notifications the server is
     * interested in.
     */

    using nlohmann::json;

    /**
     * A filter to describe in which file operation requests or notifications the server is
     * interested in.
     */
    class FileOperationFilter {
        public:
        FileOperationFilter() = default;
        virtual ~FileOperationFilter() = default;

        private:
        FileOperationPattern pattern;
        std::optional<std::string> scheme;

        public:
        /**
         * The actual file operation pattern.
         */
        const FileOperationPattern & get_pattern() const { return pattern; }
        FileOperationPattern & get_mutable_pattern() { return pattern; }
        void set_pattern(const FileOperationPattern & value) { this->pattern = value; }

        /**
         * A Uri like `file` or `untitled`.
         */
        std::optional<std::string> get_scheme() const { return scheme; }
        void set_scheme(std::optional<std::string> value) { this->scheme = value; }
    };
}
}
