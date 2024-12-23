//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ConfigurationItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class ConfigurationItem {
        public:
        ConfigurationItem() = default;
        virtual ~ConfigurationItem() = default;

        private:
        std::optional<std::string> scope_uri;
        std::optional<std::string> section;

        public:
        /**
         * The scope to get the configuration section for.
         */
        std::optional<std::string> get_scope_uri() const { return scope_uri; }
        void set_scope_uri(std::optional<std::string> value) { this->scope_uri = value; }

        /**
         * The configuration section asked for.
         */
        std::optional<std::string> get_section() const { return section; }
        void set_section(std::optional<std::string> value) { this->section = value; }
    };
}
