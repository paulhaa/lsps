//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FullRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class FullRegistrationOptionsClass;
}

namespace lsps {
    /**
     * Server supports providing semantic tokens for a full document.
     */

    using nlohmann::json;

    using FullRegistrationOptions = std::variant<bool, FullRegistrationOptionsClass>;
}
