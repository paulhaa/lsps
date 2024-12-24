//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelpClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SignatureInformation.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/signatureHelp` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/signatureHelp` request.
     */
    class SignatureHelpClientCapabilities {
        public:
        SignatureHelpClientCapabilities() = default;
        virtual ~SignatureHelpClientCapabilities() = default;

        private:
        std::optional<bool> context_support;
        std::optional<bool> dynamic_registration;
        std::optional<SignatureInformation> signature_information;

        public:
        /**
         * The client supports to send additional context information for a
         * `textDocument/signatureHelp` request. A client that opts into contextSupport will also
         * support the `retriggerCharacters` on `SignatureHelpOptions`.
         */
        std::optional<bool> get_context_support() const { return context_support; }
        void set_context_support(std::optional<bool> value) { this->context_support = value; }

        /**
         * Whether signature help supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports the following `SignatureInformation` specific properties.
         */
        std::optional<SignatureInformation> get_signature_information() const { return signature_information; }
        void set_signature_information(std::optional<SignatureInformation> value) { this->signature_information = value; }
    };
}
}
