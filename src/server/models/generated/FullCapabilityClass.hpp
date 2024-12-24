//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FullCapabilityClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class FullCapabilityClass {
        public:
        FullCapabilityClass() = default;
        virtual ~FullCapabilityClass() = default;

        private:
        std::optional<bool> delta;

        public:
        /**
         * The client will send the `textDocument/semanticTokens/full/delta` request if the server
         * provides a corresponding handler.
         */
        std::optional<bool> get_delta() const { return delta; }
        void set_delta(std::optional<bool> value) { this->delta = value; }
    };
}
}
