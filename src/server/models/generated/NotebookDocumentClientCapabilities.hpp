//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookDocumentSyncClientCapabilities.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the notebook document support.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the notebook document support.
     */
    class NotebookDocumentClientCapabilities {
        public:
        NotebookDocumentClientCapabilities() = default;
        virtual ~NotebookDocumentClientCapabilities() = default;

        private:
        NotebookDocumentSyncClientCapabilities synchronization;

        public:
        /**
         * Capabilities specific to notebook document synchronization
         */
        const NotebookDocumentSyncClientCapabilities & get_synchronization() const { return synchronization; }
        NotebookDocumentSyncClientCapabilities & get_mutable_synchronization() { return synchronization; }
        void set_synchronization(const NotebookDocumentSyncClientCapabilities & value) { this->synchronization = value; }
    };
}
}
