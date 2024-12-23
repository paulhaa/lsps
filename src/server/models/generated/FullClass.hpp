//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FullClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class FullClass {
        public:
        FullClass() = default;
        virtual ~FullClass() = default;

        private:
        std::optional<bool> delta;

        public:
        /**
         * The server supports deltas for full documents.
         */
        std::optional<bool> get_delta() const { return delta; }
        void set_delta(std::optional<bool> value) { this->delta = value; }
    };
}
