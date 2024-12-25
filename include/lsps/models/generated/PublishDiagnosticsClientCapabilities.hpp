//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PublishDiagnosticsClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PublishDiagnosticsClientCapabilitiesTagSupport.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/publishDiagnostics` notification.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/publishDiagnostics` notification.
     */
    class PublishDiagnosticsClientCapabilities {
        public:
        PublishDiagnosticsClientCapabilities() = default;
        virtual ~PublishDiagnosticsClientCapabilities() = default;

        private:
        std::optional<bool> code_description_support;
        std::optional<bool> data_support;
        std::optional<bool> related_information;
        std::optional<PublishDiagnosticsClientCapabilitiesTagSupport> tag_support;
        std::optional<bool> version_support;

        public:
        /**
         * Client supports a codeDescription property
         */
        std::optional<bool> get_code_description_support() const { return code_description_support; }
        void set_code_description_support(std::optional<bool> value) { this->code_description_support = value; }

        /**
         * Whether code action supports the `data` property which is preserved between a
         * `textDocument/publishDiagnostics` and `textDocument/codeAction` request.
         */
        std::optional<bool> get_data_support() const { return data_support; }
        void set_data_support(std::optional<bool> value) { this->data_support = value; }

        /**
         * Whether the clients accepts diagnostics with related information.
         */
        std::optional<bool> get_related_information() const { return related_information; }
        void set_related_information(std::optional<bool> value) { this->related_information = value; }

        /**
         * Client supports the tag property to provide meta data about a diagnostic. Clients
         * supporting tags have to handle unknown tags gracefully.
         */
        std::optional<PublishDiagnosticsClientCapabilitiesTagSupport> get_tag_support() const { return tag_support; }
        void set_tag_support(std::optional<PublishDiagnosticsClientCapabilitiesTagSupport> value) { this->tag_support = value; }

        /**
         * Whether the client interprets the version property of the
         * `textDocument/publishDiagnostics` notification's parameter.
         */
        std::optional<bool> get_version_support() const { return version_support; }
        void set_version_support(std::optional<bool> value) { this->version_support = value; }
    };
}
}
