//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FoldingRangeKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Specific options for the folding range kind.
     */

    using nlohmann::json;

    /**
     * Specific options for the folding range kind.
     */
    class FoldingRangeKind {
        public:
        FoldingRangeKind() = default;
        virtual ~FoldingRangeKind() = default;

        private:
        std::optional<std::vector<std::string>> value_set;

        public:
        /**
         * The folding range kind values the client supports. When this property exists the client
         * also guarantees that it will handle values outside its set gracefully and falls back to a
         * default value when unknown.
         */
        std::optional<std::vector<std::string>> get_value_set() const { return value_set; }
        void set_value_set(std::optional<std::vector<std::string>> value) { this->value_set = value; }
    };
}
