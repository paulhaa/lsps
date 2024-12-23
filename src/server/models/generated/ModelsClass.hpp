//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ModelsClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "AnnotatedTextEdit.hpp"
#include "ApplyWorkspaceEditParams.hpp"
#include "ApplyWorkspaceEditResult.hpp"
#include "CallHierarchyClientCapabilities.hpp"
#include "CallHierarchyIncomingCall.hpp"
#include "CallHierarchyIncomingCallsParams.hpp"
#include "CallHierarchyItem.hpp"
#include "CallHierarchyOptionsClass.hpp"
#include "CallHierarchyOutgoingCall.hpp"
#include "CallHierarchyOutgoingCallsParams.hpp"
#include "CallHierarchyPrepareParams.hpp"
#include "CallHierarchyRegistrationOptions.hpp"
#include "CancelParams.hpp"
#include "ChangeAnnotation.hpp"
#include "ClientCapabilities.hpp"
#include "CodeAction.hpp"
#include "CodeActionClientCapabilities.hpp"
#include "CodeActionContext.hpp"
#include "CodeActionOptions.hpp"
#include "CodeActionParams.hpp"
#include "CodeActionRegistrationOptions.hpp"
#include "CodeDescription.hpp"
#include "CodeLens.hpp"
#include "CodeLensClientCapabilities.hpp"
#include "CodeLensOptions.hpp"
#include "CodeLensParams.hpp"
#include "CodeLensRegistrationOptions.hpp"
#include "CodeLensWorkspaceClientCapabilities.hpp"
#include "Color.hpp"
#include "ColorInformation.hpp"
#include "ColorPresentation.hpp"
#include "ColorPresentationParams.hpp"
#include "Command.hpp"
#include "CompletionClientCapabilities.hpp"
#include "CompletionContext.hpp"
#include "CompletionItem.hpp"
#include "CompletionItemLabelDetails.hpp"
#include "CompletionListClass.hpp"
#include "CompletionOptions.hpp"
#include "CompletionParams.hpp"
#include "CompletionRegistrationOptions.hpp"
#include "ConfigurationItem.hpp"
#include "ConfigurationParams.hpp"
#include "CreateFile.hpp"
#include "CreateFileOptions.hpp"
#include "CreateFilesParams.hpp"
#include "DeclarationClientCapabilities.hpp"
#include "DeclarationOptions.hpp"
#include "DeclarationParams.hpp"
#include "DeclarationRegistrationOptions.hpp"
#include "DefinitionClientCapabilities.hpp"
#include "DefinitionOptions.hpp"
#include "DefinitionParams.hpp"
#include "DefinitionRegistrationOptions.hpp"
#include "DeleteFile.hpp"
#include "DeleteFileOptions.hpp"
#include "DeleteFilesParams.hpp"
#include "Diagnostic.hpp"
#include "DiagnosticClientCapabilities.hpp"
#include "DiagnosticOptions.hpp"
#include "DiagnosticRegistrationOptions.hpp"
#include "DiagnosticRelatedInformation.hpp"
#include "DiagnosticServerCancellationData.hpp"
#include "DiagnosticWorkspaceClientCapabilities.hpp"
#include "DidChangeConfigurationClientCapabilities.hpp"
#include "DidChangeConfigurationParams.hpp"
#include "DidChangeNotebookDocumentParams.hpp"
#include "DidChangeTextDocumentParams.hpp"
#include "DidChangeWatchedFilesClientCapabilities.hpp"
#include "DidChangeWatchedFilesParams.hpp"
#include "DidChangeWatchedFilesRegistrationOptions.hpp"
#include "DidChangeWorkspaceFoldersParams.hpp"
#include "DidCloseNotebookDocumentParams.hpp"
#include "DidCloseTextDocumentParams.hpp"
#include "DidOpenNotebookDocumentParams.hpp"
#include "DidOpenTextDocumentParams.hpp"
#include "DidSaveNotebookDocumentParams.hpp"
#include "DidSaveTextDocumentParams.hpp"
#include "DocumentColorClientCapabilities.hpp"
#include "DocumentColorOptionsClass.hpp"
#include "DocumentColorParams.hpp"
#include "DocumentColorRegistrationOptions.hpp"
#include "DocumentDiagnosticParams.hpp"
#include "DocumentDiagnosticReport.hpp"
#include "DocumentDiagnosticReportPartialResult.hpp"
#include "DocumentFilter.hpp"
#include "DocumentFormattingClientCapabilities.hpp"
#include "DocumentFormattingOptions.hpp"
#include "DocumentFormattingParams.hpp"
#include "DocumentFormattingRegistrationOptions.hpp"
#include "DocumentHighlight.hpp"
#include "DocumentHighlightClientCapabilities.hpp"
#include "DocumentHighlightOptions.hpp"
#include "DocumentHighlightParams.hpp"
#include "DocumentHighlightRegistrationOptions.hpp"
#include "DocumentLink.hpp"
#include "DocumentLinkClientCapabilities.hpp"
#include "DocumentLinkOptions.hpp"
#include "DocumentLinkParams.hpp"
#include "DocumentLinkRegistrationOptions.hpp"
#include "DocumentOnTypeFormattingClientCapabilities.hpp"
#include "DocumentOnTypeFormattingOptions.hpp"
#include "DocumentOnTypeFormattingParams.hpp"
#include "DocumentOnTypeFormattingRegistrationOptions.hpp"
#include "DocumentRangeFormattingClientCapabilities.hpp"
#include "DocumentRangeFormattingOptions.hpp"
#include "DocumentRangeFormattingParams.hpp"
#include "DocumentRangeFormattingRegistrationOptions.hpp"
#include "DocumentSymbol.hpp"
#include "DocumentSymbolClientCapabilities.hpp"
#include "DocumentSymbolOptions.hpp"
#include "DocumentSymbolParams.hpp"
#include "DocumentSymbolRegistrationOptions.hpp"
#include "ExecuteCommandClientCapabilities.hpp"
#include "ExecuteCommandOptions.hpp"
#include "ExecuteCommandParams.hpp"
#include "ExecuteCommandRegistrationOptions.hpp"
#include "ExecutionSummary.hpp"
#include "FileCreate.hpp"
#include "FileDelete.hpp"
#include "FileEvent.hpp"
#include "FileOperationFilter.hpp"
#include "FileOperationPattern.hpp"
#include "FileOperationPatternOptions.hpp"
#include "FileOperationRegistrationOptions.hpp"
#include "FileRename.hpp"
#include "FileSystemWatcher.hpp"
#include "FoldingRangeClass.hpp"
#include "FoldingRangeClientCapabilities.hpp"
#include "FoldingRangeOptionsClass.hpp"
#include "FoldingRangeParams.hpp"
#include "FoldingRangeRegistrationOptions.hpp"
#include "FormattingOptions.hpp"
#include "FullDocumentDiagnosticReport.hpp"
#include "GlobPattern.hpp"
#include "RelativePattern.hpp"
#include "Hover.hpp"
#include "HoverClientCapabilities.hpp"
#include "HoverOptions.hpp"
#include "HoverParams.hpp"
#include "HoverRegistrationOptions.hpp"
#include "ImplementationClientCapabilities.hpp"
#include "ImplementationOptions.hpp"
#include "ImplementationParams.hpp"
#include "ImplementationRegistrationOptions.hpp"
#include "InitializedParams.hpp"
#include "InitializeError.hpp"
#include "InitializeParams.hpp"
#include "InitializeResult.hpp"
#include "InlayHint.hpp"
#include "InlayHintClientCapabilities.hpp"
#include "InlayHintLabelPart.hpp"
#include "InlayHintOptionsClass.hpp"
#include "InlayHintParams.hpp"
#include "InlayHintRegistrationOptions.hpp"
#include "InlayHintWorkspaceClientCapabilities.hpp"
#include "InlineValue.hpp"
#include "InlineValueClientCapabilities.hpp"
#include "InlineValueContext.hpp"
#include "InlineValueEvaluatableExpression.hpp"
#include "InlineValueOptionsClass.hpp"
#include "InlineValueParams.hpp"
#include "InlineValueRegistrationOptions.hpp"
#include "InlineValueText.hpp"
#include "InlineValueVariableLookup.hpp"
#include "InlineValueWorkspaceClientCapabilities.hpp"
#include "InsertReplaceEdit.hpp"
#include "LinkedEditingRangeClientCapabilities.hpp"
#include "LinkedEditingRangeOptionsClass.hpp"
#include "LinkedEditingRangeParams.hpp"
#include "LinkedEditingRangeRegistrationOptions.hpp"
#include "LinkedEditingRanges.hpp"
#include "LocationClass.hpp"
#include "LocationLink.hpp"
#include "LogMessageParams.hpp"
#include "LogTraceParams.hpp"
#include "LspAny.hpp"
#include "MarkdownClientCapabilities.hpp"
#include "MarkedString.hpp"
#include "MarkedStringClass.hpp"
#include "DocumentationMarkupContent.hpp"
#include "Message.hpp"
#include "MessageActionItemElement.hpp"
#include "Moniker.hpp"
#include "MonikerClientCapabilities.hpp"
#include "MonikerOptionsClass.hpp"
#include "MonikerParams.hpp"
#include "MonikerRegistrationOptions.hpp"
#include "NotebookCell.hpp"
#include "NotebookCellArrayChange.hpp"
#include "NotebookCellTextDocumentFilter.hpp"
#include "NotebookDocument.hpp"
#include "NotebookDocumentChangeEvent.hpp"
#include "NotebookDocumentClientCapabilities.hpp"
#include "NotebookDocumentFilter.hpp"
#include "NotebookDocumentIdentifier.hpp"
#include "NotebookDocumentSyncClientCapabilities.hpp"
#include "NotebookDocumentSyncOptionsClass.hpp"
#include "NotebookDocumentSyncRegistrationOptions.hpp"
#include "NotificationMessage.hpp"
#include "OptionalVersionedTextDocumentIdentifier.hpp"
#include "ParameterInformationElement.hpp"
#include "PartialResultParams.hpp"
#include "Position.hpp"
#include "PrepareRenameParams.hpp"
#include "PreviousResultId.hpp"
#include "ProgressToken.hpp"
#include "PublishDiagnosticsClientCapabilities.hpp"
#include "PublishDiagnosticsParams.hpp"
#include "PurpleRange.hpp"
#include "ReferenceClientCapabilities.hpp"
#include "ReferenceContext.hpp"
#include "ReferenceOptions.hpp"
#include "ReferenceParams.hpp"
#include "ReferenceRegistrationOptions.hpp"
#include "Registration.hpp"
#include "RegistrationParams.hpp"
#include "RegularExpressionsClientCapabilities.hpp"
#include "RelatedFullDocumentDiagnosticReport.hpp"
#include "RelatedUnchangedDocumentDiagnosticReport.hpp"
#include "RenameClientCapabilities.hpp"
#include "RenameFile.hpp"
#include "RenameFileOptions.hpp"
#include "RenameFilesParams.hpp"
#include "RenameOptions.hpp"
#include "RenameParams.hpp"
#include "RenameRegistrationOptions.hpp"
#include "RequestMessage.hpp"
#include "ResponseError.hpp"
#include "ResponseMessage.hpp"
#include "SaveOptions.hpp"
#include "SelectionRange.hpp"
#include "SelectionRangeClientCapabilities.hpp"
#include "SelectionRangeOptionsClass.hpp"
#include "SelectionRangeParams.hpp"
#include "SelectionRangeRegistrationOptions.hpp"
#include "SemanticTokens.hpp"
#include "SemanticTokensClientCapabilities.hpp"
#include "SemanticTokensDelta.hpp"
#include "SemanticTokensDeltaParams.hpp"
#include "SemanticTokensDeltaPartialResult.hpp"
#include "SemanticTokensEdit.hpp"
#include "SemanticTokensLegend.hpp"
#include "SemanticTokensOptionsClass.hpp"
#include "SemanticTokensParams.hpp"
#include "SemanticTokensPartialResult.hpp"
#include "SemanticTokensRangeParams.hpp"
#include "SemanticTokensRegistrationOptions.hpp"
#include "SemanticTokensWorkspaceClientCapabilities.hpp"
#include "ServerCapabilities.hpp"
#include "SetTraceParams.hpp"
#include "ShowDocumentClientCapabilities.hpp"
#include "ShowDocumentParams.hpp"
#include "ShowDocumentResult.hpp"
#include "ShowMessageParams.hpp"
#include "ShowMessageRequestClientCapabilities.hpp"
#include "ShowMessageRequestParams.hpp"
#include "SignatureHelp.hpp"
#include "SignatureHelpClientCapabilities.hpp"
#include "SignatureHelpContext.hpp"
#include "SignatureHelpOptions.hpp"
#include "SignatureHelpParams.hpp"
#include "SignatureHelpRegistrationOptions.hpp"
#include "SignatureInformationElement.hpp"
#include "StaticRegistrationOptions.hpp"
#include "SymbolInformation.hpp"
#include "TextDocumentChangeRegistrationOptions.hpp"
#include "TextDocumentClientCapabilities.hpp"
#include "TextDocumentContentChangeEvent.hpp"
#include "TextDocumentEditClass.hpp"
#include "TextDocumentIdentifier.hpp"
#include "TextDocumentItem.hpp"
#include "TextDocumentPositionParams.hpp"
#include "TextDocumentRegistrationOptions.hpp"
#include "TextDocumentSaveRegistrationOptions.hpp"
#include "TextDocumentSyncClientCapabilities.hpp"
#include "TextDocumentSyncOptions.hpp"
#include "TextEdit.hpp"
#include "TypeDefinitionClientCapabilities.hpp"
#include "TypeDefinitionOptions.hpp"
#include "TypeDefinitionParams.hpp"
#include "TypeDefinitionRegistrationOptions.hpp"
#include "TypeHierarchyClientCapabilities.hpp"
#include "TypeHierarchyItem.hpp"
#include "TypeHierarchyOptionsClass.hpp"
#include "TypeHierarchyPrepareParams.hpp"
#include "TypeHierarchyRegistrationOptions.hpp"
#include "TypeHierarchySubtypesParams.hpp"
#include "TypeHierarchySupertypesParams.hpp"
#include "UnchangedDocumentDiagnosticReport.hpp"
#include "Unregistration.hpp"
#include "UnregistrationParams.hpp"
#include "VersionedNotebookDocumentIdentifier.hpp"
#include "VersionedTextDocumentIdentifier.hpp"
#include "WillSaveTextDocumentParams.hpp"
#include "WorkDoneProgressBegin.hpp"
#include "WorkDoneProgressCancelParams.hpp"
#include "WorkDoneProgressCreateParams.hpp"
#include "WorkDoneProgressEnd.hpp"
#include "WorkDoneProgressOptions.hpp"
#include "WorkDoneProgressParams.hpp"
#include "WorkDoneProgressReport.hpp"
#include "WorkspaceDiagnosticParams.hpp"
#include "WorkspaceDiagnosticReport.hpp"
#include "WorkspaceDiagnosticReportPartialResult.hpp"
#include "WorkspaceDocumentDiagnosticReport.hpp"
#include "WorkspaceEdit.hpp"
#include "WorkspaceEditClientCapabilities.hpp"
#include "WorkspaceFolder.hpp"
#include "WorkspaceFoldersChangeEvent.hpp"
#include "WorkspaceFoldersServerCapabilities.hpp"
#include "WorkspaceFullDocumentDiagnosticReport.hpp"
#include "WorkspaceSymbol.hpp"
#include "WorkspaceSymbolClientCapabilities.hpp"
#include "WorkspaceSymbolOptions.hpp"
#include "WorkspaceSymbolParams.hpp"
#include "WorkspaceSymbolRegistrationOptions.hpp"
#include "WorkspaceUnchangedDocumentDiagnosticReport.hpp"

