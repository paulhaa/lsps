//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentFormattingClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/formatting` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/formatting` request.
     */
    class DocumentFormattingClientCapabilities {
        public:
        DocumentFormattingClientCapabilities() = default;
        virtual ~DocumentFormattingClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Whether formatting supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
