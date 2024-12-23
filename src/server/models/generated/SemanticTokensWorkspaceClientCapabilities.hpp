//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensWorkspaceClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Capabilities specific to the semantic token requests scoped to the workspace.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the semantic token requests scoped to the workspace.
     */
    class SemanticTokensWorkspaceClientCapabilities {
        public:
        SemanticTokensWorkspaceClientCapabilities() = default;
        virtual ~SemanticTokensWorkspaceClientCapabilities() = default;

        private:
        std::optional<bool> refresh_support;

        public:
        /**
         * Whether the client implementation supports a refresh request sent from the server to the
         * client.
         *
         * Note that this event is global and will force the client to refresh all semantic tokens
         * currently shown. It should be used with absolute care and is useful for situation where a
         * server for example detect a project wide change that requires such a calculation.
         */
        std::optional<bool> get_refresh_support() const { return refresh_support; }
        void set_refresh_support(std::optional<bool> value) { this->refresh_support = value; }
    };
}