namespace lsps {
    enum class DocumentDiagnosticReportKind : int;
    enum class FailureHandlingKind : int;
    enum class FileOperationPatternKind : int;
    enum class MarkupKind : int;
    enum class MonikerKind : int;
    enum class ResourceOperationKind : int;
    enum class SemanticTokenModifiers : int;
    enum class SemanticTokenTypes : int;
    enum class TokenFormat : int;
    enum class TraceValue : int;
    enum class UniquenessLevel : int;
}

namespace lsps {
    using nlohmann::json;

    class ModelsClass {
        public:
        ModelsClass() = default;
        virtual ~ModelsClass() = default;

        private:
        std::optional<AnnotatedTextEdit> annotated_text_edit;
        std::optional<ApplyWorkspaceEditParams> apply_workspace_edit_params;
        std::optional<ApplyWorkspaceEditResult> apply_workspace_edit_result;
        std::optional<CallHierarchyClientCapabilities> call_hierarchy_client_capabilities;
        std::optional<CallHierarchyIncomingCall> call_hierarchy_incoming_call;
        std::optional<CallHierarchyIncomingCallsParams> call_hierarchy_incoming_calls_params;
        std::optional<CallHierarchyItem> call_hierarchy_item;
        std::optional<CallHierarchyOptionsClass> call_hierarchy_options;
        std::optional<CallHierarchyOutgoingCall> call_hierarchy_outgoing_call;
        std::optional<CallHierarchyOutgoingCallsParams> call_hierarchy_outgoing_calls_params;
        std::optional<CallHierarchyPrepareParams> call_hierarchy_prepare_params;
        std::optional<CallHierarchyRegistrationOptions> call_hierarchy_registration_options;
        std::optional<CancelParams> cancel_params;
        std::optional<ChangeAnnotation> change_annotation;
        std::optional<std::string> change_annotation_identifier;
        std::optional<ClientCapabilities> client_capabilities;
        std::optional<CodeAction> code_action;
        std::optional<CodeActionClientCapabilities> code_action_client_capabilities;
        std::optional<CodeActionContext> code_action_context;
        std::optional<std::string> code_action_kind;
        std::optional<CodeActionOptions> code_action_options;
        std::optional<CodeActionParams> code_action_params;
        std::optional<CodeActionRegistrationOptions> code_action_registration_options;
        std::optional<double> code_action_trigger_kind;
        std::optional<CodeDescription> code_description;
        std::optional<CodeLens> code_lens;
        std::optional<CodeLensClientCapabilities> code_lens_client_capabilities;
        std::optional<CodeLensOptions> code_lens_options;
        std::optional<CodeLensParams> code_lens_params;
        std::optional<CodeLensRegistrationOptions> code_lens_registration_options;
        std::optional<CodeLensWorkspaceClientCapabilities> code_lens_workspace_client_capabilities;
        std::optional<Color> color;
        std::optional<ColorInformation> color_information;
        std::optional<ColorPresentation> color_presentation;
        std::optional<ColorPresentationParams> color_presentation_params;
        std::optional<Command> command;
        std::optional<CompletionClientCapabilities> completion_client_capabilities;
        std::optional<CompletionContext> completion_context;
        std::optional<CompletionItem> completion_item;
        std::optional<double> completion_item_kind;
        std::optional<CompletionItemLabelDetails> completion_item_label_details;
        std::optional<double> completion_item_tag;
        std::optional<CompletionListClass> completion_list;
        std::optional<CompletionOptions> completion_options;
        std::optional<CompletionParams> completion_params;
        std::optional<CompletionRegistrationOptions> completion_registration_options;
        std::optional<double> completion_trigger_kind;
        std::optional<ConfigurationItem> configuration_item;
        std::optional<ConfigurationParams> configuration_params;
        std::optional<CreateFile> create_file;
        std::optional<CreateFileOptions> create_file_options;
        std::optional<CreateFilesParams> create_files_params;
        std::optional<double> decimal;
        std::optional<DeclarationClientCapabilities> declaration_client_capabilities;
        std::optional<DeclarationOptions> declaration_options;
        std::optional<DeclarationParams> declaration_params;
        std::optional<DeclarationRegistrationOptions> declaration_registration_options;
        std::optional<DefinitionClientCapabilities> definition_client_capabilities;
        std::optional<DefinitionOptions> definition_options;
        std::optional<DefinitionParams> definition_params;
        std::optional<DefinitionRegistrationOptions> definition_registration_options;
        std::optional<DeleteFile> delete_file;
        std::optional<DeleteFileOptions> delete_file_options;
        std::optional<DeleteFilesParams> delete_files_params;
        std::optional<Diagnostic> diagnostic;
        std::optional<DiagnosticClientCapabilities> diagnostic_client_capabilities;
        std::optional<DiagnosticOptions> diagnostic_options;
        std::optional<DiagnosticRegistrationOptions> diagnostic_registration_options;
        std::optional<DiagnosticRelatedInformation> diagnostic_related_information;
        std::optional<DiagnosticServerCancellationData> diagnostic_server_cancellation_data;
        std::optional<double> diagnostic_severity;
        std::optional<double> diagnostic_tag;
        std::optional<DiagnosticWorkspaceClientCapabilities> diagnostic_workspace_client_capabilities;
        std::optional<DidChangeConfigurationClientCapabilities> did_change_configuration_client_capabilities;
        std::optional<DidChangeConfigurationParams> did_change_configuration_params;
        std::optional<DidChangeNotebookDocumentParams> did_change_notebook_document_params;
        std::optional<DidChangeTextDocumentParams> did_change_text_document_params;
        std::optional<DidChangeWatchedFilesClientCapabilities> did_change_watched_files_client_capabilities;
        std::optional<DidChangeWatchedFilesParams> did_change_watched_files_params;
        std::optional<DidChangeWatchedFilesRegistrationOptions> did_change_watched_files_registration_options;
        std::optional<DidChangeWorkspaceFoldersParams> did_change_workspace_folders_params;
        std::optional<DidCloseNotebookDocumentParams> did_close_notebook_document_params;
        std::optional<DidCloseTextDocumentParams> did_close_text_document_params;
        std::optional<DidOpenNotebookDocumentParams> did_open_notebook_document_params;
        std::optional<DidOpenTextDocumentParams> did_open_text_document_params;
        std::optional<DidSaveNotebookDocumentParams> did_save_notebook_document_params;
        std::optional<DidSaveTextDocumentParams> did_save_text_document_params;
        std::optional<DocumentColorClientCapabilities> document_color_client_capabilities;
        std::optional<DocumentColorOptionsClass> document_color_options;
        std::optional<DocumentColorParams> document_color_params;
        std::optional<DocumentColorRegistrationOptions> document_color_registration_options;
        std::optional<DocumentDiagnosticParams> document_diagnostic_params;
        std::optional<DocumentDiagnosticReport> document_diagnostic_report;
        std::optional<DocumentDiagnosticReportKind> document_diagnostic_report_kind;
        std::optional<DocumentDiagnosticReportPartialResult> document_diagnostic_report_partial_result;
        std::optional<DocumentFilter> document_filter;
        std::optional<DocumentFormattingClientCapabilities> document_formatting_client_capabilities;
        std::optional<DocumentFormattingOptions> document_formatting_options;
        std::optional<DocumentFormattingParams> document_formatting_params;
        std::optional<DocumentFormattingRegistrationOptions> document_formatting_registration_options;
        std::optional<DocumentHighlight> document_highlight;
        std::optional<DocumentHighlightClientCapabilities> document_highlight_client_capabilities;
        std::optional<double> document_highlight_kind;
        std::optional<DocumentHighlightOptions> document_highlight_options;
        std::optional<DocumentHighlightParams> document_highlight_params;
        std::optional<DocumentHighlightRegistrationOptions> document_highlight_registration_options;
        std::optional<DocumentLink> document_link;
        std::optional<DocumentLinkClientCapabilities> document_link_client_capabilities;
        std::optional<DocumentLinkOptions> document_link_options;
        std::optional<DocumentLinkParams> document_link_params;
        std::optional<DocumentLinkRegistrationOptions> document_link_registration_options;
        std::optional<DocumentOnTypeFormattingClientCapabilities> document_on_type_formatting_client_capabilities;
        std::optional<DocumentOnTypeFormattingOptions> document_on_type_formatting_options;
        std::optional<DocumentOnTypeFormattingParams> document_on_type_formatting_params;
        std::optional<DocumentOnTypeFormattingRegistrationOptions> document_on_type_formatting_registration_options;
        std::optional<DocumentRangeFormattingClientCapabilities> document_range_formatting_client_capabilities;
        std::optional<DocumentRangeFormattingOptions> document_range_formatting_options;
        std::optional<DocumentRangeFormattingParams> document_range_formatting_params;
        std::optional<DocumentRangeFormattingRegistrationOptions> document_range_formatting_registration_options;
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<DocumentSymbol> document_symbol;
        std::optional<DocumentSymbolClientCapabilities> document_symbol_client_capabilities;
        std::optional<DocumentSymbolOptions> document_symbol_options;
        std::optional<DocumentSymbolParams> document_symbol_params;
        std::optional<DocumentSymbolRegistrationOptions> document_symbol_registration_options;
        std::optional<std::string> document_uri;
        std::optional<double> error_codes;
        std::optional<ExecuteCommandClientCapabilities> execute_command_client_capabilities;
        std::optional<ExecuteCommandOptions> execute_command_options;
        std::optional<ExecuteCommandParams> execute_command_params;
        std::optional<ExecuteCommandRegistrationOptions> execute_command_registration_options;
        std::optional<ExecutionSummary> execution_summary;
        std::optional<FailureHandlingKind> failure_handling_kind;
        std::optional<double> file_change_type;
        std::optional<FileCreate> file_create;
        std::optional<FileDelete> file_delete;
        std::optional<FileEvent> file_event;
        std::optional<FileOperationFilter> file_operation_filter;
        std::optional<FileOperationPattern> file_operation_pattern;
        std::optional<FileOperationPatternKind> file_operation_pattern_kind;
        std::optional<FileOperationPatternOptions> file_operation_pattern_options;
        std::optional<FileOperationRegistrationOptions> file_operation_registration_options;
        std::optional<FileRename> file_rename;
        std::optional<FileSystemWatcher> file_system_watcher;
        std::optional<FoldingRangeClass> folding_range;
        std::optional<FoldingRangeClientCapabilities> folding_range_client_capabilities;
        std::optional<std::string> folding_range_kind;
        std::optional<FoldingRangeOptionsClass> folding_range_options;
        std::optional<FoldingRangeParams> folding_range_params;
        std::optional<FoldingRangeRegistrationOptions> folding_range_registration_options;
        std::optional<FormattingOptions> formatting_options;
        std::optional<FullDocumentDiagnosticReport> full_document_diagnostic_report;
        std::optional<GlobPattern> glob_pattern;
        std::optional<Hover> hover;
        std::optional<HoverClientCapabilities> hover_client_capabilities;
        std::optional<HoverOptions> hover_options;
        std::optional<HoverParams> hover_params;
        std::optional<HoverRegistrationOptions> hover_registration_options;
        std::optional<ImplementationClientCapabilities> implementation_client_capabilities;
        std::optional<ImplementationOptions> implementation_options;
        std::optional<ImplementationParams> implementation_params;
        std::optional<ImplementationRegistrationOptions> implementation_registration_options;
        std::optional<InitializedParams> initialized_params;
        std::optional<InitializeError> initialize_error;
        std::optional<double> initialize_error_codes;
        std::optional<InitializeParams> initialize_params;
        std::optional<InitializeResult> initialize_result;
        std::optional<InlayHint> inlay_hint;
        std::optional<InlayHintClientCapabilities> inlay_hint_client_capabilities;
        std::optional<double> inlay_hint_kind;
        std::optional<InlayHintLabelPart> inlay_hint_label_part;
        std::optional<InlayHintOptionsClass> inlay_hint_options;
        std::optional<InlayHintParams> inlay_hint_params;
        std::optional<InlayHintRegistrationOptions> inlay_hint_registration_options;
        std::optional<InlayHintWorkspaceClientCapabilities> inlay_hint_workspace_client_capabilities;
        std::optional<InlineValue> inline_value;
        std::optional<InlineValueClientCapabilities> inline_value_client_capabilities;
        std::optional<InlineValueContext> inline_value_context;
        std::optional<InlineValueEvaluatableExpression> inline_value_evaluatable_expression;
        std::optional<InlineValueOptionsClass> inline_value_options;
        std::optional<InlineValueParams> inline_value_params;
        std::optional<InlineValueRegistrationOptions> inline_value_registration_options;
        std::optional<InlineValueText> inline_value_text;
        std::optional<InlineValueVariableLookup> inline_value_variable_lookup;
        std::optional<InlineValueWorkspaceClientCapabilities> inline_value_workspace_client_capabilities;
        std::optional<InsertReplaceEdit> insert_replace_edit;
        std::optional<double> insert_text_format;
        std::optional<double> insert_text_mode;
        std::optional<int64_t> integer;
        std::optional<LinkedEditingRangeClientCapabilities> linked_editing_range_client_capabilities;
        std::optional<LinkedEditingRangeOptionsClass> linked_editing_range_options;
        std::optional<LinkedEditingRangeParams> linked_editing_range_params;
        std::optional<LinkedEditingRangeRegistrationOptions> linked_editing_range_registration_options;
        std::optional<LinkedEditingRanges> linked_editing_ranges;
        std::optional<LocationClass> location;
        std::optional<LocationLink> location_link;
        std::optional<LogMessageParams> log_message_params;
        std::optional<LogTraceParams> log_trace_params;
        LspAny lsp_any;
        std::optional<std::vector<LspAny>> lsp_array;
        std::optional<std::map<std::string, LspAny>> lsp_object;
        std::optional<MarkdownClientCapabilities> markdown_client_capabilities;
        std::optional<MarkedString> marked_string;
        std::optional<DocumentationMarkupContent> markup_content;
        std::optional<MarkupKind> markup_kind;
        std::optional<Message> message;
        std::optional<MessageActionItemElement> message_action_item;
        std::optional<double> message_type;
        std::optional<Moniker> moniker;
        std::optional<MonikerClientCapabilities> moniker_client_capabilities;
        std::optional<MonikerKind> moniker_kind;
        std::optional<MonikerOptionsClass> moniker_options;
        std::optional<MonikerParams> moniker_params;
        std::optional<MonikerRegistrationOptions> moniker_registration_options;
        std::optional<NotebookCell> notebook_cell;
        std::optional<NotebookCellArrayChange> notebook_cell_array_change;
        std::optional<double> notebook_cell_kind;
        std::optional<NotebookCellTextDocumentFilter> notebook_cell_text_document_filter;
        std::optional<NotebookDocument> notebook_document;
        std::optional<NotebookDocumentChangeEvent> notebook_document_change_event;
        std::optional<NotebookDocumentClientCapabilities> notebook_document_client_capabilities;
        std::optional<NotebookDocumentFilter> notebook_document_filter;
        std::optional<NotebookDocumentIdentifier> notebook_document_identifier;
        std::optional<NotebookDocumentSyncClientCapabilities> notebook_document_sync_client_capabilities;
        std::optional<NotebookDocumentSyncOptionsClass> notebook_document_sync_options;
        std::optional<NotebookDocumentSyncRegistrationOptions> notebook_document_sync_registration_options;
        std::optional<NotificationMessage> notification_message;
        std::optional<OptionalVersionedTextDocumentIdentifier> optional_versioned_text_document_identifier;
        std::optional<ParameterInformationElement> parameter_information;
        std::optional<PartialResultParams> partial_result_params;
        std::optional<std::string> pattern;
        std::optional<Position> position;
        std::optional<std::string> position_encoding_kind;
        std::optional<PrepareRenameParams> prepare_rename_params;
        std::optional<double> prepare_support_default_behavior;
        std::optional<PreviousResultId> previous_result_id;
        std::optional<ProgressToken> progress_token;
        std::optional<PublishDiagnosticsClientCapabilities> publish_diagnostics_client_capabilities;
        std::optional<PublishDiagnosticsParams> publish_diagnostics_params;
        std::optional<PurpleRange> range;
        std::optional<ReferenceClientCapabilities> reference_client_capabilities;
        std::optional<ReferenceContext> reference_context;
        std::optional<ReferenceOptions> reference_options;
        std::optional<ReferenceParams> reference_params;
        std::optional<ReferenceRegistrationOptions> reference_registration_options;
        std::optional<Registration> registration;
        std::optional<RegistrationParams> registration_params;
        std::optional<RegularExpressionsClientCapabilities> regular_expressions_client_capabilities;
        std::optional<RelatedFullDocumentDiagnosticReport> related_full_document_diagnostic_report;
        std::optional<RelatedUnchangedDocumentDiagnosticReport> related_unchanged_document_diagnostic_report;
        std::optional<RelativePattern> relative_pattern;
        std::optional<RenameClientCapabilities> rename_client_capabilities;
        std::optional<RenameFile> rename_file;
        std::optional<RenameFileOptions> rename_file_options;
        std::optional<RenameFilesParams> rename_files_params;
        std::optional<RenameOptions> rename_options;
        std::optional<RenameParams> rename_params;
        std::optional<RenameRegistrationOptions> rename_registration_options;
        std::optional<RequestMessage> request_message;
        std::optional<ResourceOperationKind> resource_operation_kind;
        std::optional<ResponseError> response_error;
        std::optional<ResponseMessage> response_message;
        std::optional<SaveOptions> save_options;
        std::shared_ptr<SelectionRange> selection_range;
        std::optional<SelectionRangeClientCapabilities> selection_range_client_capabilities;
        std::optional<SelectionRangeOptionsClass> selection_range_options;
        std::optional<SelectionRangeParams> selection_range_params;
        std::optional<SelectionRangeRegistrationOptions> selection_range_registration_options;
        std::optional<SemanticTokenModifiers> semantic_token_modifiers;
        std::optional<SemanticTokens> semantic_tokens;
        std::optional<SemanticTokensClientCapabilities> semantic_tokens_client_capabilities;
        std::optional<SemanticTokensDelta> semantic_tokens_delta;
        std::optional<SemanticTokensDeltaParams> semantic_tokens_delta_params;
        std::optional<SemanticTokensDeltaPartialResult> semantic_tokens_delta_partial_result;
        std::optional<SemanticTokensEdit> semantic_tokens_edit;
        std::optional<SemanticTokensLegend> semantic_tokens_legend;
        std::optional<SemanticTokensOptionsClass> semantic_tokens_options;
        std::optional<SemanticTokensParams> semantic_tokens_params;
        std::optional<SemanticTokensPartialResult> semantic_tokens_partial_result;
        std::optional<SemanticTokensRangeParams> semantic_tokens_range_params;
        std::optional<SemanticTokensRegistrationOptions> semantic_tokens_registration_options;
        std::optional<SemanticTokensWorkspaceClientCapabilities> semantic_tokens_workspace_client_capabilities;
        std::optional<SemanticTokenTypes> semantic_token_types;
        std::optional<ServerCapabilities> server_capabilities;
        std::optional<SetTraceParams> set_trace_params;
        std::optional<ShowDocumentClientCapabilities> show_document_client_capabilities;
        std::optional<ShowDocumentParams> show_document_params;
        std::optional<ShowDocumentResult> show_document_result;
        std::optional<ShowMessageParams> show_message_params;
        std::optional<ShowMessageRequestClientCapabilities> show_message_request_client_capabilities;
        std::optional<ShowMessageRequestParams> show_message_request_params;
        std::optional<SignatureHelp> signature_help;
        std::optional<SignatureHelpClientCapabilities> signature_help_client_capabilities;
        std::optional<SignatureHelpContext> signature_help_context;
        std::optional<SignatureHelpOptions> signature_help_options;
        std::optional<SignatureHelpParams> signature_help_params;
        std::optional<SignatureHelpRegistrationOptions> signature_help_registration_options;
        std::optional<double> signature_help_trigger_kind;
        std::optional<SignatureInformationElement> signature_information;
        std::optional<StaticRegistrationOptions> static_registration_options;
        std::optional<SymbolInformation> symbol_information;
        std::optional<double> symbol_kind;
        std::optional<double> symbol_tag;
        std::optional<TextDocumentChangeRegistrationOptions> text_document_change_registration_options;
        std::optional<TextDocumentClientCapabilities> text_document_client_capabilities;
        std::optional<TextDocumentContentChangeEvent> text_document_content_change_event;
        std::optional<TextDocumentEditClass> text_document_edit;
        std::optional<TextDocumentIdentifier> text_document_identifier;
        std::optional<TextDocumentItem> text_document_item;
        std::optional<TextDocumentPositionParams> text_document_position_params;
        std::optional<TextDocumentRegistrationOptions> text_document_registration_options;
        std::optional<double> text_document_save_reason;
        std::optional<TextDocumentSaveRegistrationOptions> text_document_save_registration_options;
        std::optional<TextDocumentSyncClientCapabilities> text_document_sync_client_capabilities;
        std::optional<double> text_document_sync_kind;
        std::optional<TextDocumentSyncOptions> text_document_sync_options;
        std::optional<TextEdit> text_edit;
        std::optional<TokenFormat> token_format;
        std::optional<TraceValue> trace_value;
        std::optional<TypeDefinitionClientCapabilities> type_definition_client_capabilities;
        std::optional<TypeDefinitionOptions> type_definition_options;
        std::optional<TypeDefinitionParams> type_definition_params;
        std::optional<TypeDefinitionRegistrationOptions> type_definition_registration_options;
        std::optional<TypeHierarchyClientCapabilities> type_hierarchy_client_capabilities;
        std::optional<TypeHierarchyItem> type_hierarchy_item;
        std::optional<TypeHierarchyOptionsClass> type_hierarchy_options;
        std::optional<TypeHierarchyPrepareParams> type_hierarchy_prepare_params;
        std::optional<TypeHierarchyRegistrationOptions> type_hierarchy_registration_options;
        std::optional<TypeHierarchySubtypesParams> type_hierarchy_subtypes_params;
        std::optional<TypeHierarchySupertypesParams> type_hierarchy_supertypes_params;
        std::optional<int64_t> uinteger;
        std::optional<UnchangedDocumentDiagnosticReport> unchanged_document_diagnostic_report;
        std::optional<UniquenessLevel> uniqueness_level;
        std::optional<Unregistration> unregistration;
        std::optional<UnregistrationParams> unregistration_params;
        std::optional<std::string> uri;
        std::optional<VersionedNotebookDocumentIdentifier> versioned_notebook_document_identifier;
        std::optional<VersionedTextDocumentIdentifier> versioned_text_document_identifier;
        std::optional<int64_t> watch_kind;
        std::optional<WillSaveTextDocumentParams> will_save_text_document_params;
        std::optional<WorkDoneProgressBegin> work_done_progress_begin;
        std::optional<WorkDoneProgressCancelParams> work_done_progress_cancel_params;
        std::optional<WorkDoneProgressCreateParams> work_done_progress_create_params;
        std::optional<WorkDoneProgressEnd> work_done_progress_end;
        std::optional<WorkDoneProgressOptions> work_done_progress_options;
        std::optional<WorkDoneProgressParams> work_done_progress_params;
        std::optional<WorkDoneProgressReport> work_done_progress_report;
        std::optional<WorkspaceDiagnosticParams> workspace_diagnostic_params;
        std::optional<WorkspaceDiagnosticReport> workspace_diagnostic_report;
        std::optional<WorkspaceDiagnosticReportPartialResult> workspace_diagnostic_report_partial_result;
        std::optional<WorkspaceDocumentDiagnosticReport> workspace_document_diagnostic_report;
        std::optional<WorkspaceEdit> workspace_edit;
        std::optional<WorkspaceEditClientCapabilities> workspace_edit_client_capabilities;
        std::optional<WorkspaceFolder> workspace_folder;
        std::optional<WorkspaceFoldersChangeEvent> workspace_folders_change_event;
        std::optional<WorkspaceFoldersServerCapabilities> workspace_folders_server_capabilities;
        std::optional<WorkspaceFullDocumentDiagnosticReport> workspace_full_document_diagnostic_report;
        std::optional<WorkspaceSymbol> workspace_symbol;
        std::optional<WorkspaceSymbolClientCapabilities> workspace_symbol_client_capabilities;
        std::optional<WorkspaceSymbolOptions> workspace_symbol_options;
        std::optional<WorkspaceSymbolParams> workspace_symbol_params;
        std::optional<WorkspaceSymbolRegistrationOptions> workspace_symbol_registration_options;
        std::optional<WorkspaceUnchangedDocumentDiagnosticReport> workspace_unchanged_document_diagnostic_report;

