//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameFileOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Rename options.
     *
     * Rename file options
     */

    using nlohmann::json;

    /**
     * Rename options.
     *
     * Rename file options
     */
    class RenameFileOptions {
        public:
        RenameFileOptions() = default;
        virtual ~RenameFileOptions() = default;

        private:
        std::optional<bool> ignore_if_exists;
        std::optional<bool> overwrite;

        public:
        /**
         * Ignores if target exists.
         */
        std::optional<bool> get_ignore_if_exists() const { return ignore_if_exists; }
        void set_ignore_if_exists(std::optional<bool> value) { this->ignore_if_exists = value; }

        /**
         * Overwrite target if existing. Overwrite wins over `ignoreIfExists`
         */
        std::optional<bool> get_overwrite() const { return overwrite; }
        void set_overwrite(std::optional<bool> value) { this->overwrite = value; }
    };
}
