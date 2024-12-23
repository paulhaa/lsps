//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentOnTypeFormattingOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The server provides document formatting on typing.
     */

    using nlohmann::json;

    /**
     * The server provides document formatting on typing.
     */
    class DocumentOnTypeFormattingOptions {
        public:
        DocumentOnTypeFormattingOptions() = default;
        virtual ~DocumentOnTypeFormattingOptions() = default;

        private:
        std::string first_trigger_character;
        std::optional<std::vector<std::string>> more_trigger_character;

        public:
        /**
         * A character on which formatting should be triggered, like `{`.
         */
        const std::string & get_first_trigger_character() const { return first_trigger_character; }
        std::string & get_mutable_first_trigger_character() { return first_trigger_character; }
        void set_first_trigger_character(const std::string & value) { this->first_trigger_character = value; }

        /**
         * More trigger characters.
         */
        std::optional<std::vector<std::string>> get_more_trigger_character() const { return more_trigger_character; }
        void set_more_trigger_character(std::optional<std::vector<std::string>> value) { this->more_trigger_character = value; }
    };
}