        public:
        std::optional<AnnotatedTextEdit> get_annotated_text_edit() const { return annotated_text_edit; }
        void set_annotated_text_edit(std::optional<AnnotatedTextEdit> value) { this->annotated_text_edit = value; }

        std::optional<ApplyWorkspaceEditParams> get_apply_workspace_edit_params() const { return apply_workspace_edit_params; }
        void set_apply_workspace_edit_params(std::optional<ApplyWorkspaceEditParams> value) { this->apply_workspace_edit_params = value; }

        std::optional<ApplyWorkspaceEditResult> get_apply_workspace_edit_result() const { return apply_workspace_edit_result; }
        void set_apply_workspace_edit_result(std::optional<ApplyWorkspaceEditResult> value) { this->apply_workspace_edit_result = value; }

        std::optional<CallHierarchyClientCapabilities> get_call_hierarchy_client_capabilities() const { return call_hierarchy_client_capabilities; }
        void set_call_hierarchy_client_capabilities(std::optional<CallHierarchyClientCapabilities> value) { this->call_hierarchy_client_capabilities = value; }

        std::optional<CallHierarchyIncomingCall> get_call_hierarchy_incoming_call() const { return call_hierarchy_incoming_call; }
        void set_call_hierarchy_incoming_call(std::optional<CallHierarchyIncomingCall> value) { this->call_hierarchy_incoming_call = value; }

        std::optional<CallHierarchyIncomingCallsParams> get_call_hierarchy_incoming_calls_params() const { return call_hierarchy_incoming_calls_params; }
        void set_call_hierarchy_incoming_calls_params(std::optional<CallHierarchyIncomingCallsParams> value) { this->call_hierarchy_incoming_calls_params = value; }

        std::optional<CallHierarchyItem> get_call_hierarchy_item() const { return call_hierarchy_item; }
        void set_call_hierarchy_item(std::optional<CallHierarchyItem> value) { this->call_hierarchy_item = value; }

        std::optional<CallHierarchyOptionsClass> get_call_hierarchy_options() const { return call_hierarchy_options; }
        void set_call_hierarchy_options(std::optional<CallHierarchyOptionsClass> value) { this->call_hierarchy_options = value; }

        std::optional<CallHierarchyOutgoingCall> get_call_hierarchy_outgoing_call() const { return call_hierarchy_outgoing_call; }
        void set_call_hierarchy_outgoing_call(std::optional<CallHierarchyOutgoingCall> value) { this->call_hierarchy_outgoing_call = value; }

        std::optional<CallHierarchyOutgoingCallsParams> get_call_hierarchy_outgoing_calls_params() const { return call_hierarchy_outgoing_calls_params; }
        void set_call_hierarchy_outgoing_calls_params(std::optional<CallHierarchyOutgoingCallsParams> value) { this->call_hierarchy_outgoing_calls_params = value; }

        std::optional<CallHierarchyPrepareParams> get_call_hierarchy_prepare_params() const { return call_hierarchy_prepare_params; }
        void set_call_hierarchy_prepare_params(std::optional<CallHierarchyPrepareParams> value) { this->call_hierarchy_prepare_params = value; }

        std::optional<CallHierarchyRegistrationOptions> get_call_hierarchy_registration_options() const { return call_hierarchy_registration_options; }
        void set_call_hierarchy_registration_options(std::optional<CallHierarchyRegistrationOptions> value) { this->call_hierarchy_registration_options = value; }

        std::optional<CancelParams> get_cancel_params() const { return cancel_params; }
        void set_cancel_params(std::optional<CancelParams> value) { this->cancel_params = value; }

        std::optional<ChangeAnnotation> get_change_annotation() const { return change_annotation; }
        void set_change_annotation(std::optional<ChangeAnnotation> value) { this->change_annotation = value; }

        std::optional<std::string> get_change_annotation_identifier() const { return change_annotation_identifier; }
        void set_change_annotation_identifier(std::optional<std::string> value) { this->change_annotation_identifier = value; }

        std::optional<ClientCapabilities> get_client_capabilities() const { return client_capabilities; }
        void set_client_capabilities(std::optional<ClientCapabilities> value) { this->client_capabilities = value; }

        std::optional<CodeAction> get_code_action() const { return code_action; }
        void set_code_action(std::optional<CodeAction> value) { this->code_action = value; }

        std::optional<CodeActionClientCapabilities> get_code_action_client_capabilities() const { return code_action_client_capabilities; }
        void set_code_action_client_capabilities(std::optional<CodeActionClientCapabilities> value) { this->code_action_client_capabilities = value; }

