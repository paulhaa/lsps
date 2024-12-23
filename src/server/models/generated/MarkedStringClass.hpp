//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MarkedStringClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class MarkedStringClass {
        public:
        MarkedStringClass() = default;
        virtual ~MarkedStringClass() = default;

        private:
        std::string language;
        std::string value;

        public:
        const std::string & get_language() const { return language; }
        std::string & get_mutable_language() { return language; }
        void set_language(const std::string & value) { this->language = value; }

        const std::string & get_value() const { return value; }
        std::string & get_mutable_value() { return value; }
        void set_value(const std::string & value) { this->value = value; }
    };
}
