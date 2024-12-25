//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionList.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The client supports the following `CompletionList` specific capabilities.
     */

    using nlohmann::json;

    /**
     * The client supports the following `CompletionList` specific capabilities.
     */
    class CompletionList {
        public:
        CompletionList() = default;
        virtual ~CompletionList() = default;

        private:
        std::optional<std::vector<std::string>> item_defaults;

        public:
        /**
         * The client supports the following itemDefaults on a completion list.
         *
         * The value lists the supported property names of the `CompletionList.itemDefaults` object.
         * If omitted no properties are supported.
         */
        std::optional<std::vector<std::string>> get_item_defaults() const { return item_defaults; }
        void set_item_defaults(std::optional<std::vector<std::string>> value) { this->item_defaults = value; }
    };
}
}
