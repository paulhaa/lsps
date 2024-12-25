//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ImplementationClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/implementation` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/implementation` request.
     */
    class ImplementationClientCapabilities {
        public:
        ImplementationClientCapabilities() = default;
        virtual ~ImplementationClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> link_support;

        public:
        /**
         * Whether implementation supports dynamic registration. If this is set to `true` the client
         * supports the new `ImplementationRegistrationOptions` return value for the corresponding
         * server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports additional metadata in the form of definition links.
         */
        std::optional<bool> get_link_support() const { return link_support; }
        void set_link_support(std::optional<bool> value) { this->link_support = value; }
    };
}
}
