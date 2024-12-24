//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     BaseUri.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    class WorkspaceFolder;
}
}

namespace lsps {
namespace models {
    /**
     * A workspace folder or a base URI to which this pattern will be matched against relatively.
     */

    using nlohmann::json;

    using BaseUri = std::variant<WorkspaceFolder, std::string>;
}
}
