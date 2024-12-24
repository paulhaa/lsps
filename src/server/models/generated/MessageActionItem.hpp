//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MessageActionItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `MessageActionItem` type.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `MessageActionItem` type.
     */
    class MessageActionItem {
        public:
        MessageActionItem() = default;
        virtual ~MessageActionItem() = default;

        private:
        std::optional<bool> additional_properties_support;

        public:
        /**
         * Whether the client supports additional attributes which are preserved and sent back to
         * the server in the request's response.
         */
        std::optional<bool> get_additional_properties_support() const { return additional_properties_support; }
        void set_additional_properties_support(std::optional<bool> value) { this->additional_properties_support = value; }
    };
}
}
