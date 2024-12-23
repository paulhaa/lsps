//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentOnTypeFormattingClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * request. Capabilities specific to the `textDocument/onTypeFormatting` request.
     */

    using nlohmann::json;

    /**
     * request. Capabilities specific to the `textDocument/onTypeFormatting` request.
     */
    class DocumentOnTypeFormattingClientCapabilities {
        public:
        DocumentOnTypeFormattingClientCapabilities() = default;
        virtual ~DocumentOnTypeFormattingClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Whether on type formatting supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
