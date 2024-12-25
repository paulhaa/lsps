//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolClientCapabilitiesSymbolKind.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Specific capabilities for the `SymbolKind` in the `workspace/symbol` request.
     */

    using nlohmann::json;

    /**
     * Specific capabilities for the `SymbolKind` in the `workspace/symbol` request.
     */
    class WorkspaceSymbolClientCapabilitiesSymbolKind {
        public:
        WorkspaceSymbolClientCapabilitiesSymbolKind() = default;
        virtual ~WorkspaceSymbolClientCapabilitiesSymbolKind() = default;

        private:
        std::optional<std::vector<double>> value_set;

        public:
        /**
         * The symbol kind values the client supports. When this property exists the client also
         * guarantees that it will handle values outside its set gracefully and falls back to a
         * default value when unknown.
         *
         * If this property is not present the client only supports the symbol kinds from `File` to
         * `Array` as defined in the initial version of the protocol.
         */
        std::optional<std::vector<double>> get_value_set() const { return value_set; }
        void set_value_set(std::optional<std::vector<double>> value) { this->value_set = value; }
    };
}
}
