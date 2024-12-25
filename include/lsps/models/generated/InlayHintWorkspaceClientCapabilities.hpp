//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintWorkspaceClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Client workspace capabilities specific to inlay hints.
     */

    using nlohmann::json;

    /**
     * Client workspace capabilities specific to inlay hints.
     */
    class InlayHintWorkspaceClientCapabilities {
        public:
        InlayHintWorkspaceClientCapabilities() = default;
        virtual ~InlayHintWorkspaceClientCapabilities() = default;

        private:
        std::optional<bool> refresh_support;

        public:
        /**
         * Whether the client implementation supports a refresh request sent from the server to the
         * client.
         *
         * Note that this event is global and will force the client to refresh all inlay hints
         * currently shown. It should be used with absolute care and is useful for situation where a
         * server for example detects a project wide change that requires such a calculation.
         */
        std::optional<bool> get_refresh_support() const { return refresh_support; }
        void set_refresh_support(std::optional<bool> value) { this->refresh_support = value; }
    };
}
}
