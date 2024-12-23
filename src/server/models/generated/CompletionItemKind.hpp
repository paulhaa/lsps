//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionItemKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class CompletionItemKind {
        public:
        CompletionItemKind() = default;
        virtual ~CompletionItemKind() = default;

        private:
        std::optional<std::vector<double>> value_set;

        public:
        /**
         * The completion item kind values the client supports. When this property exists the client
         * also guarantees that it will handle values outside its set gracefully and falls back to a
         * default value when unknown.
         *
         * If this property is not present the client only supports the completion items kinds from
         * `Text` to `Reference` as defined in the initial version of the protocol.
         */
        std::optional<std::vector<double>> get_value_set() const { return value_set; }
        void set_value_set(std::optional<std::vector<double>> value) { this->value_set = value; }
    };
}
