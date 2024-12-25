//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentSyncClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to notebook document synchronization
     *
     * Notebook specific client capabilities.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to notebook document synchronization
     *
     * Notebook specific client capabilities.
     */
    class NotebookDocumentSyncClientCapabilities {
        public:
        NotebookDocumentSyncClientCapabilities() = default;
        virtual ~NotebookDocumentSyncClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> execution_summary_support;

        public:
        /**
         * Whether implementation supports dynamic registration. If this is set to `true` the client
         * supports the new `(NotebookDocumentSyncRegistrationOptions &amp;
         * NotebookDocumentSyncOptions)` return value for the corresponding server capability as
         * well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports sending execution summary data per cell.
         */
        std::optional<bool> get_execution_summary_support() const { return execution_summary_support; }
        void set_execution_summary_support(std::optional<bool> value) { this->execution_summary_support = value; }
    };
}
}
