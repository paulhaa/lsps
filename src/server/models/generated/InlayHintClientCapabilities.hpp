//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "InlayHintClientCapabilitiesResolveSupport.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/inlayHint` request.
     *
     * Inlay hint client capabilities.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/inlayHint` request.
     *
     * Inlay hint client capabilities.
     */
    class InlayHintClientCapabilities {
        public:
        InlayHintClientCapabilities() = default;
        virtual ~InlayHintClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<InlayHintClientCapabilitiesResolveSupport> resolve_support;

        public:
        /**
         * Whether inlay hints support dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Indicates which properties a client can resolve lazily on an inlay hint.
         */
        std::optional<InlayHintClientCapabilitiesResolveSupport> get_resolve_support() const { return resolve_support; }
        void set_resolve_support(std::optional<InlayHintClientCapabilitiesResolveSupport> value) { this->resolve_support = value; }
    };
}