        std::optional<CodeActionContext> get_code_action_context() const { return code_action_context; }
        void set_code_action_context(std::optional<CodeActionContext> value) { this->code_action_context = value; }

        std::optional<std::string> get_code_action_kind() const { return code_action_kind; }
        void set_code_action_kind(std::optional<std::string> value) { this->code_action_kind = value; }

        std::optional<CodeActionOptions> get_code_action_options() const { return code_action_options; }
        void set_code_action_options(std::optional<CodeActionOptions> value) { this->code_action_options = value; }

        std::optional<CodeActionParams> get_code_action_params() const { return code_action_params; }
        void set_code_action_params(std::optional<CodeActionParams> value) { this->code_action_params = value; }

        std::optional<CodeActionRegistrationOptions> get_code_action_registration_options() const { return code_action_registration_options; }
        void set_code_action_registration_options(std::optional<CodeActionRegistrationOptions> value) { this->code_action_registration_options = value; }

        std::optional<double> get_code_action_trigger_kind() const { return code_action_trigger_kind; }
        void set_code_action_trigger_kind(std::optional<double> value) { this->code_action_trigger_kind = value; }

        std::optional<CodeDescription> get_code_description() const { return code_description; }
        void set_code_description(std::optional<CodeDescription> value) { this->code_description = value; }

        std::optional<CodeLens> get_code_lens() const { return code_lens; }
        void set_code_lens(std::optional<CodeLens> value) { this->code_lens = value; }

        std::optional<CodeLensClientCapabilities> get_code_lens_client_capabilities() const { return code_lens_client_capabilities; }
        void set_code_lens_client_capabilities(std::optional<CodeLensClientCapabilities> value) { this->code_lens_client_capabilities = value; }

        std::optional<CodeLensOptions> get_code_lens_options() const { return code_lens_options; }
        void set_code_lens_options(std::optional<CodeLensOptions> value) { this->code_lens_options = value; }

        std::optional<CodeLensParams> get_code_lens_params() const { return code_lens_params; }
        void set_code_lens_params(std::optional<CodeLensParams> value) { this->code_lens_params = value; }

        std::optional<CodeLensRegistrationOptions> get_code_lens_registration_options() const { return code_lens_registration_options; }
        void set_code_lens_registration_options(std::optional<CodeLensRegistrationOptions> value) { this->code_lens_registration_options = value; }

        std::optional<CodeLensWorkspaceClientCapabilities> get_code_lens_workspace_client_capabilities() const { return code_lens_workspace_client_capabilities; }
        void set_code_lens_workspace_client_capabilities(std::optional<CodeLensWorkspaceClientCapabilities> value) { this->code_lens_workspace_client_capabilities = value; }

        std::optional<Color> get_color() const { return color; }
        void set_color(std::optional<Color> value) { this->color = value; }

        std::optional<ColorInformation> get_color_information() const { return color_information; }
        void set_color_information(std::optional<ColorInformation> value) { this->color_information = value; }

        std::optional<ColorPresentation> get_color_presentation() const { return color_presentation; }
        void set_color_presentation(std::optional<ColorPresentation> value) { this->color_presentation = value; }

        std::optional<ColorPresentationParams> get_color_presentation_params() const { return color_presentation_params; }
        void set_color_presentation_params(std::optional<ColorPresentationParams> value) { this->color_presentation_params = value; }

        std::optional<Command> get_command() const { return command; }
        void set_command(std::optional<Command> value) { this->command = value; }

        std::optional<CompletionClientCapabilities> get_completion_client_capabilities() const { return completion_client_capabilities; }
        void set_completion_client_capabilities(std::optional<CompletionClientCapabilities> value) { this->completion_client_capabilities = value; }

        std::optional<CompletionContext> get_completion_context() const { return completion_context; }
        void set_completion_context(std::optional<CompletionContext> value) { this->completion_context = value; }

        std::optional<CompletionItem> get_completion_item() const { return completion_item; }
        void set_completion_item(std::optional<CompletionItem> value) { this->completion_item = value; }

        std::optional<double> get_completion_item_kind() const { return completion_item_kind; }
        void set_completion_item_kind(std::optional<double> value) { this->completion_item_kind = value; }

        std::optional<CompletionItemLabelDetails> get_completion_item_label_details() const { return completion_item_label_details; }
        void set_completion_item_label_details(std::optional<CompletionItemLabelDetails> value) { this->completion_item_label_details = value; }

        std::optional<double> get_completion_item_tag() const { return completion_item_tag; }
        void set_completion_item_tag(std::optional<double> value) { this->completion_item_tag = value; }

        std::optional<CompletionListClass> get_completion_list() const { return completion_list; }
        void set_completion_list(std::optional<CompletionListClass> value) { this->completion_list = value; }

        std::optional<CompletionOptions> get_completion_options() const { return completion_options; }
        void set_completion_options(std::optional<CompletionOptions> value) { this->completion_options = value; }

        std::optional<CompletionParams> get_completion_params() const { return completion_params; }
        void set_completion_params(std::optional<CompletionParams> value) { this->completion_params = value; }

        std::optional<CompletionRegistrationOptions> get_completion_registration_options() const { return completion_registration_options; }
        void set_completion_registration_options(std::optional<CompletionRegistrationOptions> value) { this->completion_registration_options = value; }

        std::optional<double> get_completion_trigger_kind() const { return completion_trigger_kind; }
        void set_completion_trigger_kind(std::optional<double> value) { this->completion_trigger_kind = value; }

        std::optional<ConfigurationItem> get_configuration_item() const { return configuration_item; }
        void set_configuration_item(std::optional<ConfigurationItem> value) { this->configuration_item = value; }

        std::optional<ConfigurationParams> get_configuration_params() const { return configuration_params; }
        void set_configuration_params(std::optional<ConfigurationParams> value) { this->configuration_params = value; }

        std::optional<CreateFile> get_create_file() const { return create_file; }
        void set_create_file(std::optional<CreateFile> value) { this->create_file = value; }

        std::optional<CreateFileOptions> get_create_file_options() const { return create_file_options; }
        void set_create_file_options(std::optional<CreateFileOptions> value) { this->create_file_options = value; }

        std::optional<CreateFilesParams> get_create_files_params() const { return create_files_params; }
        void set_create_files_params(std::optional<CreateFilesParams> value) { this->create_files_params = value; }

        std::optional<double> get_decimal() const { return decimal; }
        void set_decimal(std::optional<double> value) { this->decimal = value; }

        std::optional<DeclarationClientCapabilities> get_declaration_client_capabilities() const { return declaration_client_capabilities; }
        void set_declaration_client_capabilities(std::optional<DeclarationClientCapabilities> value) { this->declaration_client_capabilities = value; }

        std::optional<DeclarationOptions> get_declaration_options() const { return declaration_options; }
        void set_declaration_options(std::optional<DeclarationOptions> value) { this->declaration_options = value; }

        std::optional<DeclarationParams> get_declaration_params() const { return declaration_params; }
        void set_declaration_params(std::optional<DeclarationParams> value) { this->declaration_params = value; }

        std::optional<DeclarationRegistrationOptions> get_declaration_registration_options() const { return declaration_registration_options; }
        void set_declaration_registration_options(std::optional<DeclarationRegistrationOptions> value) { this->declaration_registration_options = value; }

        std::optional<DefinitionClientCapabilities> get_definition_client_capabilities() const { return definition_client_capabilities; }
        void set_definition_client_capabilities(std::optional<DefinitionClientCapabilities> value) { this->definition_client_capabilities = value; }

        std::optional<DefinitionOptions> get_definition_options() const { return definition_options; }
        void set_definition_options(std::optional<DefinitionOptions> value) { this->definition_options = value; }

        std::optional<DefinitionParams> get_definition_params() const { return definition_params; }
        void set_definition_params(std::optional<DefinitionParams> value) { this->definition_params = value; }

        std::optional<DefinitionRegistrationOptions> get_definition_registration_options() const { return definition_registration_options; }
        void set_definition_registration_options(std::optional<DefinitionRegistrationOptions> value) { this->definition_registration_options = value; }

        std::optional<DeleteFile> get_delete_file() const { return delete_file; }
        void set_delete_file(std::optional<DeleteFile> value) { this->delete_file = value; }

        std::optional<DeleteFileOptions> get_delete_file_options() const { return delete_file_options; }
        void set_delete_file_options(std::optional<DeleteFileOptions> value) { this->delete_file_options = value; }

        std::optional<DeleteFilesParams> get_delete_files_params() const { return delete_files_params; }
        void set_delete_files_params(std::optional<DeleteFilesParams> value) { this->delete_files_params = value; }

        std::optional<Diagnostic> get_diagnostic() const { return diagnostic; }
        void set_diagnostic(std::optional<Diagnostic> value) { this->diagnostic = value; }

        std::optional<DiagnosticClientCapabilities> get_diagnostic_client_capabilities() const { return diagnostic_client_capabilities; }
        void set_diagnostic_client_capabilities(std::optional<DiagnosticClientCapabilities> value) { this->diagnostic_client_capabilities = value; }

        std::optional<DiagnosticOptions> get_diagnostic_options() const { return diagnostic_options; }
        void set_diagnostic_options(std::optional<DiagnosticOptions> value) { this->diagnostic_options = value; }

        std::optional<DiagnosticRegistrationOptions> get_diagnostic_registration_options() const { return diagnostic_registration_options; }
        void set_diagnostic_registration_options(std::optional<DiagnosticRegistrationOptions> value) { this->diagnostic_registration_options = value; }

        std::optional<DiagnosticRelatedInformation> get_diagnostic_related_information() const { return diagnostic_related_information; }
        void set_diagnostic_related_information(std::optional<DiagnosticRelatedInformation> value) { this->diagnostic_related_information = value; }

        std::optional<DiagnosticServerCancellationData> get_diagnostic_server_cancellation_data() const { return diagnostic_server_cancellation_data; }
        void set_diagnostic_server_cancellation_data(std::optional<DiagnosticServerCancellationData> value) { this->diagnostic_server_cancellation_data = value; }

        std::optional<double> get_diagnostic_severity() const { return diagnostic_severity; }
        void set_diagnostic_severity(std::optional<double> value) { this->diagnostic_severity = value; }

        std::optional<double> get_diagnostic_tag() const { return diagnostic_tag; }
        void set_diagnostic_tag(std::optional<double> value) { this->diagnostic_tag = value; }

        std::optional<DiagnosticWorkspaceClientCapabilities> get_diagnostic_workspace_client_capabilities() const { return diagnostic_workspace_client_capabilities; }
        void set_diagnostic_workspace_client_capabilities(std::optional<DiagnosticWorkspaceClientCapabilities> value) { this->diagnostic_workspace_client_capabilities = value; }

        std::optional<DidChangeConfigurationClientCapabilities> get_did_change_configuration_client_capabilities() const { return did_change_configuration_client_capabilities; }
        void set_did_change_configuration_client_capabilities(std::optional<DidChangeConfigurationClientCapabilities> value) { this->did_change_configuration_client_capabilities = value; }

        std::optional<DidChangeConfigurationParams> get_did_change_configuration_params() const { return did_change_configuration_params; }
        void set_did_change_configuration_params(std::optional<DidChangeConfigurationParams> value) { this->did_change_configuration_params = value; }

        std::optional<DidChangeNotebookDocumentParams> get_did_change_notebook_document_params() const { return did_change_notebook_document_params; }
        void set_did_change_notebook_document_params(std::optional<DidChangeNotebookDocumentParams> value) { this->did_change_notebook_document_params = value; }

        std::optional<DidChangeTextDocumentParams> get_did_change_text_document_params() const { return did_change_text_document_params; }
        void set_did_change_text_document_params(std::optional<DidChangeTextDocumentParams> value) { this->did_change_text_document_params = value; }

        std::optional<DidChangeWatchedFilesClientCapabilities> get_did_change_watched_files_client_capabilities() const { return did_change_watched_files_client_capabilities; }
        void set_did_change_watched_files_client_capabilities(std::optional<DidChangeWatchedFilesClientCapabilities> value) { this->did_change_watched_files_client_capabilities = value; }

        std::optional<DidChangeWatchedFilesParams> get_did_change_watched_files_params() const { return did_change_watched_files_params; }
        void set_did_change_watched_files_params(std::optional<DidChangeWatchedFilesParams> value) { this->did_change_watched_files_params = value; }

        std::optional<DidChangeWatchedFilesRegistrationOptions> get_did_change_watched_files_registration_options() const { return did_change_watched_files_registration_options; }
        void set_did_change_watched_files_registration_options(std::optional<DidChangeWatchedFilesRegistrationOptions> value) { this->did_change_watched_files_registration_options = value; }

        std::optional<DidChangeWorkspaceFoldersParams> get_did_change_workspace_folders_params() const { return did_change_workspace_folders_params; }
        void set_did_change_workspace_folders_params(std::optional<DidChangeWorkspaceFoldersParams> value) { this->did_change_workspace_folders_params = value; }

        std::optional<DidCloseNotebookDocumentParams> get_did_close_notebook_document_params() const { return did_close_notebook_document_params; }
        void set_did_close_notebook_document_params(std::optional<DidCloseNotebookDocumentParams> value) { this->did_close_notebook_document_params = value; }

        std::optional<DidCloseTextDocumentParams> get_did_close_text_document_params() const { return did_close_text_document_params; }
        void set_did_close_text_document_params(std::optional<DidCloseTextDocumentParams> value) { this->did_close_text_document_params = value; }

        std::optional<DidOpenNotebookDocumentParams> get_did_open_notebook_document_params() const { return did_open_notebook_document_params; }
        void set_did_open_notebook_document_params(std::optional<DidOpenNotebookDocumentParams> value) { this->did_open_notebook_document_params = value; }

        std::optional<DidOpenTextDocumentParams> get_did_open_text_document_params() const { return did_open_text_document_params; }
        void set_did_open_text_document_params(std::optional<DidOpenTextDocumentParams> value) { this->did_open_text_document_params = value; }

        std::optional<DidSaveNotebookDocumentParams> get_did_save_notebook_document_params() const { return did_save_notebook_document_params; }
        void set_did_save_notebook_document_params(std::optional<DidSaveNotebookDocumentParams> value) { this->did_save_notebook_document_params = value; }

        std::optional<DidSaveTextDocumentParams> get_did_save_text_document_params() const { return did_save_text_document_params; }
        void set_did_save_text_document_params(std::optional<DidSaveTextDocumentParams> value) { this->did_save_text_document_params = value; }

        std::optional<DocumentColorClientCapabilities> get_document_color_client_capabilities() const { return document_color_client_capabilities; }
        void set_document_color_client_capabilities(std::optional<DocumentColorClientCapabilities> value) { this->document_color_client_capabilities = value; }

        std::optional<DocumentColorOptionsClass> get_document_color_options() const { return document_color_options; }
        void set_document_color_options(std::optional<DocumentColorOptionsClass> value) { this->document_color_options = value; }

