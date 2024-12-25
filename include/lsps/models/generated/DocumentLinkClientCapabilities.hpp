//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentLinkClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/documentLink` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/documentLink` request.
     */
    class DocumentLinkClientCapabilities {
        public:
        DocumentLinkClientCapabilities() = default;
        virtual ~DocumentLinkClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> tooltip_support;

        public:
        /**
         * Whether document link supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Whether the client supports the `tooltip` property on `DocumentLink`.
         */
        std::optional<bool> get_tooltip_support() const { return tooltip_support; }
        void set_tooltip_support(std::optional<bool> value) { this->tooltip_support = value; }
    };
}
}
