//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ExecuteCommandClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `workspace/executeCommand` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `workspace/executeCommand` request.
     */
    class ExecuteCommandClientCapabilities {
        public:
        ExecuteCommandClientCapabilities() = default;
        virtual ~ExecuteCommandClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Execute command supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
}
