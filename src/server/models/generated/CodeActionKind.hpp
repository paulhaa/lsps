//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The code action kind is supported with the following value set.
     */

    using nlohmann::json;

    /**
     * The code action kind is supported with the following value set.
     */
    class CodeActionKind {
        public:
        CodeActionKind() = default;
        virtual ~CodeActionKind() = default;

        private:
        std::vector<std::string> value_set;

        public:
        /**
         * The code action kind values the client supports. When this property exists the client
         * also guarantees that it will handle values outside its set gracefully and falls back to a
         * default value when unknown.
         */
        const std::vector<std::string> & get_value_set() const { return value_set; }
        std::vector<std::string> & get_mutable_value_set() { return value_set; }
        void set_value_set(const std::vector<std::string> & value) { this->value_set = value; }
    };
}
