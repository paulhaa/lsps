//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileOperationPatternOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Additional options used during matching.
     *
     * Matching options for the file operation pattern.
     */

    using nlohmann::json;

    /**
     * Additional options used during matching.
     *
     * Matching options for the file operation pattern.
     */
    class FileOperationPatternOptions {
        public:
        FileOperationPatternOptions() = default;
        virtual ~FileOperationPatternOptions() = default;

        private:
        std::optional<bool> ignore_case;

        public:
        /**
         * The pattern should be matched ignoring casing.
         */
        std::optional<bool> get_ignore_case() const { return ignore_case; }
        void set_ignore_case(std::optional<bool> value) { this->ignore_case = value; }
    };
}
}
