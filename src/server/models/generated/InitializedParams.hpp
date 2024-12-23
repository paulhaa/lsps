//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InitializedParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class InitializedParams {
        public:
        InitializedParams() = default;
        virtual ~InitializedParams() = default;

        private:

        public:
    };
}
