//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ServerCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CallHierarchyProvider.hpp"
#include "CallHierarchyOptions.hpp"
#include "CodeActionProvider.hpp"
#include "CodeActionOptions.hpp"
#include "CodeLensOptions.hpp"
#include "ColorProvider.hpp"
#include "DocumentColorOptions.hpp"
#include "CompletionOptions.hpp"
#include "DeclarationProvider.hpp"
#include "DeclarationRationOptions.hpp"
#include "DefinitionProvider.hpp"
#include "DefinitionOptions.hpp"
#include "DiagnosticProviderClass.hpp"
#include "DocumentFormattingProvider.hpp"
#include "DocumentFormattingOptions.hpp"
#include "DocumentHighlightProvider.hpp"
#include "DocumentHighlightOptions.hpp"
#include "DocumentLinkOptions.hpp"
#include "DocumentOnTypeFormattingOptions.hpp"
#include "DocumentRangeFormattingProvider.hpp"
#include "DocumentRangeFormattingOptions.hpp"
#include "DocumentSymbolProvider.hpp"
#include "DocumentSymbolOptions.hpp"
#include "ExecuteCommandOptions.hpp"
#include "LspAny.hpp"
#include "FoldingRangeProvider.hpp"
#include "FoldingRangeOptions.hpp"
#include "HoverProvider.hpp"
#include "HoverOptions.hpp"
#include "ImplementationProvider.hpp"
#include "ImplementationAtionOptions.hpp"
#include "InlayHintProvider.hpp"
#include "InlayHintOptions.hpp"
#include "InlineValueProvider.hpp"
#include "InlineValueOptions.hpp"
#include "LinkedEditingRangeProvider.hpp"
#include "LinkedEditingRangeOptions.hpp"
#include "MonikerProvider.hpp"
#include "MonikerOptions.hpp"
#include "NotebookDocumentSyncOptions.hpp"
#include "ReferencesProvider.hpp"
#include "ReferenceOptions.hpp"
#include "RenameProvider.hpp"
#include "RenameOptions.hpp"
#include "SelectionRangeProvider.hpp"
#include "SelectionRangeOptions.hpp"
#include "SemanticTokensOptions.hpp"
#include "SignatureHelpOptions.hpp"
#include "TextDocumentSync.hpp"
#include "TextDocumentSyncOptions.hpp"
#include "TypeDefinitionProvider.hpp"
#include "TypeDefinitionTionOptions.hpp"
#include "TypeHierarchyProvider.hpp"
#include "TypeHierarchyOptions.hpp"
#include "Workspace.hpp"
#include "WorkspaceSymbolProvider.hpp"
#include "WorkspaceSymbolOptions.hpp"

namespace lsps {
    /**
     * The capabilities the language server provides.
     */

    using nlohmann::json;

    /**
     * The capabilities the language server provides.
     */
    class ServerCapabilities {
        public:
        ServerCapabilities() = default;
        virtual ~ServerCapabilities() = default;

        private:
        std::optional<CallHierarchyProvider> call_hierarchy_provider;
        std::optional<CodeActionProvider> code_action_provider;
        std::optional<CodeLensOptions> code_lens_provider;
        std::optional<ColorProvider> color_provider;
        std::optional<CompletionOptions> completion_provider;
        std::optional<DeclarationProvider> declaration_provider;
        std::optional<DefinitionProvider> definition_provider;
        std::optional<DiagnosticProviderClass> diagnostic_provider;
        std::optional<DocumentFormattingProvider> document_formatting_provider;
        std::optional<DocumentHighlightProvider> document_highlight_provider;
        std::optional<DocumentLinkOptions> document_link_provider;
        std::optional<DocumentOnTypeFormattingOptions> document_on_type_formatting_provider;
        std::optional<DocumentRangeFormattingProvider> document_range_formatting_provider;
        std::optional<DocumentSymbolProvider> document_symbol_provider;
        std::optional<ExecuteCommandOptions> execute_command_provider;
        LspAny experimental;
        std::optional<FoldingRangeProvider> folding_range_provider;
        std::optional<HoverProvider> hover_provider;
        std::optional<ImplementationProvider> implementation_provider;
        std::optional<InlayHintProvider> inlay_hint_provider;
        std::optional<InlineValueProvider> inline_value_provider;
        std::optional<LinkedEditingRangeProvider> linked_editing_range_provider;
        std::optional<MonikerProvider> moniker_provider;
        std::optional<NotebookDocumentSyncOptions> notebook_document_sync;
        std::optional<std::string> position_encoding;
        std::optional<ReferencesProvider> references_provider;
        std::optional<RenameProvider> rename_provider;
        std::optional<SelectionRangeProvider> selection_range_provider;
        std::optional<SemanticTokensOptions> semantic_tokens_provider;
        std::optional<SignatureHelpOptions> signature_help_provider;
        std::optional<TextDocumentSync> text_document_sync;
        std::optional<TypeDefinitionProvider> type_definition_provider;
        std::optional<TypeHierarchyProvider> type_hierarchy_provider;
        std::optional<Workspace> workspace;
        std::optional<WorkspaceSymbolProvider> workspace_symbol_provider;