        std::optional<DocumentColorParams> get_document_color_params() const { return document_color_params; }
        void set_document_color_params(std::optional<DocumentColorParams> value) { this->document_color_params = value; }

        std::optional<DocumentColorRegistrationOptions> get_document_color_registration_options() const { return document_color_registration_options; }
        void set_document_color_registration_options(std::optional<DocumentColorRegistrationOptions> value) { this->document_color_registration_options = value; }

        std::optional<DocumentDiagnosticParams> get_document_diagnostic_params() const { return document_diagnostic_params; }
        void set_document_diagnostic_params(std::optional<DocumentDiagnosticParams> value) { this->document_diagnostic_params = value; }

        std::optional<DocumentDiagnosticReport> get_document_diagnostic_report() const { return document_diagnostic_report; }
        void set_document_diagnostic_report(std::optional<DocumentDiagnosticReport> value) { this->document_diagnostic_report = value; }

        std::optional<DocumentDiagnosticReportKind> get_document_diagnostic_report_kind() const { return document_diagnostic_report_kind; }
        void set_document_diagnostic_report_kind(std::optional<DocumentDiagnosticReportKind> value) { this->document_diagnostic_report_kind = value; }

        std::optional<DocumentDiagnosticReportPartialResult> get_document_diagnostic_report_partial_result() const { return document_diagnostic_report_partial_result; }
        void set_document_diagnostic_report_partial_result(std::optional<DocumentDiagnosticReportPartialResult> value) { this->document_diagnostic_report_partial_result = value; }

        std::optional<DocumentFilter> get_document_filter() const { return document_filter; }
        void set_document_filter(std::optional<DocumentFilter> value) { this->document_filter = value; }

        std::optional<DocumentFormattingClientCapabilities> get_document_formatting_client_capabilities() const { return document_formatting_client_capabilities; }
        void set_document_formatting_client_capabilities(std::optional<DocumentFormattingClientCapabilities> value) { this->document_formatting_client_capabilities = value; }

        std::optional<DocumentFormattingOptions> get_document_formatting_options() const { return document_formatting_options; }
        void set_document_formatting_options(std::optional<DocumentFormattingOptions> value) { this->document_formatting_options = value; }

        std::optional<DocumentFormattingParams> get_document_formatting_params() const { return document_formatting_params; }
        void set_document_formatting_params(std::optional<DocumentFormattingParams> value) { this->document_formatting_params = value; }

        std::optional<DocumentFormattingRegistrationOptions> get_document_formatting_registration_options() const { return document_formatting_registration_options; }
        void set_document_formatting_registration_options(std::optional<DocumentFormattingRegistrationOptions> value) { this->document_formatting_registration_options = value; }

        std::optional<DocumentHighlight> get_document_highlight() const { return document_highlight; }
        void set_document_highlight(std::optional<DocumentHighlight> value) { this->document_highlight = value; }

        std::optional<DocumentHighlightClientCapabilities> get_document_highlight_client_capabilities() const { return document_highlight_client_capabilities; }
        void set_document_highlight_client_capabilities(std::optional<DocumentHighlightClientCapabilities> value) { this->document_highlight_client_capabilities = value; }

        std::optional<double> get_document_highlight_kind() const { return document_highlight_kind; }
        void set_document_highlight_kind(std::optional<double> value) { this->document_highlight_kind = value; }

        std::optional<DocumentHighlightOptions> get_document_highlight_options() const { return document_highlight_options; }
        void set_document_highlight_options(std::optional<DocumentHighlightOptions> value) { this->document_highlight_options = value; }

        std::optional<DocumentHighlightParams> get_document_highlight_params() const { return document_highlight_params; }
        void set_document_highlight_params(std::optional<DocumentHighlightParams> value) { this->document_highlight_params = value; }

        std::optional<DocumentHighlightRegistrationOptions> get_document_highlight_registration_options() const { return document_highlight_registration_options; }
        void set_document_highlight_registration_options(std::optional<DocumentHighlightRegistrationOptions> value) { this->document_highlight_registration_options = value; }

        std::optional<DocumentLink> get_document_link() const { return document_link; }
        void set_document_link(std::optional<DocumentLink> value) { this->document_link = value; }

        std::optional<DocumentLinkClientCapabilities> get_document_link_client_capabilities() const { return document_link_client_capabilities; }
        void set_document_link_client_capabilities(std::optional<DocumentLinkClientCapabilities> value) { this->document_link_client_capabilities = value; }

        std::optional<DocumentLinkOptions> get_document_link_options() const { return document_link_options; }
        void set_document_link_options(std::optional<DocumentLinkOptions> value) { this->document_link_options = value; }

        std::optional<DocumentLinkParams> get_document_link_params() const { return document_link_params; }
        void set_document_link_params(std::optional<DocumentLinkParams> value) { this->document_link_params = value; }

        std::optional<DocumentLinkRegistrationOptions> get_document_link_registration_options() const { return document_link_registration_options; }
        void set_document_link_registration_options(std::optional<DocumentLinkRegistrationOptions> value) { this->document_link_registration_options = value; }

        std::optional<DocumentOnTypeFormattingClientCapabilities> get_document_on_type_formatting_client_capabilities() const { return document_on_type_formatting_client_capabilities; }
        void set_document_on_type_formatting_client_capabilities(std::optional<DocumentOnTypeFormattingClientCapabilities> value) { this->document_on_type_formatting_client_capabilities = value; }

        std::optional<DocumentOnTypeFormattingOptions> get_document_on_type_formatting_options() const { return document_on_type_formatting_options; }
        void set_document_on_type_formatting_options(std::optional<DocumentOnTypeFormattingOptions> value) { this->document_on_type_formatting_options = value; }

        std::optional<DocumentOnTypeFormattingParams> get_document_on_type_formatting_params() const { return document_on_type_formatting_params; }
        void set_document_on_type_formatting_params(std::optional<DocumentOnTypeFormattingParams> value) { this->document_on_type_formatting_params = value; }

        std::optional<DocumentOnTypeFormattingRegistrationOptions> get_document_on_type_formatting_registration_options() const { return document_on_type_formatting_registration_options; }
        void set_document_on_type_formatting_registration_options(std::optional<DocumentOnTypeFormattingRegistrationOptions> value) { this->document_on_type_formatting_registration_options = value; }

        std::optional<DocumentRangeFormattingClientCapabilities> get_document_range_formatting_client_capabilities() const { return document_range_formatting_client_capabilities; }
        void set_document_range_formatting_client_capabilities(std::optional<DocumentRangeFormattingClientCapabilities> value) { this->document_range_formatting_client_capabilities = value; }

        std::optional<DocumentRangeFormattingOptions> get_document_range_formatting_options() const { return document_range_formatting_options; }
        void set_document_range_formatting_options(std::optional<DocumentRangeFormattingOptions> value) { this->document_range_formatting_options = value; }

        std::optional<DocumentRangeFormattingParams> get_document_range_formatting_params() const { return document_range_formatting_params; }
        void set_document_range_formatting_params(std::optional<DocumentRangeFormattingParams> value) { this->document_range_formatting_params = value; }

        std::optional<DocumentRangeFormattingRegistrationOptions> get_document_range_formatting_registration_options() const { return document_range_formatting_registration_options; }
        void set_document_range_formatting_registration_options(std::optional<DocumentRangeFormattingRegistrationOptions> value) { this->document_range_formatting_registration_options = value; }

        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        std::optional<DocumentSymbol> get_document_symbol() const { return document_symbol; }
        void set_document_symbol(std::optional<DocumentSymbol> value) { this->document_symbol = value; }

        std::optional<DocumentSymbolClientCapabilities> get_document_symbol_client_capabilities() const { return document_symbol_client_capabilities; }
        void set_document_symbol_client_capabilities(std::optional<DocumentSymbolClientCapabilities> value) { this->document_symbol_client_capabilities = value; }

        std::optional<DocumentSymbolOptions> get_document_symbol_options() const { return document_symbol_options; }
        void set_document_symbol_options(std::optional<DocumentSymbolOptions> value) { this->document_symbol_options = value; }

        std::optional<DocumentSymbolParams> get_document_symbol_params() const { return document_symbol_params; }
        void set_document_symbol_params(std::optional<DocumentSymbolParams> value) { this->document_symbol_params = value; }

        std::optional<DocumentSymbolRegistrationOptions> get_document_symbol_registration_options() const { return document_symbol_registration_options; }
        void set_document_symbol_registration_options(std::optional<DocumentSymbolRegistrationOptions> value) { this->document_symbol_registration_options = value; }

        std::optional<std::string> get_document_uri() const { return document_uri; }
        void set_document_uri(std::optional<std::string> value) { this->document_uri = value; }

        std::optional<double> get_error_codes() const { return error_codes; }
        void set_error_codes(std::optional<double> value) { this->error_codes = value; }

        std::optional<ExecuteCommandClientCapabilities> get_execute_command_client_capabilities() const { return execute_command_client_capabilities; }
        void set_execute_command_client_capabilities(std::optional<ExecuteCommandClientCapabilities> value) { this->execute_command_client_capabilities = value; }

        std::optional<ExecuteCommandOptions> get_execute_command_options() const { return execute_command_options; }
        void set_execute_command_options(std::optional<ExecuteCommandOptions> value) { this->execute_command_options = value; }

        std::optional<ExecuteCommandParams> get_execute_command_params() const { return execute_command_params; }
        void set_execute_command_params(std::optional<ExecuteCommandParams> value) { this->execute_command_params = value; }

        std::optional<ExecuteCommandRegistrationOptions> get_execute_command_registration_options() const { return execute_command_registration_options; }
        void set_execute_command_registration_options(std::optional<ExecuteCommandRegistrationOptions> value) { this->execute_command_registration_options = value; }

        std::optional<ExecutionSummary> get_execution_summary() const { return execution_summary; }
        void set_execution_summary(std::optional<ExecutionSummary> value) { this->execution_summary = value; }

        std::optional<FailureHandlingKind> get_failure_handling_kind() const { return failure_handling_kind; }
        void set_failure_handling_kind(std::optional<FailureHandlingKind> value) { this->failure_handling_kind = value; }

        std::optional<double> get_file_change_type() const { return file_change_type; }
        void set_file_change_type(std::optional<double> value) { this->file_change_type = value; }

        std::optional<FileCreate> get_file_create() const { return file_create; }
        void set_file_create(std::optional<FileCreate> value) { this->file_create = value; }

        std::optional<FileDelete> get_file_delete() const { return file_delete; }
        void set_file_delete(std::optional<FileDelete> value) { this->file_delete = value; }

        std::optional<FileEvent> get_file_event() const { return file_event; }
        void set_file_event(std::optional<FileEvent> value) { this->file_event = value; }

        std::optional<FileOperationFilter> get_file_operation_filter() const { return file_operation_filter; }
        void set_file_operation_filter(std::optional<FileOperationFilter> value) { this->file_operation_filter = value; }

        std::optional<FileOperationPattern> get_file_operation_pattern() const { return file_operation_pattern; }
        void set_file_operation_pattern(std::optional<FileOperationPattern> value) { this->file_operation_pattern = value; }

        std::optional<FileOperationPatternKind> get_file_operation_pattern_kind() const { return file_operation_pattern_kind; }
        void set_file_operation_pattern_kind(std::optional<FileOperationPatternKind> value) { this->file_operation_pattern_kind = value; }

        std::optional<FileOperationPatternOptions> get_file_operation_pattern_options() const { return file_operation_pattern_options; }
        void set_file_operation_pattern_options(std::optional<FileOperationPatternOptions> value) { this->file_operation_pattern_options = value; }

        std::optional<FileOperationRegistrationOptions> get_file_operation_registration_options() const { return file_operation_registration_options; }
        void set_file_operation_registration_options(std::optional<FileOperationRegistrationOptions> value) { this->file_operation_registration_options = value; }

        std::optional<FileRename> get_file_rename() const { return file_rename; }
        void set_file_rename(std::optional<FileRename> value) { this->file_rename = value; }

        std::optional<FileSystemWatcher> get_file_system_watcher() const { return file_system_watcher; }
        void set_file_system_watcher(std::optional<FileSystemWatcher> value) { this->file_system_watcher = value; }

        std::optional<FoldingRangeClass> get_folding_range() const { return folding_range; }
        void set_folding_range(std::optional<FoldingRangeClass> value) { this->folding_range = value; }

        std::optional<FoldingRangeClientCapabilities> get_folding_range_client_capabilities() const { return folding_range_client_capabilities; }
        void set_folding_range_client_capabilities(std::optional<FoldingRangeClientCapabilities> value) { this->folding_range_client_capabilities = value; }

        std::optional<std::string> get_folding_range_kind() const { return folding_range_kind; }
        void set_folding_range_kind(std::optional<std::string> value) { this->folding_range_kind = value; }

        std::optional<FoldingRangeOptionsClass> get_folding_range_options() const { return folding_range_options; }
        void set_folding_range_options(std::optional<FoldingRangeOptionsClass> value) { this->folding_range_options = value; }

        std::optional<FoldingRangeParams> get_folding_range_params() const { return folding_range_params; }
        void set_folding_range_params(std::optional<FoldingRangeParams> value) { this->folding_range_params = value; }

        std::optional<FoldingRangeRegistrationOptions> get_folding_range_registration_options() const { return folding_range_registration_options; }
        void set_folding_range_registration_options(std::optional<FoldingRangeRegistrationOptions> value) { this->folding_range_registration_options = value; }

        std::optional<FormattingOptions> get_formatting_options() const { return formatting_options; }
        void set_formatting_options(std::optional<FormattingOptions> value) { this->formatting_options = value; }

        std::optional<FullDocumentDiagnosticReport> get_full_document_diagnostic_report() const { return full_document_diagnostic_report; }
        void set_full_document_diagnostic_report(std::optional<FullDocumentDiagnosticReport> value) { this->full_document_diagnostic_report = value; }

        std::optional<GlobPattern> get_glob_pattern() const { return glob_pattern; }
        void set_glob_pattern(std::optional<GlobPattern> value) { this->glob_pattern = value; }

        std::optional<Hover> get_hover() const { return hover; }
        void set_hover(std::optional<Hover> value) { this->hover = value; }

        std::optional<HoverClientCapabilities> get_hover_client_capabilities() const { return hover_client_capabilities; }
        void set_hover_client_capabilities(std::optional<HoverClientCapabilities> value) { this->hover_client_capabilities = value; }

        std::optional<HoverOptions> get_hover_options() const { return hover_options; }
        void set_hover_options(std::optional<HoverOptions> value) { this->hover_options = value; }

        std::optional<HoverParams> get_hover_params() const { return hover_params; }
        void set_hover_params(std::optional<HoverParams> value) { this->hover_params = value; }

        std::optional<HoverRegistrationOptions> get_hover_registration_options() const { return hover_registration_options; }
        void set_hover_registration_options(std::optional<HoverRegistrationOptions> value) { this->hover_registration_options = value; }

