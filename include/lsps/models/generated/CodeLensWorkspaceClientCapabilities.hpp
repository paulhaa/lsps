//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeLensWorkspaceClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the code lens requests scoped to the workspace.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the code lens requests scoped to the workspace.
     */
    class CodeLensWorkspaceClientCapabilities {
        public:
        CodeLensWorkspaceClientCapabilities() = default;
        virtual ~CodeLensWorkspaceClientCapabilities() = default;

        private:
        std::optional<bool> refresh_support;

        public:
        /**
         * Whether the client implementation supports a refresh request sent from the server to the
         * client.
         *
         * Note that this event is global and will force the client to refresh all code lenses
         * currently shown. It should be used with absolute care and is useful for situation where a
         * server for example detect a project wide change that requires such a calculation.
         */
        std::optional<bool> get_refresh_support() const { return refresh_support; }
        void set_refresh_support(std::optional<bool> value) { this->refresh_support = value; }
    };
}
}
