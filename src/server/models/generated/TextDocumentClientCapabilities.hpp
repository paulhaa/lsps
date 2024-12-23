//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CallHierarchyClientCapabilities.hpp"
#include "CodeActionClientCapabilities.hpp"
#include "CodeLensClientCapabilities.hpp"
#include "DocumentColorClientCapabilities.hpp"
#include "CompletionClientCapabilities.hpp"
#include "DeclarationClientCapabilities.hpp"
#include "DefinitionClientCapabilities.hpp"
#include "DiagnosticClientCapabilities.hpp"
#include "DocumentHighlightClientCapabilities.hpp"
#include "DocumentLinkClientCapabilities.hpp"
#include "DocumentSymbolClientCapabilities.hpp"
#include "FoldingRangeClientCapabilities.hpp"
#include "DocumentFormattingClientCapabilities.hpp"
#include "HoverClientCapabilities.hpp"
#include "ImplementationClientCapabilities.hpp"
#include "InlayHintClientCapabilities.hpp"
#include "InlineValueClientCapabilities.hpp"
#include "LinkedEditingRangeClientCapabilities.hpp"
#include "MonikerClientCapabilities.hpp"
#include "DocumentOnTypeFormattingClientCapabilities.hpp"
#include "PublishDiagnosticsClientCapabilities.hpp"
#include "DocumentRangeFormattingClientCapabilities.hpp"
#include "ReferenceClientCapabilities.hpp"
#include "RenameClientCapabilities.hpp"
#include "SelectionRangeClientCapabilities.hpp"
#include "SemanticTokensClientCapabilities.hpp"
#include "SignatureHelpClientCapabilities.hpp"
#include "TextDocumentSyncClientCapabilities.hpp"
#include "TypeDefinitionClientCapabilities.hpp"
#include "TypeHierarchyClientCapabilities.hpp"

namespace lsps {
    /**
     * Text document specific client capabilities.
     */

    using nlohmann::json;

    /**
     * Text document specific client capabilities.
     */
    class TextDocumentClientCapabilities {
        public:
        TextDocumentClientCapabilities() = default;
        virtual ~TextDocumentClientCapabilities() = default;

        private:
        std::optional<CallHierarchyClientCapabilities> call_hierarchy;
        std::optional<CodeActionClientCapabilities> code_action;
        std::optional<CodeLensClientCapabilities> code_lens;
        std::optional<DocumentColorClientCapabilities> color_provider;
        std::optional<CompletionClientCapabilities> completion;
        std::optional<DeclarationClientCapabilities> declaration;
        std::optional<DefinitionClientCapabilities> definition;
        std::optional<DiagnosticClientCapabilities> diagnostic;
        std::optional<DocumentHighlightClientCapabilities> document_highlight;
        std::optional<DocumentLinkClientCapabilities> document_link;
        std::optional<DocumentSymbolClientCapabilities> document_symbol;
        std::optional<FoldingRangeClientCapabilities> folding_range;
        std::optional<DocumentFormattingClientCapabilities> formatting;
        std::optional<HoverClientCapabilities> hover;
        std::optional<ImplementationClientCapabilities> implementation;
        std::optional<InlayHintClientCapabilities> inlay_hint;
        std::optional<InlineValueClientCapabilities> inline_value;
        std::optional<LinkedEditingRangeClientCapabilities> linked_editing_range;
        std::optional<MonikerClientCapabilities> moniker;
        std::optional<DocumentOnTypeFormattingClientCapabilities> on_type_formatting;
        std::optional<PublishDiagnosticsClientCapabilities> publish_diagnostics;
        std::optional<DocumentRangeFormattingClientCapabilities> range_formatting;
        std::optional<ReferenceClientCapabilities> references;
        std::optional<RenameClientCapabilities> rename;
        std::optional<SelectionRangeClientCapabilities> selection_range;
        std::optional<SemanticTokensClientCapabilities> semantic_tokens;
        std::optional<SignatureHelpClientCapabilities> signature_help;
        std::optional<TextDocumentSyncClientCapabilities> synchronization;
        std::optional<TypeDefinitionClientCapabilities> type_definition;
        std::optional<TypeHierarchyClientCapabilities> type_hierarchy;

