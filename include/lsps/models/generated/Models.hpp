//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Models.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class ModelsClass;
}
}

namespace lsps {
namespace models {
    using nlohmann::json;

    using Models = std::optional<std::variant<std::vector<nlohmann::json>, bool, ModelsClass, double, int64_t, std::string>>;
}
}
