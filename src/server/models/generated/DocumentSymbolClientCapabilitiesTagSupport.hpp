//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentSymbolClientCapabilitiesTagSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The client supports tags on `SymbolInformation`. Tags are supported on `DocumentSymbol`
     * if `hierarchicalDocumentSymbolSupport` is set to true. Clients supporting tags have to
     * handle unknown tags gracefully.
     */

    using nlohmann::json;

    /**
     * The client supports tags on `SymbolInformation`. Tags are supported on `DocumentSymbol`
     * if `hierarchicalDocumentSymbolSupport` is set to true. Clients supporting tags have to
     * handle unknown tags gracefully.
     */
    class DocumentSymbolClientCapabilitiesTagSupport {
        public:
        DocumentSymbolClientCapabilitiesTagSupport() = default;
        virtual ~DocumentSymbolClientCapabilitiesTagSupport() = default;

        private:
        std::vector<double> value_set;

        public:
        /**
         * The tags supported by the client.
         */
        const std::vector<double> & get_value_set() const { return value_set; }
        std::vector<double> & get_mutable_value_set() { return value_set; }
        void set_value_set(const std::vector<double> & value) { this->value_set = value; }
    };
}
