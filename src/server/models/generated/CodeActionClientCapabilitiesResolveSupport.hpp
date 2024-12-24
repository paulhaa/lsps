//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionClientCapabilitiesResolveSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Whether the client supports resolving additional code action properties via a separate
     * `codeAction/resolve` request.
     */

    using nlohmann::json;

    /**
     * Whether the client supports resolving additional code action properties via a separate
     * `codeAction/resolve` request.
     */
    class CodeActionClientCapabilitiesResolveSupport {
        public:
        CodeActionClientCapabilitiesResolveSupport() = default;
        virtual ~CodeActionClientCapabilitiesResolveSupport() = default;

        private:
        std::vector<std::string> properties;

        public:
        /**
         * The properties that a client can resolve lazily.
         */
        const std::vector<std::string> & get_properties() const { return properties; }
        std::vector<std::string> & get_mutable_properties() { return properties; }
        void set_properties(const std::vector<std::string> & value) { this->properties = value; }
    };
}
}
