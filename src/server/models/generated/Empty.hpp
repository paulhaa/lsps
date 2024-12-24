//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Empty.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CodeLensWorkspaceClientCapabilities.hpp"
#include "DiagnosticWorkspaceClientCapabilities.hpp"
#include "DidChangeConfigurationClientCapabilities.hpp"
#include "DidChangeWatchedFilesClientCapabilities.hpp"
#include "ExecuteCommandClientCapabilities.hpp"
#include "ClientFileOperations.hpp"
#include "InlayHintWorkspaceClientCapabilities.hpp"
#include "InlineValueWorkspaceClientCapabilities.hpp"
#include "SemanticTokensWorkspaceClientCapabilities.hpp"
#include "WorkspaceSymbolClientCapabilities.hpp"
#include "WorkspaceEditClientCapabilities.hpp"

namespace lsps {
namespace models {
    /**
     * Workspace specific client capabilities.
     */

    using nlohmann::json;

    /**
     * Workspace specific client capabilities.
     */
    class Empty {
        public:
        Empty() = default;
        virtual ~Empty() = default;

        private:
        std::optional<bool> apply_edit;
        std::optional<CodeLensWorkspaceClientCapabilities> code_lens;
        std::optional<bool> configuration;
        std::optional<DiagnosticWorkspaceClientCapabilities> diagnostics;
        std::optional<DidChangeConfigurationClientCapabilities> did_change_configuration;
        std::optional<DidChangeWatchedFilesClientCapabilities> did_change_watched_files;
        std::optional<ExecuteCommandClientCapabilities> execute_command;
        std::optional<ClientFileOperations> file_operations;
        std::optional<InlayHintWorkspaceClientCapabilities> inlay_hint;
        std::optional<InlineValueWorkspaceClientCapabilities> inline_value;
        std::optional<SemanticTokensWorkspaceClientCapabilities> semantic_tokens;
        std::optional<WorkspaceSymbolClientCapabilities> symbol;
        std::optional<WorkspaceEditClientCapabilities> workspace_edit;
        std::optional<bool> workspace_folders;

        public:
        /**
         * The client supports applying batch edits to the workspace by supporting the request
         * 'workspace/applyEdit'
         */
        std::optional<bool> get_apply_edit() const { return apply_edit; }
        void set_apply_edit(std::optional<bool> value) { this->apply_edit = value; }

        /**
         * Capabilities specific to the code lens requests scoped to the workspace.
         */
        std::optional<CodeLensWorkspaceClientCapabilities> get_code_lens() const { return code_lens; }
        void set_code_lens(std::optional<CodeLensWorkspaceClientCapabilities> value) { this->code_lens = value; }

        /**
         * The client supports `workspace/configuration` requests.
         */
        std::optional<bool> get_configuration() const { return configuration; }
        void set_configuration(std::optional<bool> value) { this->configuration = value; }

        /**
         * Client workspace capabilities specific to diagnostics.
         */
        std::optional<DiagnosticWorkspaceClientCapabilities> get_diagnostics() const { return diagnostics; }
        void set_diagnostics(std::optional<DiagnosticWorkspaceClientCapabilities> value) { this->diagnostics = value; }

        /**
         * Capabilities specific to the `workspace/didChangeConfiguration` notification.
         */
        std::optional<DidChangeConfigurationClientCapabilities> get_did_change_configuration() const { return did_change_configuration; }
        void set_did_change_configuration(std::optional<DidChangeConfigurationClientCapabilities> value) { this->did_change_configuration = value; }

        /**
         * Capabilities specific to the `workspace/didChangeWatchedFiles` notification.
         */
        std::optional<DidChangeWatchedFilesClientCapabilities> get_did_change_watched_files() const { return did_change_watched_files; }
        void set_did_change_watched_files(std::optional<DidChangeWatchedFilesClientCapabilities> value) { this->did_change_watched_files = value; }

        /**
         * Capabilities specific to the `workspace/executeCommand` request.
         */
        std::optional<ExecuteCommandClientCapabilities> get_execute_command() const { return execute_command; }
        void set_execute_command(std::optional<ExecuteCommandClientCapabilities> value) { this->execute_command = value; }

        /**
         * The client has support for file requests/notifications.
         */
        std::optional<ClientFileOperations> get_file_operations() const { return file_operations; }
        void set_file_operations(std::optional<ClientFileOperations> value) { this->file_operations = value; }

        /**
         * Client workspace capabilities specific to inlay hints.
         */
        std::optional<InlayHintWorkspaceClientCapabilities> get_inlay_hint() const { return inlay_hint; }
        void set_inlay_hint(std::optional<InlayHintWorkspaceClientCapabilities> value) { this->inlay_hint = value; }

        /**
         * Client workspace capabilities specific to inline values.
         */
        std::optional<InlineValueWorkspaceClientCapabilities> get_inline_value() const { return inline_value; }
        void set_inline_value(std::optional<InlineValueWorkspaceClientCapabilities> value) { this->inline_value = value; }

        /**
         * Capabilities specific to the semantic token requests scoped to the workspace.
         */
        std::optional<SemanticTokensWorkspaceClientCapabilities> get_semantic_tokens() const { return semantic_tokens; }
        void set_semantic_tokens(std::optional<SemanticTokensWorkspaceClientCapabilities> value) { this->semantic_tokens = value; }

        /**
         * Capabilities specific to the `workspace/symbol` request.
         */
        std::optional<WorkspaceSymbolClientCapabilities> get_symbol() const { return symbol; }
        void set_symbol(std::optional<WorkspaceSymbolClientCapabilities> value) { this->symbol = value; }

        /**
         * Capabilities specific to `WorkspaceEdit`s
         */
        std::optional<WorkspaceEditClientCapabilities> get_workspace_edit() const { return workspace_edit; }
        void set_workspace_edit(std::optional<WorkspaceEditClientCapabilities> value) { this->workspace_edit = value; }

        /**
         * The client has support for workspace folders.
         */
        std::optional<bool> get_workspace_folders() const { return workspace_folders; }
        void set_workspace_folders(std::optional<bool> value) { this->workspace_folders = value; }
    };
}
}
