//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolClientCapabilitiesResolveSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The client support partial workspace symbols. The client will send the request
     * `workspaceSymbol/resolve` to the server to resolve additional properties.
     */

    using nlohmann::json;

    /**
     * The client support partial workspace symbols. The client will send the request
     * `workspaceSymbol/resolve` to the server to resolve additional properties.
     */
    class WorkspaceSymbolClientCapabilitiesResolveSupport {
        public:
        WorkspaceSymbolClientCapabilitiesResolveSupport() = default;
        virtual ~WorkspaceSymbolClientCapabilitiesResolveSupport() = default;

        private:
        std::vector<std::string> properties;

        public:
        /**
         * The properties that a client can resolve lazily. Usually `location.range`
         */
        const std::vector<std::string> & get_properties() const { return properties; }
        std::vector<std::string> & get_mutable_properties() { return properties; }
        void set_properties(const std::vector<std::string> & value) { this->properties = value; }
    };
}
}
