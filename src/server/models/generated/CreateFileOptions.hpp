//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CreateFileOptions.hpp data = nlohmann::json::parse(jsonString);

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
     */

    using nlohmann::json;

    /**
     * Additional options
     *
     * Options to create a file.
     */
    class CreateFileOptions {
        public:
        CreateFileOptions() = default;
        virtual ~CreateFileOptions() = default;

        private:
        std::optional<bool> ignore_if_exists;
        std::optional<bool> overwrite;

        public:
        /**
         * Ignore if exists.
         */
        std::optional<bool> get_ignore_if_exists() const { return ignore_if_exists; }
        void set_ignore_if_exists(std::optional<bool> value) { this->ignore_if_exists = value; }

        /**
         * Overwrite existing file. Overwrite wins over `ignoreIfExists`
         */
        std::optional<bool> get_overwrite() const { return overwrite; }
        void set_overwrite(std::optional<bool> value) { this->overwrite = value; }
    };
}
}
