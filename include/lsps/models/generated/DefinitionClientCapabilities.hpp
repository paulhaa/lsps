//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DefinitionClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/definition` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/definition` request.
     */
    class DefinitionClientCapabilities {
        public:
        DefinitionClientCapabilities() = default;
        virtual ~DefinitionClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> link_support;

        public:
        /**
         * Whether definition supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports additional metadata in the form of definition links.
         */
        std::optional<bool> get_link_support() const { return link_support; }
        void set_link_support(std::optional<bool> value) { this->link_support = value; }
    };
}
}