        std::optional<ImplementationClientCapabilities> get_implementation_client_capabilities() const { return implementation_client_capabilities; }
        void set_implementation_client_capabilities(std::optional<ImplementationClientCapabilities> value) { this->implementation_client_capabilities = value; }

        std::optional<ImplementationOptions> get_implementation_options() const { return implementation_options; }
        void set_implementation_options(std::optional<ImplementationOptions> value) { this->implementation_options = value; }

        std::optional<ImplementationParams> get_implementation_params() const { return implementation_params; }
        void set_implementation_params(std::optional<ImplementationParams> value) { this->implementation_params = value; }

        std::optional<ImplementationRegistrationOptions> get_implementation_registration_options() const { return implementation_registration_options; }
        void set_implementation_registration_options(std::optional<ImplementationRegistrationOptions> value) { this->implementation_registration_options = value; }

        std::optional<InitializedParams> get_initialized_params() const { return initialized_params; }
        void set_initialized_params(std::optional<InitializedParams> value) { this->initialized_params = value; }

        std::optional<InitializeError> get_initialize_error() const { return initialize_error; }
        void set_initialize_error(std::optional<InitializeError> value) { this->initialize_error = value; }

        std::optional<double> get_initialize_error_codes() const { return initialize_error_codes; }
        void set_initialize_error_codes(std::optional<double> value) { this->initialize_error_codes = value; }

        std::optional<InitializeParams> get_initialize_params() const { return initialize_params; }
        void set_initialize_params(std::optional<InitializeParams> value) { this->initialize_params = value; }

        std::optional<InitializeResult> get_initialize_result() const { return initialize_result; }
        void set_initialize_result(std::optional<InitializeResult> value) { this->initialize_result = value; }

        std::optional<InlayHint> get_inlay_hint() const { return inlay_hint; }
        void set_inlay_hint(std::optional<InlayHint> value) { this->inlay_hint = value; }

        std::optional<InlayHintClientCapabilities> get_inlay_hint_client_capabilities() const { return inlay_hint_client_capabilities; }
        void set_inlay_hint_client_capabilities(std::optional<InlayHintClientCapabilities> value) { this->inlay_hint_client_capabilities = value; }

        std::optional<double> get_inlay_hint_kind() const { return inlay_hint_kind; }
        void set_inlay_hint_kind(std::optional<double> value) { this->inlay_hint_kind = value; }

        std::optional<InlayHintLabelPart> get_inlay_hint_label_part() const { return inlay_hint_label_part; }
        void set_inlay_hint_label_part(std::optional<InlayHintLabelPart> value) { this->inlay_hint_label_part = value; }

        std::optional<InlayHintOptionsClass> get_inlay_hint_options() const { return inlay_hint_options; }
        void set_inlay_hint_options(std::optional<InlayHintOptionsClass> value) { this->inlay_hint_options = value; }

        std::optional<InlayHintParams> get_inlay_hint_params() const { return inlay_hint_params; }
        void set_inlay_hint_params(std::optional<InlayHintParams> value) { this->inlay_hint_params = value; }

        std::optional<InlayHintRegistrationOptions> get_inlay_hint_registration_options() const { return inlay_hint_registration_options; }
        void set_inlay_hint_registration_options(std::optional<InlayHintRegistrationOptions> value) { this->inlay_hint_registration_options = value; }

        std::optional<InlayHintWorkspaceClientCapabilities> get_inlay_hint_workspace_client_capabilities() const { return inlay_hint_workspace_client_capabilities; }
        void set_inlay_hint_workspace_client_capabilities(std::optional<InlayHintWorkspaceClientCapabilities> value) { this->inlay_hint_workspace_client_capabilities = value; }

        std::optional<InlineValue> get_inline_value() const { return inline_value; }
        void set_inline_value(std::optional<InlineValue> value) { this->inline_value = value; }

        std::optional<InlineValueClientCapabilities> get_inline_value_client_capabilities() const { return inline_value_client_capabilities; }
        void set_inline_value_client_capabilities(std::optional<InlineValueClientCapabilities> value) { this->inline_value_client_capabilities = value; }

        std::optional<InlineValueContext> get_inline_value_context() const { return inline_value_context; }
        void set_inline_value_context(std::optional<InlineValueContext> value) { this->inline_value_context = value; }

        std::optional<InlineValueEvaluatableExpression> get_inline_value_evaluatable_expression() const { return inline_value_evaluatable_expression; }
        void set_inline_value_evaluatable_expression(std::optional<InlineValueEvaluatableExpression> value) { this->inline_value_evaluatable_expression = value; }

        std::optional<InlineValueOptionsClass> get_inline_value_options() const { return inline_value_options; }
        void set_inline_value_options(std::optional<InlineValueOptionsClass> value) { this->inline_value_options = value; }

        std::optional<InlineValueParams> get_inline_value_params() const { return inline_value_params; }
        void set_inline_value_params(std::optional<InlineValueParams> value) { this->inline_value_params = value; }

        std::optional<InlineValueRegistrationOptions> get_inline_value_registration_options() const { return inline_value_registration_options; }
        void set_inline_value_registration_options(std::optional<InlineValueRegistrationOptions> value) { this->inline_value_registration_options = value; }

        std::optional<InlineValueText> get_inline_value_text() const { return inline_value_text; }
        void set_inline_value_text(std::optional<InlineValueText> value) { this->inline_value_text = value; }

        std::optional<InlineValueVariableLookup> get_inline_value_variable_lookup() const { return inline_value_variable_lookup; }
        void set_inline_value_variable_lookup(std::optional<InlineValueVariableLookup> value) { this->inline_value_variable_lookup = value; }

        std::optional<InlineValueWorkspaceClientCapabilities> get_inline_value_workspace_client_capabilities() const { return inline_value_workspace_client_capabilities; }
        void set_inline_value_workspace_client_capabilities(std::optional<InlineValueWorkspaceClientCapabilities> value) { this->inline_value_workspace_client_capabilities = value; }

        std::optional<InsertReplaceEdit> get_insert_replace_edit() const { return insert_replace_edit; }
        void set_insert_replace_edit(std::optional<InsertReplaceEdit> value) { this->insert_replace_edit = value; }

        std::optional<double> get_insert_text_format() const { return insert_text_format; }
        void set_insert_text_format(std::optional<double> value) { this->insert_text_format = value; }

        std::optional<double> get_insert_text_mode() const { return insert_text_mode; }
        void set_insert_text_mode(std::optional<double> value) { this->insert_text_mode = value; }

        std::optional<int64_t> get_integer() const { return integer; }
        void set_integer(std::optional<int64_t> value) { this->integer = value; }

        std::optional<LinkedEditingRangeClientCapabilities> get_linked_editing_range_client_capabilities() const { return linked_editing_range_client_capabilities; }
        void set_linked_editing_range_client_capabilities(std::optional<LinkedEditingRangeClientCapabilities> value) { this->linked_editing_range_client_capabilities = value; }

        std::optional<LinkedEditingRangeOptionsClass> get_linked_editing_range_options() const { return linked_editing_range_options; }
        void set_linked_editing_range_options(std::optional<LinkedEditingRangeOptionsClass> value) { this->linked_editing_range_options = value; }

        std::optional<LinkedEditingRangeParams> get_linked_editing_range_params() const { return linked_editing_range_params; }
        void set_linked_editing_range_params(std::optional<LinkedEditingRangeParams> value) { this->linked_editing_range_params = value; }

        std::optional<LinkedEditingRangeRegistrationOptions> get_linked_editing_range_registration_options() const { return linked_editing_range_registration_options; }
        void set_linked_editing_range_registration_options(std::optional<LinkedEditingRangeRegistrationOptions> value) { this->linked_editing_range_registration_options = value; }

        std::optional<LinkedEditingRanges> get_linked_editing_ranges() const { return linked_editing_ranges; }
        void set_linked_editing_ranges(std::optional<LinkedEditingRanges> value) { this->linked_editing_ranges = value; }

        std::optional<LocationClass> get_location() const { return location; }
        void set_location(std::optional<LocationClass> value) { this->location = value; }

        std::optional<LocationLink> get_location_link() const { return location_link; }
        void set_location_link(std::optional<LocationLink> value) { this->location_link = value; }

        std::optional<LogMessageParams> get_log_message_params() const { return log_message_params; }
        void set_log_message_params(std::optional<LogMessageParams> value) { this->log_message_params = value; }

        std::optional<LogTraceParams> get_log_trace_params() const { return log_trace_params; }
        void set_log_trace_params(std::optional<LogTraceParams> value) { this->log_trace_params = value; }

        LspAny get_lsp_any() const { return lsp_any; }
        void set_lsp_any(LspAny value) { this->lsp_any = value; }

        std::optional<std::vector<LspAny>> get_lsp_array() const { return lsp_array; }
        void set_lsp_array(std::optional<std::vector<LspAny>> value) { this->lsp_array = value; }

        std::optional<std::map<std::string, LspAny>> get_lsp_object() const { return lsp_object; }
        void set_lsp_object(std::optional<std::map<std::string, LspAny>> value) { this->lsp_object = value; }

        std::optional<MarkdownClientCapabilities> get_markdown_client_capabilities() const { return markdown_client_capabilities; }
        void set_markdown_client_capabilities(std::optional<MarkdownClientCapabilities> value) { this->markdown_client_capabilities = value; }

        std::optional<MarkedString> get_marked_string() const { return marked_string; }
        void set_marked_string(std::optional<MarkedString> value) { this->marked_string = value; }

        std::optional<DocumentationMarkupContent> get_markup_content() const { return markup_content; }
        void set_markup_content(std::optional<DocumentationMarkupContent> value) { this->markup_content = value; }

        std::optional<MarkupKind> get_markup_kind() const { return markup_kind; }
        void set_markup_kind(std::optional<MarkupKind> value) { this->markup_kind = value; }

        std::optional<Message> get_message() const { return message; }
        void set_message(std::optional<Message> value) { this->message = value; }

        std::optional<MessageActionItemElement> get_message_action_item() const { return message_action_item; }
        void set_message_action_item(std::optional<MessageActionItemElement> value) { this->message_action_item = value; }

        std::optional<double> get_message_type() const { return message_type; }
        void set_message_type(std::optional<double> value) { this->message_type = value; }

        std::optional<Moniker> get_moniker() const { return moniker; }
        void set_moniker(std::optional<Moniker> value) { this->moniker = value; }

        std::optional<MonikerClientCapabilities> get_moniker_client_capabilities() const { return moniker_client_capabilities; }
        void set_moniker_client_capabilities(std::optional<MonikerClientCapabilities> value) { this->moniker_client_capabilities = value; }

        std::optional<MonikerKind> get_moniker_kind() const { return moniker_kind; }
        void set_moniker_kind(std::optional<MonikerKind> value) { this->moniker_kind = value; }

        std::optional<MonikerOptionsClass> get_moniker_options() const { return moniker_options; }
        void set_moniker_options(std::optional<MonikerOptionsClass> value) { this->moniker_options = value; }

        std::optional<MonikerParams> get_moniker_params() const { return moniker_params; }
        void set_moniker_params(std::optional<MonikerParams> value) { this->moniker_params = value; }

        std::optional<MonikerRegistrationOptions> get_moniker_registration_options() const { return moniker_registration_options; }
        void set_moniker_registration_options(std::optional<MonikerRegistrationOptions> value) { this->moniker_registration_options = value; }

        std::optional<NotebookCell> get_notebook_cell() const { return notebook_cell; }
        void set_notebook_cell(std::optional<NotebookCell> value) { this->notebook_cell = value; }

        std::optional<NotebookCellArrayChange> get_notebook_cell_array_change() const { return notebook_cell_array_change; }
        void set_notebook_cell_array_change(std::optional<NotebookCellArrayChange> value) { this->notebook_cell_array_change = value; }

        std::optional<double> get_notebook_cell_kind() const { return notebook_cell_kind; }
        void set_notebook_cell_kind(std::optional<double> value) { this->notebook_cell_kind = value; }

        std::optional<NotebookCellTextDocumentFilter> get_notebook_cell_text_document_filter() const { return notebook_cell_text_document_filter; }
        void set_notebook_cell_text_document_filter(std::optional<NotebookCellTextDocumentFilter> value) { this->notebook_cell_text_document_filter = value; }

        std::optional<NotebookDocument> get_notebook_document() const { return notebook_document; }
        void set_notebook_document(std::optional<NotebookDocument> value) { this->notebook_document = value; }

        std::optional<NotebookDocumentChangeEvent> get_notebook_document_change_event() const { return notebook_document_change_event; }
        void set_notebook_document_change_event(std::optional<NotebookDocumentChangeEvent> value) { this->notebook_document_change_event = value; }

        std::optional<NotebookDocumentClientCapabilities> get_notebook_document_client_capabilities() const { return notebook_document_client_capabilities; }
        void set_notebook_document_client_capabilities(std::optional<NotebookDocumentClientCapabilities> value) { this->notebook_document_client_capabilities = value; }

        std::optional<NotebookDocumentFilter> get_notebook_document_filter() const { return notebook_document_filter; }
        void set_notebook_document_filter(std::optional<NotebookDocumentFilter> value) { this->notebook_document_filter = value; }

        std::optional<NotebookDocumentIdentifier> get_notebook_document_identifier() const { return notebook_document_identifier; }
        void set_notebook_document_identifier(std::optional<NotebookDocumentIdentifier> value) { this->notebook_document_identifier = value; }

        std::optional<NotebookDocumentSyncClientCapabilities> get_notebook_document_sync_client_capabilities() const { return notebook_document_sync_client_capabilities; }
        void set_notebook_document_sync_client_capabilities(std::optional<NotebookDocumentSyncClientCapabilities> value) { this->notebook_document_sync_client_capabilities = value; }

        std::optional<NotebookDocumentSyncOptionsClass> get_notebook_document_sync_options() const { return notebook_document_sync_options; }
        void set_notebook_document_sync_options(std::optional<NotebookDocumentSyncOptionsClass> value) { this->notebook_document_sync_options = value; }

        std::optional<NotebookDocumentSyncRegistrationOptions> get_notebook_document_sync_registration_options() const { return notebook_document_sync_registration_options; }
        void set_notebook_document_sync_registration_options(std::optional<NotebookDocumentSyncRegistrationOptions> value) { this->notebook_document_sync_registration_options = value; }

        std::optional<NotificationMessage> get_notification_message() const { return notification_message; }
        void set_notification_message(std::optional<NotificationMessage> value) { this->notification_message = value; }

        std::optional<OptionalVersionedTextDocumentIdentifier> get_optional_versioned_text_document_identifier() const { return optional_versioned_text_document_identifier; }
        void set_optional_versioned_text_document_identifier(std::optional<OptionalVersionedTextDocumentIdentifier> value) { this->optional_versioned_text_document_identifier = value; }

        std::optional<ParameterInformationElement> get_parameter_information() const { return parameter_information; }
        void set_parameter_information(std::optional<ParameterInformationElement> value) { this->parameter_information = value; }

        std::optional<PartialResultParams> get_partial_result_params() const { return partial_result_params; }
        void set_partial_result_params(std::optional<PartialResultParams> value) { this->partial_result_params = value; }

