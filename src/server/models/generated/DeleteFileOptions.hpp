//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DeleteFileOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Delete options.
     *
     * Delete file options
     */

    using nlohmann::json;

    /**
     * Delete options.
     *
     * Delete file options
     */
    class DeleteFileOptions {
        public:
        DeleteFileOptions() = default;
        virtual ~DeleteFileOptions() = default;

        private:
        std::optional<bool> ignore_if_not_exists;
        std::optional<bool> recursive;

        public:
        /**
         * Ignore the operation if the file doesn't exist.
         */
        std::optional<bool> get_ignore_if_not_exists() const { return ignore_if_not_exists; }
        void set_ignore_if_not_exists(std::optional<bool> value) { this->ignore_if_not_exists = value; }

        /**
         * Delete the content recursively if a folder is denoted.
         */
        std::optional<bool> get_recursive() const { return recursive; }
        void set_recursive(std::optional<bool> value) { this->recursive = value; }
    };
}
