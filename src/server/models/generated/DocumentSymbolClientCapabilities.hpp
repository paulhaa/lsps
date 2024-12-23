//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentSymbolClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentSymbolClientCapabilitiesSymbolKind.hpp"
#include "DocumentSymbolClientCapabilitiesTagSupport.hpp"

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/documentSymbol` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/documentSymbol` request.
     */
    class DocumentSymbolClientCapabilities {
        public:
        DocumentSymbolClientCapabilities() = default;
        virtual ~DocumentSymbolClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> hierarchical_document_symbol_support;
        std::optional<bool> label_support;
        std::optional<DocumentSymbolClientCapabilitiesSymbolKind> symbol_kind;
        std::optional<DocumentSymbolClientCapabilitiesTagSupport> tag_support;

        public:
        /**
         * Whether document symbol supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports hierarchical document symbols.
         */
        std::optional<bool> get_hierarchical_document_symbol_support() const { return hierarchical_document_symbol_support; }
        void set_hierarchical_document_symbol_support(std::optional<bool> value) { this->hierarchical_document_symbol_support = value; }

        /**
         * The client supports an additional label presented in the UI when registering a document
         * symbol provider.
         */
        std::optional<bool> get_label_support() const { return label_support; }
        void set_label_support(std::optional<bool> value) { this->label_support = value; }

        /**
         * Specific capabilities for the `SymbolKind` in the `textDocument/documentSymbol` request.
         */
        std::optional<DocumentSymbolClientCapabilitiesSymbolKind> get_symbol_kind() const { return symbol_kind; }
        void set_symbol_kind(std::optional<DocumentSymbolClientCapabilitiesSymbolKind> value) { this->symbol_kind = value; }

        /**
         * The client supports tags on `SymbolInformation`. Tags are supported on `DocumentSymbol`
         * if `hierarchicalDocumentSymbolSupport` is set to true. Clients supporting tags have to
         * handle unknown tags gracefully.
         */
        std::optional<DocumentSymbolClientCapabilitiesTagSupport> get_tag_support() const { return tag_support; }
        void set_tag_support(std::optional<DocumentSymbolClientCapabilitiesTagSupport> value) { this->tag_support = value; }
    };
}
