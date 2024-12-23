//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/rename` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/rename` request.
     */
    class RenameClientCapabilities {
        public:
        RenameClientCapabilities() = default;
        virtual ~RenameClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> honors_change_annotations;
        std::optional<bool> prepare_support;
        std::optional<double> prepare_support_default_behavior;

        public:
        /**
         * Whether rename supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Whether the client honors the change annotations in text edits and resource operations
         * returned via the rename request's workspace edit by for example presenting the workspace
         * edit in the user interface and asking for confirmation.
         */
        std::optional<bool> get_honors_change_annotations() const { return honors_change_annotations; }
        void set_honors_change_annotations(std::optional<bool> value) { this->honors_change_annotations = value; }

        /**
         * Client supports testing for validity of rename operations before execution.
         */
        std::optional<bool> get_prepare_support() const { return prepare_support; }
        void set_prepare_support(std::optional<bool> value) { this->prepare_support = value; }

        /**
         * Client supports the default behavior result (`{ defaultBehavior: boolean }`).
         *
         * The value indicates the default behavior used by the client.
         */
        std::optional<double> get_prepare_support_default_behavior() const { return prepare_support_default_behavior; }
        void set_prepare_support_default_behavior(std::optional<double> value) { this->prepare_support_default_behavior = value; }
    };
}