        public:
        /**
         * Capabilities specific to the various call hierarchy requests.
         */
        std::optional<CallHierarchyClientCapabilities> get_call_hierarchy() const { return call_hierarchy; }
        void set_call_hierarchy(std::optional<CallHierarchyClientCapabilities> value) { this->call_hierarchy = value; }

        /**
         * Capabilities specific to the `textDocument/codeAction` request.
         */
        std::optional<CodeActionClientCapabilities> get_code_action() const { return code_action; }
        void set_code_action(std::optional<CodeActionClientCapabilities> value) { this->code_action = value; }

        /**
         * Capabilities specific to the `textDocument/codeLens` request.
         */
        std::optional<CodeLensClientCapabilities> get_code_lens() const { return code_lens; }
        void set_code_lens(std::optional<CodeLensClientCapabilities> value) { this->code_lens = value; }

        /**
         * Capabilities specific to the `textDocument/documentColor` and the
         * `textDocument/colorPresentation` request.
         */
        std::optional<DocumentColorClientCapabilities> get_color_provider() const { return color_provider; }
        void set_color_provider(std::optional<DocumentColorClientCapabilities> value) { this->color_provider = value; }

        /**
         * Capabilities specific to the `textDocument/completion` request.
         */
        std::optional<CompletionClientCapabilities> get_completion() const { return completion; }
        void set_completion(std::optional<CompletionClientCapabilities> value) { this->completion = value; }

        /**
         * Capabilities specific to the `textDocument/declaration` request.
         */
        std::optional<DeclarationClientCapabilities> get_declaration() const { return declaration; }
        void set_declaration(std::optional<DeclarationClientCapabilities> value) { this->declaration = value; }

        /**
         * Capabilities specific to the `textDocument/definition` request.
         */
        std::optional<DefinitionClientCapabilities> get_definition() const { return definition; }
        void set_definition(std::optional<DefinitionClientCapabilities> value) { this->definition = value; }

        /**
         * Capabilities specific to the diagnostic pull model.
         */
        std::optional<DiagnosticClientCapabilities> get_diagnostic() const { return diagnostic; }
        void set_diagnostic(std::optional<DiagnosticClientCapabilities> value) { this->diagnostic = value; }

        /**
         * Capabilities specific to the `textDocument/documentHighlight` request.
         */
        std::optional<DocumentHighlightClientCapabilities> get_document_highlight() const { return document_highlight; }
        void set_document_highlight(std::optional<DocumentHighlightClientCapabilities> value) { this->document_highlight = value; }

        /**
         * Capabilities specific to the `textDocument/documentLink` request.
         */
        std::optional<DocumentLinkClientCapabilities> get_document_link() const { return document_link; }
        void set_document_link(std::optional<DocumentLinkClientCapabilities> value) { this->document_link = value; }

        /**
         * Capabilities specific to the `textDocument/documentSymbol` request.
         */
        std::optional<DocumentSymbolClientCapabilities> get_document_symbol() const { return document_symbol; }
        void set_document_symbol(std::optional<DocumentSymbolClientCapabilities> value) { this->document_symbol = value; }

        /**
         * Capabilities specific to the `textDocument/foldingRange` request.
         */
        std::optional<FoldingRangeClientCapabilities> get_folding_range() const { return folding_range; }
        void set_folding_range(std::optional<FoldingRangeClientCapabilities> value) { this->folding_range = value; }

        /**
         * Capabilities specific to the `textDocument/formatting` request.
         */
        std::optional<DocumentFormattingClientCapabilities> get_formatting() const { return formatting; }
        void set_formatting(std::optional<DocumentFormattingClientCapabilities> value) { this->formatting = value; }

        /**
         * Capabilities specific to the `textDocument/hover` request.
         */
        std::optional<HoverClientCapabilities> get_hover() const { return hover; }
        void set_hover(std::optional<HoverClientCapabilities> value) { this->hover = value; }

        /**
         * Capabilities specific to the `textDocument/implementation` request.
         */
        std::optional<ImplementationClientCapabilities> get_implementation() const { return implementation; }
        void set_implementation(std::optional<ImplementationClientCapabilities> value) { this->implementation = value; }