        std::optional<std::string> get_pattern() const { return pattern; }
        void set_pattern(std::optional<std::string> value) { this->pattern = value; }

        std::optional<Position> get_position() const { return position; }
        void set_position(std::optional<Position> value) { this->position = value; }

        std::optional<std::string> get_position_encoding_kind() const { return position_encoding_kind; }
        void set_position_encoding_kind(std::optional<std::string> value) { this->position_encoding_kind = value; }

        std::optional<PrepareRenameParams> get_prepare_rename_params() const { return prepare_rename_params; }
        void set_prepare_rename_params(std::optional<PrepareRenameParams> value) { this->prepare_rename_params = value; }

        std::optional<double> get_prepare_support_default_behavior() const { return prepare_support_default_behavior; }
        void set_prepare_support_default_behavior(std::optional<double> value) { this->prepare_support_default_behavior = value; }

        std::optional<PreviousResultId> get_previous_result_id() const { return previous_result_id; }
        void set_previous_result_id(std::optional<PreviousResultId> value) { this->previous_result_id = value; }

        std::optional<ProgressToken> get_progress_token() const { return progress_token; }
        void set_progress_token(std::optional<ProgressToken> value) { this->progress_token = value; }

        std::optional<PublishDiagnosticsClientCapabilities> get_publish_diagnostics_client_capabilities() const { return publish_diagnostics_client_capabilities; }
        void set_publish_diagnostics_client_capabilities(std::optional<PublishDiagnosticsClientCapabilities> value) { this->publish_diagnostics_client_capabilities = value; }

        std::optional<PublishDiagnosticsParams> get_publish_diagnostics_params() const { return publish_diagnostics_params; }
        void set_publish_diagnostics_params(std::optional<PublishDiagnosticsParams> value) { this->publish_diagnostics_params = value; }

        std::optional<PurpleRange> get_range() const { return range; }
        void set_range(std::optional<PurpleRange> value) { this->range = value; }

        std::optional<ReferenceClientCapabilities> get_reference_client_capabilities() const { return reference_client_capabilities; }
        void set_reference_client_capabilities(std::optional<ReferenceClientCapabilities> value) { this->reference_client_capabilities = value; }

        std::optional<ReferenceContext> get_reference_context() const { return reference_context; }
        void set_reference_context(std::optional<ReferenceContext> value) { this->reference_context = value; }

        std::optional<ReferenceOptions> get_reference_options() const { return reference_options; }
        void set_reference_options(std::optional<ReferenceOptions> value) { this->reference_options = value; }

        std::optional<ReferenceParams> get_reference_params() const { return reference_params; }
        void set_reference_params(std::optional<ReferenceParams> value) { this->reference_params = value; }

        std::optional<ReferenceRegistrationOptions> get_reference_registration_options() const { return reference_registration_options; }
        void set_reference_registration_options(std::optional<ReferenceRegistrationOptions> value) { this->reference_registration_options = value; }

        std::optional<Registration> get_registration() const { return registration; }
        void set_registration(std::optional<Registration> value) { this->registration = value; }

        std::optional<RegistrationParams> get_registration_params() const { return registration_params; }
        void set_registration_params(std::optional<RegistrationParams> value) { this->registration_params = value; }

        std::optional<RegularExpressionsClientCapabilities> get_regular_expressions_client_capabilities() const { return regular_expressions_client_capabilities; }
        void set_regular_expressions_client_capabilities(std::optional<RegularExpressionsClientCapabilities> value) { this->regular_expressions_client_capabilities = value; }

        std::optional<RelatedFullDocumentDiagnosticReport> get_related_full_document_diagnostic_report() const { return related_full_document_diagnostic_report; }
        void set_related_full_document_diagnostic_report(std::optional<RelatedFullDocumentDiagnosticReport> value) { this->related_full_document_diagnostic_report = value; }

        std::optional<RelatedUnchangedDocumentDiagnosticReport> get_related_unchanged_document_diagnostic_report() const { return related_unchanged_document_diagnostic_report; }
        void set_related_unchanged_document_diagnostic_report(std::optional<RelatedUnchangedDocumentDiagnosticReport> value) { this->related_unchanged_document_diagnostic_report = value; }

        std::optional<RelativePattern> get_relative_pattern() const { return relative_pattern; }
        void set_relative_pattern(std::optional<RelativePattern> value) { this->relative_pattern = value; }

        std::optional<RenameClientCapabilities> get_rename_client_capabilities() const { return rename_client_capabilities; }
        void set_rename_client_capabilities(std::optional<RenameClientCapabilities> value) { this->rename_client_capabilities = value; }

        std::optional<RenameFile> get_rename_file() const { return rename_file; }
        void set_rename_file(std::optional<RenameFile> value) { this->rename_file = value; }

        std::optional<RenameFileOptions> get_rename_file_options() const { return rename_file_options; }
        void set_rename_file_options(std::optional<RenameFileOptions> value) { this->rename_file_options = value; }

        std::optional<RenameFilesParams> get_rename_files_params() const { return rename_files_params; }
        void set_rename_files_params(std::optional<RenameFilesParams> value) { this->rename_files_params = value; }

        std::optional<RenameOptions> get_rename_options() const { return rename_options; }
        void set_rename_options(std::optional<RenameOptions> value) { this->rename_options = value; }

        std::optional<RenameParams> get_rename_params() const { return rename_params; }
        void set_rename_params(std::optional<RenameParams> value) { this->rename_params = value; }

        std::optional<RenameRegistrationOptions> get_rename_registration_options() const { return rename_registration_options; }
        void set_rename_registration_options(std::optional<RenameRegistrationOptions> value) { this->rename_registration_options = value; }

        std::optional<RequestMessage> get_request_message() const { return request_message; }
        void set_request_message(std::optional<RequestMessage> value) { this->request_message = value; }

        std::optional<ResourceOperationKind> get_resource_operation_kind() const { return resource_operation_kind; }
        void set_resource_operation_kind(std::optional<ResourceOperationKind> value) { this->resource_operation_kind = value; }

        std::optional<ResponseError> get_response_error() const { return response_error; }
        void set_response_error(std::optional<ResponseError> value) { this->response_error = value; }

        std::optional<ResponseMessage> get_response_message() const { return response_message; }
        void set_response_message(std::optional<ResponseMessage> value) { this->response_message = value; }

        std::optional<SaveOptions> get_save_options() const { return save_options; }
        void set_save_options(std::optional<SaveOptions> value) { this->save_options = value; }

        std::shared_ptr<SelectionRange> get_selection_range() const { return selection_range; }
        void set_selection_range(std::shared_ptr<SelectionRange> value) { this->selection_range = value; }

        std::optional<SelectionRangeClientCapabilities> get_selection_range_client_capabilities() const { return selection_range_client_capabilities; }
        void set_selection_range_client_capabilities(std::optional<SelectionRangeClientCapabilities> value) { this->selection_range_client_capabilities = value; }

        std::optional<SelectionRangeOptionsClass> get_selection_range_options() const { return selection_range_options; }
        void set_selection_range_options(std::optional<SelectionRangeOptionsClass> value) { this->selection_range_options = value; }

        std::optional<SelectionRangeParams> get_selection_range_params() const { return selection_range_params; }
        void set_selection_range_params(std::optional<SelectionRangeParams> value) { this->selection_range_params = value; }

        std::optional<SelectionRangeRegistrationOptions> get_selection_range_registration_options() const { return selection_range_registration_options; }
        void set_selection_range_registration_options(std::optional<SelectionRangeRegistrationOptions> value) { this->selection_range_registration_options = value; }

        std::optional<SemanticTokenModifiers> get_semantic_token_modifiers() const { return semantic_token_modifiers; }
        void set_semantic_token_modifiers(std::optional<SemanticTokenModifiers> value) { this->semantic_token_modifiers = value; }

        std::optional<SemanticTokens> get_semantic_tokens() const { return semantic_tokens; }
        void set_semantic_tokens(std::optional<SemanticTokens> value) { this->semantic_tokens = value; }

        std::optional<SemanticTokensClientCapabilities> get_semantic_tokens_client_capabilities() const { return semantic_tokens_client_capabilities; }
        void set_semantic_tokens_client_capabilities(std::optional<SemanticTokensClientCapabilities> value) { this->semantic_tokens_client_capabilities = value; }

        std::optional<SemanticTokensDelta> get_semantic_tokens_delta() const { return semantic_tokens_delta; }
        void set_semantic_tokens_delta(std::optional<SemanticTokensDelta> value) { this->semantic_tokens_delta = value; }

        std::optional<SemanticTokensDeltaParams> get_semantic_tokens_delta_params() const { return semantic_tokens_delta_params; }
        void set_semantic_tokens_delta_params(std::optional<SemanticTokensDeltaParams> value) { this->semantic_tokens_delta_params = value; }

        std::optional<SemanticTokensDeltaPartialResult> get_semantic_tokens_delta_partial_result() const { return semantic_tokens_delta_partial_result; }
        void set_semantic_tokens_delta_partial_result(std::optional<SemanticTokensDeltaPartialResult> value) { this->semantic_tokens_delta_partial_result = value; }

        std::optional<SemanticTokensEdit> get_semantic_tokens_edit() const { return semantic_tokens_edit; }
        void set_semantic_tokens_edit(std::optional<SemanticTokensEdit> value) { this->semantic_tokens_edit = value; }

        std::optional<SemanticTokensLegend> get_semantic_tokens_legend() const { return semantic_tokens_legend; }
        void set_semantic_tokens_legend(std::optional<SemanticTokensLegend> value) { this->semantic_tokens_legend = value; }

        std::optional<SemanticTokensOptionsClass> get_semantic_tokens_options() const { return semantic_tokens_options; }
        void set_semantic_tokens_options(std::optional<SemanticTokensOptionsClass> value) { this->semantic_tokens_options = value; }

        std::optional<SemanticTokensParams> get_semantic_tokens_params() const { return semantic_tokens_params; }
        void set_semantic_tokens_params(std::optional<SemanticTokensParams> value) { this->semantic_tokens_params = value; }

        std::optional<SemanticTokensPartialResult> get_semantic_tokens_partial_result() const { return semantic_tokens_partial_result; }
        void set_semantic_tokens_partial_result(std::optional<SemanticTokensPartialResult> value) { this->semantic_tokens_partial_result = value; }

        std::optional<SemanticTokensRangeParams> get_semantic_tokens_range_params() const { return semantic_tokens_range_params; }
        void set_semantic_tokens_range_params(std::optional<SemanticTokensRangeParams> value) { this->semantic_tokens_range_params = value; }

        std::optional<SemanticTokensRegistrationOptions> get_semantic_tokens_registration_options() const { return semantic_tokens_registration_options; }
        void set_semantic_tokens_registration_options(std::optional<SemanticTokensRegistrationOptions> value) { this->semantic_tokens_registration_options = value; }

        std::optional<SemanticTokensWorkspaceClientCapabilities> get_semantic_tokens_workspace_client_capabilities() const { return semantic_tokens_workspace_client_capabilities; }
        void set_semantic_tokens_workspace_client_capabilities(std::optional<SemanticTokensWorkspaceClientCapabilities> value) { this->semantic_tokens_workspace_client_capabilities = value; }

        std::optional<SemanticTokenTypes> get_semantic_token_types() const { return semantic_token_types; }
        void set_semantic_token_types(std::optional<SemanticTokenTypes> value) { this->semantic_token_types = value; }

        std::optional<ServerCapabilities> get_server_capabilities() const { return server_capabilities; }
        void set_server_capabilities(std::optional<ServerCapabilities> value) { this->server_capabilities = value; }

        std::optional<SetTraceParams> get_set_trace_params() const { return set_trace_params; }
        void set_set_trace_params(std::optional<SetTraceParams> value) { this->set_trace_params = value; }

        std::optional<ShowDocumentClientCapabilities> get_show_document_client_capabilities() const { return show_document_client_capabilities; }
        void set_show_document_client_capabilities(std::optional<ShowDocumentClientCapabilities> value) { this->show_document_client_capabilities = value; }

        std::optional<ShowDocumentParams> get_show_document_params() const { return show_document_params; }
        void set_show_document_params(std::optional<ShowDocumentParams> value) { this->show_document_params = value; }

        std::optional<ShowDocumentResult> get_show_document_result() const { return show_document_result; }
        void set_show_document_result(std::optional<ShowDocumentResult> value) { this->show_document_result = value; }

        std::optional<ShowMessageParams> get_show_message_params() const { return show_message_params; }
        void set_show_message_params(std::optional<ShowMessageParams> value) { this->show_message_params = value; }

        std::optional<ShowMessageRequestClientCapabilities> get_show_message_request_client_capabilities() const { return show_message_request_client_capabilities; }
        void set_show_message_request_client_capabilities(std::optional<ShowMessageRequestClientCapabilities> value) { this->show_message_request_client_capabilities = value; }

        std::optional<ShowMessageRequestParams> get_show_message_request_params() const { return show_message_request_params; }
        void set_show_message_request_params(std::optional<ShowMessageRequestParams> value) { this->show_message_request_params = value; }

        std::optional<SignatureHelp> get_signature_help() const { return signature_help; }
        void set_signature_help(std::optional<SignatureHelp> value) { this->signature_help = value; }

        std::optional<SignatureHelpClientCapabilities> get_signature_help_client_capabilities() const { return signature_help_client_capabilities; }
        void set_signature_help_client_capabilities(std::optional<SignatureHelpClientCapabilities> value) { this->signature_help_client_capabilities = value; }

        std::optional<SignatureHelpContext> get_signature_help_context() const { return signature_help_context; }
        void set_signature_help_context(std::optional<SignatureHelpContext> value) { this->signature_help_context = value; }

        std::optional<SignatureHelpOptions> get_signature_help_options() const { return signature_help_options; }
        void set_signature_help_options(std::optional<SignatureHelpOptions> value) { this->signature_help_options = value; }

        std::optional<SignatureHelpParams> get_signature_help_params() const { return signature_help_params; }
        void set_signature_help_params(std::optional<SignatureHelpParams> value) { this->signature_help_params = value; }

        std::optional<SignatureHelpRegistrationOptions> get_signature_help_registration_options() const { return signature_help_registration_options; }
        void set_signature_help_registration_options(std::optional<SignatureHelpRegistrationOptions> value) { this->signature_help_registration_options = value; }

        std::optional<double> get_signature_help_trigger_kind() const { return signature_help_trigger_kind; }
        void set_signature_help_trigger_kind(std::optional<double> value) { this->signature_help_trigger_kind = value; }

        std::optional<SignatureInformationElement> get_signature_information() const { return signature_information; }
        void set_signature_information(std::optional<SignatureInformationElement> value) { this->signature_information = value; }

        std::optional<StaticRegistrationOptions> get_static_registration_options() const { return static_registration_options; }
        void set_static_registration_options(std::optional<StaticRegistrationOptions> value) { this->static_registration_options = value; }

