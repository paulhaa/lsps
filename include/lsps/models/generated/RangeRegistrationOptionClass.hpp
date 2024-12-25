//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RangeRegistrationOptionClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class RangeRegistrationOptionClass {
        public:
        RangeRegistrationOptionClass() = default;
        virtual ~RangeRegistrationOptionClass() = default;

        private:

        public:
    };
}
}