        public:
        /**
         * The server provides call hierarchy support.
         */
        std::optional<CallHierarchyProvider> get_call_hierarchy_provider() const { return call_hierarchy_provider; }
        void set_call_hierarchy_provider(std::optional<CallHierarchyProvider> value) { this->call_hierarchy_provider = value; }

        /**
         * The server provides code actions. The `CodeActionOptions` return type is only valid if
         * the client signals code action literal support via the property
         * `textDocument.codeAction.codeActionLiteralSupport`.
         */
        std::optional<CodeActionProvider> get_code_action_provider() const { return code_action_provider; }
        void set_code_action_provider(std::optional<CodeActionProvider> value) { this->code_action_provider = value; }

        /**
         * The server provides code lens.
         */
        std::optional<CodeLensOptions> get_code_lens_provider() const { return code_lens_provider; }
        void set_code_lens_provider(std::optional<CodeLensOptions> value) { this->code_lens_provider = value; }

        /**
         * The server provides color provider support.
         */
        std::optional<ColorProvider> get_color_provider() const { return color_provider; }
        void set_color_provider(std::optional<ColorProvider> value) { this->color_provider = value; }

        /**
         * The server provides completion support.
         */
        std::optional<CompletionOptions> get_completion_provider() const { return completion_provider; }
        void set_completion_provider(std::optional<CompletionOptions> value) { this->completion_provider = value; }

        /**
         * The server provides go to declaration support.
         */
        std::optional<DeclarationProvider> get_declaration_provider() const { return declaration_provider; }
        void set_declaration_provider(std::optional<DeclarationProvider> value) { this->declaration_provider = value; }

        /**
         * The server provides goto definition support.
         */
        std::optional<DefinitionProvider> get_definition_provider() const { return definition_provider; }
        void set_definition_provider(std::optional<DefinitionProvider> value) { this->definition_provider = value; }

        /**
         * The server has support for pull model diagnostics.
         */
        std::optional<DiagnosticProviderClass> get_diagnostic_provider() const { return diagnostic_provider; }
        void set_diagnostic_provider(std::optional<DiagnosticProviderClass> value) { this->diagnostic_provider = value; }

        /**
         * The server provides document formatting.
         */
        std::optional<DocumentFormattingProvider> get_document_formatting_provider() const { return document_formatting_provider; }
        void set_document_formatting_provider(std::optional<DocumentFormattingProvider> value) { this->document_formatting_provider = value; }

        /**
         * The server provides document highlight support.
         */
        std::optional<DocumentHighlightProvider> get_document_highlight_provider() const { return document_highlight_provider; }
        void set_document_highlight_provider(std::optional<DocumentHighlightProvider> value) { this->document_highlight_provider = value; }

        /**
         * The server provides document link support.
         */
        std::optional<DocumentLinkOptions> get_document_link_provider() const { return document_link_provider; }
        void set_document_link_provider(std::optional<DocumentLinkOptions> value) { this->document_link_provider = value; }

        /**
         * The server provides document formatting on typing.
         */
        std::optional<DocumentOnTypeFormattingOptions> get_document_on_type_formatting_provider() const { return document_on_type_formatting_provider; }
        void set_document_on_type_formatting_provider(std::optional<DocumentOnTypeFormattingOptions> value) { this->document_on_type_formatting_provider = value; }

        /**
         * The server provides document range formatting.
         */
        std::optional<DocumentRangeFormattingProvider> get_document_range_formatting_provider() const { return document_range_formatting_provider; }
        void set_document_range_formatting_provider(std::optional<DocumentRangeFormattingProvider> value) { this->document_range_formatting_provider = value; }

        /**
         * The server provides document symbol support.
         */
        std::optional<DocumentSymbolProvider> get_document_symbol_provider() const { return document_symbol_provider; }
        void set_document_symbol_provider(std::optional<DocumentSymbolProvider> value) { this->document_symbol_provider = value; }

        /**
         * The server provides execute command support.
         */
        std::optional<ExecuteCommandOptions> get_execute_command_provider() const { return execute_command_provider; }
        void set_execute_command_provider(std::optional<ExecuteCommandOptions> value) { this->execute_command_provider = value; }

        /**
         * Experimental server capabilities.
         */
        LspAny get_experimental() const { return experimental; }
        void set_experimental(LspAny value) { this->experimental = value; }

        /**
         * The server provides folding provider support.
         */
        std::optional<FoldingRangeProvider> get_folding_range_provider() const { return folding_range_provider; }
        void set_folding_range_provider(std::optional<FoldingRangeProvider> value) { this->folding_range_provider = value; }

        /**
         * The server provides hover support.
         */
        std::optional<HoverProvider> get_hover_provider() const { return hover_provider; }
        void set_hover_provider(std::optional<HoverProvider> value) { this->hover_provider = value; }

