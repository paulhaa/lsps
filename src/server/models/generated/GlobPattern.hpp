//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     GlobPattern.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    class RelativePattern;
}

namespace lsps {
    /**
     * The glob pattern to watch. See  {@link  GlobPattern glob pattern }  for more detail.
     *
     * The glob pattern. Either a string pattern or a relative pattern.
     */

    using nlohmann::json;

    using GlobPattern = std::variant<RelativePattern, std::string>;
}
