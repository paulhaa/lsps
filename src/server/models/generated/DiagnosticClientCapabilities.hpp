//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DiagnosticClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Capabilities specific to the diagnostic pull model.
     *
     * Client capabilities specific to diagnostic pull requests.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the diagnostic pull model.
     *
     * Client capabilities specific to diagnostic pull requests.
     */
    class DiagnosticClientCapabilities {
        public:
        DiagnosticClientCapabilities() = default;
        virtual ~DiagnosticClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> related_document_support;

        public:
        /**
         * Whether implementation supports dynamic registration. If this is set to `true` the client
         * supports the new `(TextDocumentRegistrationOptions &amp; StaticRegistrationOptions)`
         * return value for the corresponding server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Whether the clients supports related documents for document diagnostic pulls.
         */
        std::optional<bool> get_related_document_support() const { return related_document_support; }
        void set_related_document_support(std::optional<bool> value) { this->related_document_support = value; }
    };
}
