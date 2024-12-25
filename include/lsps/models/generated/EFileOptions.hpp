//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     EFileOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Additional options
     *
     * Options to create a file.
     *
     * Rename options.
     *
     * Rename file options
     *
     * Delete options.
     *
     * Delete file options
     */

    using nlohmann::json;

    /**
     * Additional options
     *
     * Options to create a file.
     *
     * Rename options.
     *
     * Rename file options
     *
     * Delete options.
     *
     * Delete file options
     */
    class EFileOptions {
        public:
        EFileOptions() = default;
        virtual ~EFileOptions() = default;

        private:
        std::optional<bool> ignore_if_exists;
        std::optional<bool> overwrite;
        std::optional<bool> ignore_if_not_exists;
        std::optional<bool> recursive;

        public:
        /**
         * Ignore if exists.
         *
         * Ignores if target exists.
         */
        std::optional<bool> get_ignore_if_exists() const { return ignore_if_exists; }
        void set_ignore_if_exists(std::optional<bool> value) { this->ignore_if_exists = value; }

        /**
         * Overwrite existing file. Overwrite wins over `ignoreIfExists`
         *
         * Overwrite target if existing. Overwrite wins over `ignoreIfExists`
         */
        std::optional<bool> get_overwrite() const { return overwrite; }
        void set_overwrite(std::optional<bool> value) { this->overwrite = value; }

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
}
