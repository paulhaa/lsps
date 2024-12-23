//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceFoldersServerCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ChangeNotifications.hpp"

namespace lsps {
    /**
     * The server supports workspace folder.
     */

    using nlohmann::json;

    /**
     * The server supports workspace folder.
     */
    class WorkspaceFoldersServerCapabilities {
        public:
        WorkspaceFoldersServerCapabilities() = default;
        virtual ~WorkspaceFoldersServerCapabilities() = default;

        private:
        std::optional<ChangeNotifications> change_notifications;
        std::optional<bool> supported;

        public:
        /**
         * Whether the server wants to receive workspace folder change notifications.
         *
         * If a string is provided, the string is treated as an ID under which the notification is
         * registered on the client side. The ID can be used to unregister for these events using
         * the `client/unregisterCapability` request.
         */
        std::optional<ChangeNotifications> get_change_notifications() const { return change_notifications; }
        void set_change_notifications(std::optional<ChangeNotifications> value) { this->change_notifications = value; }

        /**
         * The server has support for workspace folders
         */
        std::optional<bool> get_supported() const { return supported; }
        void set_supported(std::optional<bool> value) { this->supported = value; }
    };
}