        /**
         * Capabilities specific to the `textDocument/inlayHint` request.
         */
        std::optional<InlayHintClientCapabilities> get_inlay_hint() const { return inlay_hint; }
        void set_inlay_hint(std::optional<InlayHintClientCapabilities> value) { this->inlay_hint = value; }

        /**
         * Capabilities specific to the `textDocument/inlineValue` request.
         */
        std::optional<InlineValueClientCapabilities> get_inline_value() const { return inline_value; }
        void set_inline_value(std::optional<InlineValueClientCapabilities> value) { this->inline_value = value; }

        /**
         * Capabilities specific to the `textDocument/linkedEditingRange` request.
         */
        std::optional<LinkedEditingRangeClientCapabilities> get_linked_editing_range() const { return linked_editing_range; }
        void set_linked_editing_range(std::optional<LinkedEditingRangeClientCapabilities> value) { this->linked_editing_range = value; }

        /**
         * Capabilities specific to the `textDocument/moniker` request.
         */
        std::optional<MonikerClientCapabilities> get_moniker() const { return moniker; }
        void set_moniker(std::optional<MonikerClientCapabilities> value) { this->moniker = value; }

        /**
         * request. Capabilities specific to the `textDocument/onTypeFormatting` request.
         */
        std::optional<DocumentOnTypeFormattingClientCapabilities> get_on_type_formatting() const { return on_type_formatting; }
        void set_on_type_formatting(std::optional<DocumentOnTypeFormattingClientCapabilities> value) { this->on_type_formatting = value; }

        /**
         * Capabilities specific to the `textDocument/publishDiagnostics` notification.
         */
        std::optional<PublishDiagnosticsClientCapabilities> get_publish_diagnostics() const { return publish_diagnostics; }
        void set_publish_diagnostics(std::optional<PublishDiagnosticsClientCapabilities> value) { this->publish_diagnostics = value; }

        /**
         * Capabilities specific to the `textDocument/rangeFormatting` request.
         */
        std::optional<DocumentRangeFormattingClientCapabilities> get_range_formatting() const { return range_formatting; }
        void set_range_formatting(std::optional<DocumentRangeFormattingClientCapabilities> value) { this->range_formatting = value; }

        /**
         * Capabilities specific to the `textDocument/references` request.
         */
        std::optional<ReferenceClientCapabilities> get_references() const { return references; }
        void set_references(std::optional<ReferenceClientCapabilities> value) { this->references = value; }

        /**
         * Capabilities specific to the `textDocument/rename` request.
         */
        std::optional<RenameClientCapabilities> get_rename() const { return rename; }
        void set_rename(std::optional<RenameClientCapabilities> value) { this->rename = value; }

        /**
         * Capabilities specific to the `textDocument/selectionRange` request.
         */
        std::optional<SelectionRangeClientCapabilities> get_selection_range() const { return selection_range; }
        void set_selection_range(std::optional<SelectionRangeClientCapabilities> value) { this->selection_range = value; }

        /**
         * Capabilities specific to the various semantic token requests.
         */
        std::optional<SemanticTokensClientCapabilities> get_semantic_tokens() const { return semantic_tokens; }
        void set_semantic_tokens(std::optional<SemanticTokensClientCapabilities> value) { this->semantic_tokens = value; }

        /**
         * Capabilities specific to the `textDocument/signatureHelp` request.
         */
        std::optional<SignatureHelpClientCapabilities> get_signature_help() const { return signature_help; }
        void set_signature_help(std::optional<SignatureHelpClientCapabilities> value) { this->signature_help = value; }

        std::optional<TextDocumentSyncClientCapabilities> get_synchronization() const { return synchronization; }
        void set_synchronization(std::optional<TextDocumentSyncClientCapabilities> value) { this->synchronization = value; }

        /**
         * Capabilities specific to the `textDocument/typeDefinition` request.
         */
        std::optional<TypeDefinitionClientCapabilities> get_type_definition() const { return type_definition; }
        void set_type_definition(std::optional<TypeDefinitionClientCapabilities> value) { this->type_definition = value; }

        /**
         * Capabilities specific to the various type hierarchy requests.
         */
        std::optional<TypeHierarchyClientCapabilities> get_type_hierarchy() const { return type_hierarchy; }
        void set_type_hierarchy(std::optional<TypeHierarchyClientCapabilities> value) { this->type_hierarchy = value; }
    };
}
