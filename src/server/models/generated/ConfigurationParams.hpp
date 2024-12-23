//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ConfigurationParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ConfigurationItem.hpp"

namespace lsps {
    using nlohmann::json;

    class ConfigurationParams {
        public:
        ConfigurationParams() = default;
        virtual ~ConfigurationParams() = default;

        private:
        std::vector<ConfigurationItem> items;

        public:
        const std::vector<ConfigurationItem> & get_items() const { return items; }
        std::vector<ConfigurationItem> & get_mutable_items() { return items; }
        void set_items(const std::vector<ConfigurationItem> & value) { this->items = value; }
    };
}
