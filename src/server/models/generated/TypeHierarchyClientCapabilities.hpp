//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TypeHierarchyClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the various type hierarchy requests.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the various type hierarchy requests.
     */
    class TypeHierarchyClientCapabilities {
        public:
        TypeHierarchyClientCapabilities() = default;
        virtual ~TypeHierarchyClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Whether implementation supports dynamic registration. If this is set to `true` the client
         * supports the new `(TextDocumentRegistrationOptions &amp; StaticRegistrationOptions)`
         * return value for the corresponding server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
}
