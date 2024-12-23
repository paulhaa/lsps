//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/inlineValue` request.
     *
     * Client capabilities specific to inline values.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/inlineValue` request.
     *
     * Client capabilities specific to inline values.
     */
    class InlineValueClientCapabilities {
        public:
        InlineValueClientCapabilities() = default;
        virtual ~InlineValueClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Whether implementation supports dynamic registration for inline value providers.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