        std::optional<SymbolInformation> get_symbol_information() const { return symbol_information; }
        void set_symbol_information(std::optional<SymbolInformation> value) { this->symbol_information = value; }

        std::optional<double> get_symbol_kind() const { return symbol_kind; }
        void set_symbol_kind(std::optional<double> value) { this->symbol_kind = value; }

        std::optional<double> get_symbol_tag() const { return symbol_tag; }
        void set_symbol_tag(std::optional<double> value) { this->symbol_tag = value; }

        std::optional<TextDocumentChangeRegistrationOptions> get_text_document_change_registration_options() const { return text_document_change_registration_options; }
        void set_text_document_change_registration_options(std::optional<TextDocumentChangeRegistrationOptions> value) { this->text_document_change_registration_options = value; }

        std::optional<TextDocumentClientCapabilities> get_text_document_client_capabilities() const { return text_document_client_capabilities; }
        void set_text_document_client_capabilities(std::optional<TextDocumentClientCapabilities> value) { this->text_document_client_capabilities = value; }

        std::optional<TextDocumentContentChangeEvent> get_text_document_content_change_event() const { return text_document_content_change_event; }
        void set_text_document_content_change_event(std::optional<TextDocumentContentChangeEvent> value) { this->text_document_content_change_event = value; }

        std::optional<TextDocumentEditClass> get_text_document_edit() const { return text_document_edit; }
        void set_text_document_edit(std::optional<TextDocumentEditClass> value) { this->text_document_edit = value; }

        std::optional<TextDocumentIdentifier> get_text_document_identifier() const { return text_document_identifier; }
        void set_text_document_identifier(std::optional<TextDocumentIdentifier> value) { this->text_document_identifier = value; }

        std::optional<TextDocumentItem> get_text_document_item() const { return text_document_item; }
        void set_text_document_item(std::optional<TextDocumentItem> value) { this->text_document_item = value; }

        std::optional<TextDocumentPositionParams> get_text_document_position_params() const { return text_document_position_params; }
        void set_text_document_position_params(std::optional<TextDocumentPositionParams> value) { this->text_document_position_params = value; }

        std::optional<TextDocumentRegistrationOptions> get_text_document_registration_options() const { return text_document_registration_options; }
        void set_text_document_registration_options(std::optional<TextDocumentRegistrationOptions> value) { this->text_document_registration_options = value; }

        std::optional<double> get_text_document_save_reason() const { return text_document_save_reason; }
        void set_text_document_save_reason(std::optional<double> value) { this->text_document_save_reason = value; }

        std::optional<TextDocumentSaveRegistrationOptions> get_text_document_save_registration_options() const { return text_document_save_registration_options; }
        void set_text_document_save_registration_options(std::optional<TextDocumentSaveRegistrationOptions> value) { this->text_document_save_registration_options = value; }

        std::optional<TextDocumentSyncClientCapabilities> get_text_document_sync_client_capabilities() const { return text_document_sync_client_capabilities; }
        void set_text_document_sync_client_capabilities(std::optional<TextDocumentSyncClientCapabilities> value) { this->text_document_sync_client_capabilities = value; }

        std::optional<double> get_text_document_sync_kind() const { return text_document_sync_kind; }
        void set_text_document_sync_kind(std::optional<double> value) { this->text_document_sync_kind = value; }

        std::optional<TextDocumentSyncOptions> get_text_document_sync_options() const { return text_document_sync_options; }
        void set_text_document_sync_options(std::optional<TextDocumentSyncOptions> value) { this->text_document_sync_options = value; }

        std::optional<TextEdit> get_text_edit() const { return text_edit; }
        void set_text_edit(std::optional<TextEdit> value) { this->text_edit = value; }

        std::optional<TokenFormat> get_token_format() const { return token_format; }
        void set_token_format(std::optional<TokenFormat> value) { this->token_format = value; }

        std::optional<TraceValue> get_trace_value() const { return trace_value; }
        void set_trace_value(std::optional<TraceValue> value) { this->trace_value = value; }

        std::optional<TypeDefinitionClientCapabilities> get_type_definition_client_capabilities() const { return type_definition_client_capabilities; }
        void set_type_definition_client_capabilities(std::optional<TypeDefinitionClientCapabilities> value) { this->type_definition_client_capabilities = value; }

        std::optional<TypeDefinitionOptions> get_type_definition_options() const { return type_definition_options; }
        void set_type_definition_options(std::optional<TypeDefinitionOptions> value) { this->type_definition_options = value; }

        std::optional<TypeDefinitionParams> get_type_definition_params() const { return type_definition_params; }
        void set_type_definition_params(std::optional<TypeDefinitionParams> value) { this->type_definition_params = value; }

        std::optional<TypeDefinitionRegistrationOptions> get_type_definition_registration_options() const { return type_definition_registration_options; }
        void set_type_definition_registration_options(std::optional<TypeDefinitionRegistrationOptions> value) { this->type_definition_registration_options = value; }

        std::optional<TypeHierarchyClientCapabilities> get_type_hierarchy_client_capabilities() const { return type_hierarchy_client_capabilities; }
        void set_type_hierarchy_client_capabilities(std::optional<TypeHierarchyClientCapabilities> value) { this->type_hierarchy_client_capabilities = value; }

        std::optional<TypeHierarchyItem> get_type_hierarchy_item() const { return type_hierarchy_item; }
        void set_type_hierarchy_item(std::optional<TypeHierarchyItem> value) { this->type_hierarchy_item = value; }

        std::optional<TypeHierarchyOptionsClass> get_type_hierarchy_options() const { return type_hierarchy_options; }
        void set_type_hierarchy_options(std::optional<TypeHierarchyOptionsClass> value) { this->type_hierarchy_options = value; }

        std::optional<TypeHierarchyPrepareParams> get_type_hierarchy_prepare_params() const { return type_hierarchy_prepare_params; }
        void set_type_hierarchy_prepare_params(std::optional<TypeHierarchyPrepareParams> value) { this->type_hierarchy_prepare_params = value; }

        std::optional<TypeHierarchyRegistrationOptions> get_type_hierarchy_registration_options() const { return type_hierarchy_registration_options; }
        void set_type_hierarchy_registration_options(std::optional<TypeHierarchyRegistrationOptions> value) { this->type_hierarchy_registration_options = value; }

        std::optional<TypeHierarchySubtypesParams> get_type_hierarchy_subtypes_params() const { return type_hierarchy_subtypes_params; }
        void set_type_hierarchy_subtypes_params(std::optional<TypeHierarchySubtypesParams> value) { this->type_hierarchy_subtypes_params = value; }

        std::optional<TypeHierarchySupertypesParams> get_type_hierarchy_supertypes_params() const { return type_hierarchy_supertypes_params; }
        void set_type_hierarchy_supertypes_params(std::optional<TypeHierarchySupertypesParams> value) { this->type_hierarchy_supertypes_params = value; }

        std::optional<int64_t> get_uinteger() const { return uinteger; }
        void set_uinteger(std::optional<int64_t> value) { this->uinteger = value; }

        std::optional<UnchangedDocumentDiagnosticReport> get_unchanged_document_diagnostic_report() const { return unchanged_document_diagnostic_report; }
        void set_unchanged_document_diagnostic_report(std::optional<UnchangedDocumentDiagnosticReport> value) { this->unchanged_document_diagnostic_report = value; }

        std::optional<UniquenessLevel> get_uniqueness_level() const { return uniqueness_level; }
        void set_uniqueness_level(std::optional<UniquenessLevel> value) { this->uniqueness_level = value; }

        std::optional<Unregistration> get_unregistration() const { return unregistration; }
        void set_unregistration(std::optional<Unregistration> value) { this->unregistration = value; }

        std::optional<UnregistrationParams> get_unregistration_params() const { return unregistration_params; }
        void set_unregistration_params(std::optional<UnregistrationParams> value) { this->unregistration_params = value; }

        std::optional<std::string> get_uri() const { return uri; }
        void set_uri(std::optional<std::string> value) { this->uri = value; }

        std::optional<VersionedNotebookDocumentIdentifier> get_versioned_notebook_document_identifier() const { return versioned_notebook_document_identifier; }
        void set_versioned_notebook_document_identifier(std::optional<VersionedNotebookDocumentIdentifier> value) { this->versioned_notebook_document_identifier = value; }

        std::optional<VersionedTextDocumentIdentifier> get_versioned_text_document_identifier() const { return versioned_text_document_identifier; }
        void set_versioned_text_document_identifier(std::optional<VersionedTextDocumentIdentifier> value) { this->versioned_text_document_identifier = value; }

        std::optional<int64_t> get_watch_kind() const { return watch_kind; }
        void set_watch_kind(std::optional<int64_t> value) { this->watch_kind = value; }

        std::optional<WillSaveTextDocumentParams> get_will_save_text_document_params() const { return will_save_text_document_params; }
        void set_will_save_text_document_params(std::optional<WillSaveTextDocumentParams> value) { this->will_save_text_document_params = value; }

        std::optional<WorkDoneProgressBegin> get_work_done_progress_begin() const { return work_done_progress_begin; }
        void set_work_done_progress_begin(std::optional<WorkDoneProgressBegin> value) { this->work_done_progress_begin = value; }

        std::optional<WorkDoneProgressCancelParams> get_work_done_progress_cancel_params() const { return work_done_progress_cancel_params; }
        void set_work_done_progress_cancel_params(std::optional<WorkDoneProgressCancelParams> value) { this->work_done_progress_cancel_params = value; }

        std::optional<WorkDoneProgressCreateParams> get_work_done_progress_create_params() const { return work_done_progress_create_params; }
        void set_work_done_progress_create_params(std::optional<WorkDoneProgressCreateParams> value) { this->work_done_progress_create_params = value; }

        std::optional<WorkDoneProgressEnd> get_work_done_progress_end() const { return work_done_progress_end; }
        void set_work_done_progress_end(std::optional<WorkDoneProgressEnd> value) { this->work_done_progress_end = value; }

        std::optional<WorkDoneProgressOptions> get_work_done_progress_options() const { return work_done_progress_options; }
        void set_work_done_progress_options(std::optional<WorkDoneProgressOptions> value) { this->work_done_progress_options = value; }

        std::optional<WorkDoneProgressParams> get_work_done_progress_params() const { return work_done_progress_params; }
        void set_work_done_progress_params(std::optional<WorkDoneProgressParams> value) { this->work_done_progress_params = value; }

        std::optional<WorkDoneProgressReport> get_work_done_progress_report() const { return work_done_progress_report; }
        void set_work_done_progress_report(std::optional<WorkDoneProgressReport> value) { this->work_done_progress_report = value; }

        std::optional<WorkspaceDiagnosticParams> get_workspace_diagnostic_params() const { return workspace_diagnostic_params; }
        void set_workspace_diagnostic_params(std::optional<WorkspaceDiagnosticParams> value) { this->workspace_diagnostic_params = value; }

        std::optional<WorkspaceDiagnosticReport> get_workspace_diagnostic_report() const { return workspace_diagnostic_report; }
        void set_workspace_diagnostic_report(std::optional<WorkspaceDiagnosticReport> value) { this->workspace_diagnostic_report = value; }

        std::optional<WorkspaceDiagnosticReportPartialResult> get_workspace_diagnostic_report_partial_result() const { return workspace_diagnostic_report_partial_result; }
        void set_workspace_diagnostic_report_partial_result(std::optional<WorkspaceDiagnosticReportPartialResult> value) { this->workspace_diagnostic_report_partial_result = value; }

        std::optional<WorkspaceDocumentDiagnosticReport> get_workspace_document_diagnostic_report() const { return workspace_document_diagnostic_report; }
        void set_workspace_document_diagnostic_report(std::optional<WorkspaceDocumentDiagnosticReport> value) { this->workspace_document_diagnostic_report = value; }

        std::optional<WorkspaceEdit> get_workspace_edit() const { return workspace_edit; }
        void set_workspace_edit(std::optional<WorkspaceEdit> value) { this->workspace_edit = value; }

        std::optional<WorkspaceEditClientCapabilities> get_workspace_edit_client_capabilities() const { return workspace_edit_client_capabilities; }
        void set_workspace_edit_client_capabilities(std::optional<WorkspaceEditClientCapabilities> value) { this->workspace_edit_client_capabilities = value; }

        std::optional<WorkspaceFolder> get_workspace_folder() const { return workspace_folder; }
        void set_workspace_folder(std::optional<WorkspaceFolder> value) { this->workspace_folder = value; }

        std::optional<WorkspaceFoldersChangeEvent> get_workspace_folders_change_event() const { return workspace_folders_change_event; }
        void set_workspace_folders_change_event(std::optional<WorkspaceFoldersChangeEvent> value) { this->workspace_folders_change_event = value; }

        std::optional<WorkspaceFoldersServerCapabilities> get_workspace_folders_server_capabilities() const { return workspace_folders_server_capabilities; }
        void set_workspace_folders_server_capabilities(std::optional<WorkspaceFoldersServerCapabilities> value) { this->workspace_folders_server_capabilities = value; }

        std::optional<WorkspaceFullDocumentDiagnosticReport> get_workspace_full_document_diagnostic_report() const { return workspace_full_document_diagnostic_report; }
        void set_workspace_full_document_diagnostic_report(std::optional<WorkspaceFullDocumentDiagnosticReport> value) { this->workspace_full_document_diagnostic_report = value; }

        std::optional<WorkspaceSymbol> get_workspace_symbol() const { return workspace_symbol; }
        void set_workspace_symbol(std::optional<WorkspaceSymbol> value) { this->workspace_symbol = value; }

        std::optional<WorkspaceSymbolClientCapabilities> get_workspace_symbol_client_capabilities() const { return workspace_symbol_client_capabilities; }
        void set_workspace_symbol_client_capabilities(std::optional<WorkspaceSymbolClientCapabilities> value) { this->workspace_symbol_client_capabilities = value; }

        std::optional<WorkspaceSymbolOptions> get_workspace_symbol_options() const { return workspace_symbol_options; }
        void set_workspace_symbol_options(std::optional<WorkspaceSymbolOptions> value) { this->workspace_symbol_options = value; }

        std::optional<WorkspaceSymbolParams> get_workspace_symbol_params() const { return workspace_symbol_params; }
        void set_workspace_symbol_params(std::optional<WorkspaceSymbolParams> value) { this->workspace_symbol_params = value; }

        std::optional<WorkspaceSymbolRegistrationOptions> get_workspace_symbol_registration_options() const { return workspace_symbol_registration_options; }
        void set_workspace_symbol_registration_options(std::optional<WorkspaceSymbolRegistrationOptions> value) { this->workspace_symbol_registration_options = value; }

        std::optional<WorkspaceUnchangedDocumentDiagnosticReport> get_workspace_unchanged_document_diagnostic_report() const { return workspace_unchanged_document_diagnostic_report; }
        void set_workspace_unchanged_document_diagnostic_report(std::optional<WorkspaceUnchangedDocumentDiagnosticReport> value) { this->workspace_unchanged_document_diagnostic_report = value; }
    };
}
