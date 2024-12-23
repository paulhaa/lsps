//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ChangeNotifications.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Whether the server wants to receive workspace folder change notifications.
     *
     * If a string is provided, the string is treated as an ID under which the notification is
     * registered on the client side. The ID can be used to unregister for these events using
     * the `client/unregisterCapability` request.
     */

    using nlohmann::json;

    using ChangeNotifications = std::variant<bool, std::string>;
}