        /**
         * The server provides goto implementation support.
         */
        std::optional<ImplementationProvider> get_implementation_provider() const { return implementation_provider; }
        void set_implementation_provider(std::optional<ImplementationProvider> value) { this->implementation_provider = value; }

        /**
         * The server provides inlay hints.
         */
        std::optional<InlayHintProvider> get_inlay_hint_provider() const { return inlay_hint_provider; }
        void set_inlay_hint_provider(std::optional<InlayHintProvider> value) { this->inlay_hint_provider = value; }

        /**
         * The server provides inline values.
         */
        std::optional<InlineValueProvider> get_inline_value_provider() const { return inline_value_provider; }
        void set_inline_value_provider(std::optional<InlineValueProvider> value) { this->inline_value_provider = value; }

        /**
         * The server provides linked editing range support.
         */
        std::optional<LinkedEditingRangeProvider> get_linked_editing_range_provider() const { return linked_editing_range_provider; }
        void set_linked_editing_range_provider(std::optional<LinkedEditingRangeProvider> value) { this->linked_editing_range_provider = value; }

        /**
         * Whether server provides moniker support.
         */
        std::optional<MonikerProvider> get_moniker_provider() const { return moniker_provider; }
        void set_moniker_provider(std::optional<MonikerProvider> value) { this->moniker_provider = value; }

        /**
         * Defines how notebook documents are synced.
         */
        std::optional<NotebookDocumentSyncOptions> get_notebook_document_sync() const { return notebook_document_sync; }
        void set_notebook_document_sync(std::optional<NotebookDocumentSyncOptions> value) { this->notebook_document_sync = value; }

        /**
         * The position encoding the server picked from the encodings offered by the client via the
         * client capability `general.positionEncodings`.
         *
         * If the client didn't provide any position encodings the only valid value that a server
         * can return is 'utf-16'.
         *
         * If omitted it defaults to 'utf-16'.
         */
        std::optional<std::string> get_position_encoding() const { return position_encoding; }
        void set_position_encoding(std::optional<std::string> value) { this->position_encoding = value; }

        /**
         * The server provides find references support.
         */
        std::optional<ReferencesProvider> get_references_provider() const { return references_provider; }
        void set_references_provider(std::optional<ReferencesProvider> value) { this->references_provider = value; }

        /**
         * The server provides rename support. RenameOptions may only be specified if the client
         * states that it supports `prepareSupport` in its initial `initialize` request.
         */
        std::optional<RenameProvider> get_rename_provider() const { return rename_provider; }
        void set_rename_provider(std::optional<RenameProvider> value) { this->rename_provider = value; }

        /**
         * The server provides selection range support.
         */
        std::optional<SelectionRangeProvider> get_selection_range_provider() const { return selection_range_provider; }
        void set_selection_range_provider(std::optional<SelectionRangeProvider> value) { this->selection_range_provider = value; }

        /**
         * The server provides semantic tokens support.
         */
        std::optional<SemanticTokensOptions> get_semantic_tokens_provider() const { return semantic_tokens_provider; }
        void set_semantic_tokens_provider(std::optional<SemanticTokensOptions> value) { this->semantic_tokens_provider = value; }

        /**
         * The server provides signature help support.
         */
        std::optional<SignatureHelpOptions> get_signature_help_provider() const { return signature_help_provider; }
        void set_signature_help_provider(std::optional<SignatureHelpOptions> value) { this->signature_help_provider = value; }

        /**
         * Defines how text documents are synced. Is either a detailed structure defining each
         * notification or for backwards compatibility the TextDocumentSyncKind number. If omitted
         * it defaults to `TextDocumentSyncKind.None`.
         */
        std::optional<TextDocumentSync> get_text_document_sync() const { return text_document_sync; }
        void set_text_document_sync(std::optional<TextDocumentSync> value) { this->text_document_sync = value; }

        /**
         * The server provides goto type definition support.
         */
        std::optional<TypeDefinitionProvider> get_type_definition_provider() const { return type_definition_provider; }
        void set_type_definition_provider(std::optional<TypeDefinitionProvider> value) { this->type_definition_provider = value; }

        /**
         * The server provides type hierarchy support.
         */
        std::optional<TypeHierarchyProvider> get_type_hierarchy_provider() const { return type_hierarchy_provider; }
        void set_type_hierarchy_provider(std::optional<TypeHierarchyProvider> value) { this->type_hierarchy_provider = value; }

        /**
         * Workspace specific server capabilities
         */
        std::optional<Workspace> get_workspace() const { return workspace; }
        void set_workspace(std::optional<Workspace> value) { this->workspace = value; }

        /**
         * The server provides workspace symbol support.
         */
        std::optional<WorkspaceSymbolProvider> get_workspace_symbol_provider() const { return workspace_symbol_provider; }
        void set_workspace_symbol_provider(std::optional<WorkspaceSymbolProvider> value) { this->workspace_symbol_provider = value; }
    };
}
