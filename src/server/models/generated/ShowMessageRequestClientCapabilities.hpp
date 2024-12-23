//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ShowMessageRequestClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "MessageActionItem.hpp"

namespace lsps {
    /**
     * Capabilities specific to the showMessage request
     *
     * Show message request client capabilities
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the showMessage request
     *
     * Show message request client capabilities
     */
    class ShowMessageRequestClientCapabilities {
        public:
        ShowMessageRequestClientCapabilities() = default;
        virtual ~ShowMessageRequestClientCapabilities() = default;

        private:
        std::optional<MessageActionItem> message_action_item;

        public:
        /**
         * Capabilities specific to the `MessageActionItem` type.
         */
        std::optional<MessageActionItem> get_message_action_item() const { return message_action_item; }
        void set_message_action_item(std::optional<MessageActionItem> value) { this->message_action_item = value; }
    };
}
