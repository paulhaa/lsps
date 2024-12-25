//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CodeActionLiteralSupport.hpp"
#include "CodeActionClientCapabilitiesResolveSupport.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/codeAction` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/codeAction` request.
     */
    class CodeActionClientCapabilities {
        public:
        CodeActionClientCapabilities() = default;
        virtual ~CodeActionClientCapabilities() = default;

        private:
        std::optional<CodeActionLiteralSupport> code_action_literal_support;
        std::optional<bool> data_support;
        std::optional<bool> disabled_support;
        std::optional<bool> dynamic_registration;
        std::optional<bool> honors_change_annotations;
        std::optional<bool> is_preferred_support;
        std::optional<CodeActionClientCapabilitiesResolveSupport> resolve_support;

        public:
        /**
         * The client supports code action literals as a valid response of the
         * `textDocument/codeAction` request.
         */
        std::optional<CodeActionLiteralSupport> get_code_action_literal_support() const { return code_action_literal_support; }
        void set_code_action_literal_support(std::optional<CodeActionLiteralSupport> value) { this->code_action_literal_support = value; }

        /**
         * Whether code action supports the `data` property which is preserved between a
         * `textDocument/codeAction` and a `codeAction/resolve` request.
         */
        std::optional<bool> get_data_support() const { return data_support; }
        void set_data_support(std::optional<bool> value) { this->data_support = value; }

        /**
         * Whether code action supports the `disabled` property.
         */
        std::optional<bool> get_disabled_support() const { return disabled_support; }
        void set_disabled_support(std::optional<bool> value) { this->disabled_support = value; }

        /**
         * Whether code action supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Whether the client honors the change annotations in text edits and resource operations
         * returned via the `CodeAction#edit` property by for example presenting the workspace edit
         * in the user interface and asking for confirmation.
         */
        std::optional<bool> get_honors_change_annotations() const { return honors_change_annotations; }
        void set_honors_change_annotations(std::optional<bool> value) { this->honors_change_annotations = value; }

        /**
         * Whether code action supports the `isPreferred` property.
         */
        std::optional<bool> get_is_preferred_support() const { return is_preferred_support; }
        void set_is_preferred_support(std::optional<bool> value) { this->is_preferred_support = value; }

        /**
         * Whether the client supports resolving additional code action properties via a separate
         * `codeAction/resolve` request.
         */
        std::optional<CodeActionClientCapabilitiesResolveSupport> get_resolve_support() const { return resolve_support; }
        void set_resolve_support(std::optional<CodeActionClientCapabilitiesResolveSupport> value) { this->resolve_support = value; }
    };
}
}
