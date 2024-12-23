//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceSymbolClientCapabilitiesResolveSupport.hpp"
#include "WorkspaceSymbolClientCapabilitiesSymbolKind.hpp"
#include "WorkspaceSymbolClientCapabilitiesTagSupport.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `workspace/symbol` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `workspace/symbol` request.
     */
    class WorkspaceSymbolClientCapabilities {
        public:
        WorkspaceSymbolClientCapabilities() = default;
        virtual ~WorkspaceSymbolClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<WorkspaceSymbolClientCapabilitiesResolveSupport> resolve_support;
        std::optional<WorkspaceSymbolClientCapabilitiesSymbolKind> symbol_kind;
        std::optional<WorkspaceSymbolClientCapabilitiesTagSupport> tag_support;

        public:
        /**
         * Symbol request supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client support partial workspace symbols. The client will send the request
         * `workspaceSymbol/resolve` to the server to resolve additional properties.
         */
        std::optional<WorkspaceSymbolClientCapabilitiesResolveSupport> get_resolve_support() const { return resolve_support; }
        void set_resolve_support(std::optional<WorkspaceSymbolClientCapabilitiesResolveSupport> value) { this->resolve_support = value; }

        /**
         * Specific capabilities for the `SymbolKind` in the `workspace/symbol` request.
         */
        std::optional<WorkspaceSymbolClientCapabilitiesSymbolKind> get_symbol_kind() const { return symbol_kind; }
        void set_symbol_kind(std::optional<WorkspaceSymbolClientCapabilitiesSymbolKind> value) { this->symbol_kind = value; }

        /**
         * The client supports tags on `SymbolInformation` and `WorkspaceSymbol`. Clients supporting
         * tags have to handle unknown tags gracefully.
         */
        std::optional<WorkspaceSymbolClientCapabilitiesTagSupport> get_tag_support() const { return tag_support; }
        void set_tag_support(std::optional<WorkspaceSymbolClientCapabilitiesTagSupport> value) { this->tag_support = value; }
    };
}
