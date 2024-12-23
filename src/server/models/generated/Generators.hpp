//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Generators.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Models.hpp"
#include "ModelsClass.hpp"
#include "WorkspaceUnchangedDocumentDiagnosticReport.hpp"
#include "WorkspaceSymbolRegistrationOptions.hpp"
#include "WorkspaceSymbolParams.hpp"
#include "WorkspaceSymbol.hpp"
#include "WorkspaceSymbolLocation.hpp"
#include "WorkspaceFullDocumentDiagnosticReport.hpp"
#include "WorkspaceDiagnosticReportPartialResult.hpp"
#include "WorkspaceDiagnosticReport.hpp"
#include "WorkspaceDocumentDiagnosticReport.hpp"
#include "WorkspaceDiagnosticParams.hpp"
#include "WorkDoneProgressReport.hpp"
#include "WorkDoneProgressReportKind.hpp"
#include "WorkDoneProgressParams.hpp"
#include "WorkDoneProgressOptions.hpp"
#include "WorkDoneProgressEnd.hpp"
#include "WorkDoneProgressEndKind.hpp"
#include "WorkDoneProgressCreateParams.hpp"
#include "WorkDoneProgressCancelParams.hpp"
#include "WorkDoneProgressBegin.hpp"
#include "WorkDoneProgressBeginKind.hpp"
#include "WillSaveTextDocumentParams.hpp"
#include "UnregistrationParams.hpp"
#include "Unregistration.hpp"
#include "UnchangedDocumentDiagnosticReport.hpp"
#include "TypeHierarchySupertypesParams.hpp"
#include "TypeHierarchySubtypesParams.hpp"
#include "TypeHierarchyRegistrationOptions.hpp"
#include "TypeHierarchyPrepareParams.hpp"
#include "TypeHierarchyOptionsClass.hpp"
#include "TypeHierarchyItem.hpp"
#include "TypeDefinitionRegistrationOptions.hpp"
#include "TypeDefinitionParams.hpp"
#include "TypeDefinitionOptions.hpp"
#include "TextDocumentSaveRegistrationOptions.hpp"
#include "TextDocumentRegistrationOptions.hpp"
#include "TextDocumentPositionParams.hpp"
#include "TextDocumentEditClass.hpp"
#include "TextDocumentChangeRegistrationOptions.hpp"
#include "SymbolInformation.hpp"
#include "StaticRegistrationOptions.hpp"
#include "SignatureHelpRegistrationOptions.hpp"
#include "SignatureHelpParams.hpp"
#include "SignatureHelpContext.hpp"
#include "SignatureHelp.hpp"
#include "SignatureInformationElement.hpp"
#include "ShowMessageRequestParams.hpp"
#include "ShowMessageParams.hpp"
#include "ShowDocumentResult.hpp"
#include "ShowDocumentParams.hpp"
#include "SetTraceParams.hpp"
#include "SemanticTokensRegistrationOptions.hpp"
#include "RangeRegistrationOption.hpp"
#include "RangeRegistrationOptionClass.hpp"
#include "FullRegistrationOptions.hpp"
#include "FullRegistrationOptionsClass.hpp"
#include "SemanticTokensRangeParams.hpp"
#include "SemanticTokensPartialResult.hpp"
#include "SemanticTokensParams.hpp"
#include "SemanticTokensOptionsClass.hpp"
#include "RangeOption.hpp"
#include "RangeOptionClass.hpp"
#include "FullOption.hpp"
#include "FullOptionClass.hpp"
#include "SemanticTokensDeltaPartialResult.hpp"
#include "SemanticTokensDeltaParams.hpp"
#include "SemanticTokensDelta.hpp"
#include "SemanticTokensEdit.hpp"
#include "SemanticTokens.hpp"
#include "SemanticTokenTypes.hpp"
#include "SemanticTokenModifiers.hpp"
#include "SelectionRangeRegistrationOptions.hpp"
#include "SelectionRangeParams.hpp"
#include "SelectionRangeOptionsClass.hpp"
#include "SelectionRange.hpp"
#include "SaveOptions.hpp"
#include "ResponseMessage.hpp"
#include "Id.hpp"
#include "ResponseError.hpp"
#include "RequestMessage.hpp"
#include "RenameRegistrationOptions.hpp"
#include "RenameParams.hpp"
#include "RenameFilesParams.hpp"
#include "RenameFile.hpp"
#include "RenameFileOptions.hpp"
#include "RenameFileKind.hpp"
#include "RelatedUnchangedDocumentDiagnosticReport.hpp"
#include "RelatedUnchangedDocumentDiagnosticReportKind.hpp"
#include "RelatedFullDocumentDiagnosticReport.hpp"
#include "RegistrationParams.hpp"
#include "Registration.hpp"
#include "ReferenceRegistrationOptions.hpp"
#include "ReferenceParams.hpp"
#include "ReferenceContext.hpp"
#include "PublishDiagnosticsParams.hpp"
#include "PreviousResultId.hpp"
#include "PrepareRenameParams.hpp"
#include "PartialResultParams.hpp"
#include "ParameterInformationElement.hpp"
#include "ParameterInformationLabel.hpp"
#include "NotificationMessage.hpp"
#include "Params.hpp"
#include "NotebookDocumentSyncRegistrationOptions.hpp"
#include "NotebookDocumentSyncOptionsClass.hpp"
#include "NotebookDocumentFilter.hpp"
#include "NotebookCellTextDocumentFilter.hpp"
#include "MonikerRegistrationOptions.hpp"
#include "MonikerParams.hpp"
#include "MonikerOptionsClass.hpp"
#include "Moniker.hpp"
#include "UniquenessLevel.hpp"
#include "MonikerKind.hpp"
#include "MessageActionItemElement.hpp"
#include "Message.hpp"
#include "LogTraceParams.hpp"
#include "LogMessageParams.hpp"
#include "LocationLink.hpp"
#include "LinkedEditingRanges.hpp"
#include "LinkedEditingRangeRegistrationOptions.hpp"
#include "LinkedEditingRangeParams.hpp"
#include "LinkedEditingRangeOptionsClass.hpp"
#include "InsertReplaceEdit.hpp"
#include "InlineValueVariableLookup.hpp"
#include "InlineValueText.hpp"
#include "InlineValueRegistrationOptions.hpp"
#include "InlineValueParams.hpp"
#include "InlineValueOptionsClass.hpp"
#include "InlineValueEvaluatableExpression.hpp"
#include "InlineValueContext.hpp"
#include "InlineValue.hpp"
#include "InlayHintRegistrationOptions.hpp"
#include "InlayHintParams.hpp"
#include "InlayHintOptionsClass.hpp"
#include "InlayHint.hpp"
#include "InlayHintLabel.hpp"
#include "InlayHintLabelPart.hpp"
#include "InitializedParams.hpp"
#include "InitializeResult.hpp"
#include "ServerInfo.hpp"
#include "ServerCapabilities.hpp"
#include "WorkspaceSymbolProvider.hpp"
#include "WorkspaceSymbolOptions.hpp"
#include "Workspace.hpp"
#include "WorkspaceFoldersServerCapabilities.hpp"
#include "ChangeNotifications.hpp"
#include "ServerFileOperations.hpp"
#include "TypeHierarchyProvider.hpp"
#include "TypeHierarchyOptions.hpp"
#include "TypeDefinitionProvider.hpp"
#include "TypeDefinitionTionOptions.hpp"
#include "TextDocumentSync.hpp"
#include "TextDocumentSyncOptions.hpp"
#include "SignatureHelpOptions.hpp"
#include "SemanticTokensOptions.hpp"
#include "RangeUnion.hpp"
#include "RangeClass.hpp"
#include "SemanticTokensLegend.hpp"
#include "FullUnion.hpp"
#include "FullClass.hpp"
#include "SelectionRangeProvider.hpp"
#include "SelectionRangeOptions.hpp"
#include "RenameProvider.hpp"
#include "RenameOptions.hpp"
#include "ReferencesProvider.hpp"
#include "ReferenceOptions.hpp"
#include "NotebookDocumentSyncOptions.hpp"
#include "NotebookSelector.hpp"
#include "NotebookUnion.hpp"
#include "NotebookClass.hpp"
#include "Cell.hpp"
#include "MonikerProvider.hpp"
#include "MonikerOptions.hpp"
#include "LinkedEditingRangeProvider.hpp"
#include "LinkedEditingRangeOptions.hpp"
#include "InlineValueProvider.hpp"
#include "InlineValueOptions.hpp"
#include "InlayHintProvider.hpp"
#include "InlayHintOptions.hpp"
#include "ImplementationProvider.hpp"
#include "ImplementationAtionOptions.hpp"
#include "HoverProvider.hpp"
#include "FoldingRangeProvider.hpp"
#include "FoldingRangeOptions.hpp"
#include "DocumentSymbolProvider.hpp"
#include "DocumentRangeFormattingProvider.hpp"
#include "DocumentHighlightProvider.hpp"
#include "DocumentFormattingProvider.hpp"
#include "DiagnosticProviderClass.hpp"
#include "DefinitionProvider.hpp"
#include "DeclarationProvider.hpp"
#include "DeclarationRationOptions.hpp"
#include "ColorProvider.hpp"
#include "DocumentColorOptions.hpp"
#include "CodeActionProvider.hpp"
#include "CallHierarchyProvider.hpp"
#include "CallHierarchyOptions.hpp"
#include "InitializeParams.hpp"
#include "TraceValue.hpp"
#include "ClientInfo.hpp"
#include "InitializeError.hpp"
#include "ImplementationRegistrationOptions.hpp"
#include "ImplementationParams.hpp"
#include "ImplementationOptions.hpp"
#include "HoverRegistrationOptions.hpp"
#include "HoverParams.hpp"
#include "HoverOptions.hpp"
#include "Hover.hpp"
#include "ContentsUnion.hpp"
#include "ContentsMarkupContent.hpp"
#include "MarkedString.hpp"
#include "MarkedStringClass.hpp"
#include "FullDocumentDiagnosticReport.hpp"
#include "FullDocumentDiagnosticReportKind.hpp"
#include "FoldingRangeRegistrationOptions.hpp"
#include "FoldingRangeParams.hpp"
#include "FoldingRangeOptionsClass.hpp"
#include "FoldingRangeClass.hpp"
#include "FileRename.hpp"
#include "FileOperationRegistrationOptions.hpp"
#include "FileOperationFilter.hpp"
#include "FileOperationPattern.hpp"
#include "FileOperationPatternOptions.hpp"
#include "FileOperationPatternKind.hpp"
#include "ExecuteCommandRegistrationOptions.hpp"
#include "ExecuteCommandParams.hpp"
#include "ExecuteCommandOptions.hpp"
#include "DocumentSymbolRegistrationOptions.hpp"
#include "DocumentSymbolParams.hpp"
#include "DocumentSymbolOptions.hpp"
#include "DocumentSymbol.hpp"
#include "DocumentRangeFormattingRegistrationOptions.hpp"
#include "DocumentRangeFormattingParams.hpp"
#include "DocumentRangeFormattingOptions.hpp"
#include "DocumentOnTypeFormattingRegistrationOptions.hpp"
#include "DocumentOnTypeFormattingParams.hpp"
#include "DocumentOnTypeFormattingOptions.hpp"
#include "DocumentLinkRegistrationOptions.hpp"
#include "DocumentLinkParams.hpp"
#include "DocumentLinkOptions.hpp"
#include "DocumentLink.hpp"
#include "DocumentHighlightRegistrationOptions.hpp"
#include "DocumentHighlightParams.hpp"
#include "DocumentHighlightOptions.hpp"
#include "DocumentHighlight.hpp"
#include "DocumentFormattingRegistrationOptions.hpp"
#include "DocumentFormattingParams.hpp"
#include "FormattingOptions.hpp"
#include "DocumentFormattingOptions.hpp"
#include "DocumentDiagnosticReportPartialResult.hpp"
#include "DocumentDiagnosticReport.hpp"
#include "RelatedDocumentValue.hpp"
#include "DocumentDiagnosticReportKind.hpp"
#include "DocumentDiagnosticParams.hpp"
#include "DocumentColorRegistrationOptions.hpp"
#include "DocumentColorParams.hpp"
#include "DocumentColorOptionsClass.hpp"
#include "DidSaveTextDocumentParams.hpp"
#include "DidSaveNotebookDocumentParams.hpp"
#include "DidOpenTextDocumentParams.hpp"
#include "DidOpenNotebookDocumentParams.hpp"
#include "NotebookDocument.hpp"
#include "DidCloseTextDocumentParams.hpp"
#include "DidCloseNotebookDocumentParams.hpp"
#include "NotebookDocumentIdentifier.hpp"
#include "DidChangeWorkspaceFoldersParams.hpp"
#include "WorkspaceFoldersChangeEvent.hpp"
#include "DidChangeWatchedFilesRegistrationOptions.hpp"
#include "FileSystemWatcher.hpp"
#include "GlobPattern.hpp"
#include "RelativePattern.hpp"
#include "BaseUri.hpp"
#include "WorkspaceFolder.hpp"
#include "DidChangeWatchedFilesParams.hpp"
#include "FileEvent.hpp"
#include "DidChangeTextDocumentParams.hpp"
#include "DidChangeNotebookDocumentParams.hpp"
#include "VersionedNotebookDocumentIdentifier.hpp"
#include "NotebookDocumentChangeEvent.hpp"
#include "Cells.hpp"
#include "TextContent.hpp"
#include "VersionedTextDocumentIdentifier.hpp"
#include "TextDocumentContentChangeEvent.hpp"
#include "Structure.hpp"
#include "TextDocumentItem.hpp"
#include "NotebookCellArrayChange.hpp"
#include "NotebookCell.hpp"
#include "ExecutionSummary.hpp"
#include "DidChangeConfigurationParams.hpp"
#include "DiagnosticServerCancellationData.hpp"
#include "DiagnosticRegistrationOptions.hpp"
#include "DiagnosticOptions.hpp"
#include "DeleteFilesParams.hpp"
#include "FileDelete.hpp"
#include "DeleteFile.hpp"
#include "DeleteFileOptions.hpp"
#include "DeleteFileKind.hpp"
#include "DefinitionRegistrationOptions.hpp"
#include "DefinitionParams.hpp"
#include "DefinitionOptions.hpp"
#include "DeclarationRegistrationOptions.hpp"
#include "DeclarationParams.hpp"
#include "DeclarationOptions.hpp"
#include "CreateFilesParams.hpp"
#include "FileCreate.hpp"
#include "CreateFile.hpp"
#include "CreateFileOptions.hpp"
#include "CreateFileKind.hpp"
#include "ConfigurationParams.hpp"
#include "ConfigurationItem.hpp"
#include "CompletionRegistrationOptions.hpp"
#include "CompletionRegistrationOptionsCompletionItem.hpp"
#include "CompletionParams.hpp"
#include "CompletionOptions.hpp"
#include "CompletionOptionsCompletionItem.hpp"
#include "CompletionListClass.hpp"
#include "ItemDefaults.hpp"
#include "EditRangeClass.hpp"
#include "CompletionItem.hpp"
#include "Edit.hpp"
#include "CompletionItemLabelDetails.hpp"
#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"
#include "CompletionContext.hpp"
#include "ColorPresentationParams.hpp"
#include "ColorPresentation.hpp"
#include "ColorInformation.hpp"
#include "Color.hpp"
#include "CodeLensRegistrationOptions.hpp"
#include "CodeLensParams.hpp"
#include "CodeLensOptions.hpp"
#include "CodeLens.hpp"
#include "CodeActionRegistrationOptions.hpp"
#include "CodeActionParams.hpp"
#include "CodeActionOptions.hpp"
#include "CodeActionContext.hpp"
#include "CodeAction.hpp"
#include "Disabled.hpp"
#include "Diagnostic.hpp"
#include "DiagnosticRelatedInformation.hpp"
#include "LocationClass.hpp"
#include "CodeDescription.hpp"
#include "Command.hpp"
#include "ClientCapabilities.hpp"
#include "Empty.hpp"
#include "WorkspaceEditClientCapabilities.hpp"
#include "FailureHandlingKind.hpp"
#include "ChangeAnnotationSupport.hpp"
#include "WorkspaceSymbolClientCapabilities.hpp"
#include "WorkspaceSymbolClientCapabilitiesTagSupport.hpp"
#include "WorkspaceSymbolClientCapabilitiesSymbolKind.hpp"
#include "WorkspaceSymbolClientCapabilitiesResolveSupport.hpp"
#include "SemanticTokensWorkspaceClientCapabilities.hpp"
#include "InlineValueWorkspaceClientCapabilities.hpp"
#include "InlayHintWorkspaceClientCapabilities.hpp"
#include "ClientFileOperations.hpp"
#include "ExecuteCommandClientCapabilities.hpp"
#include "DidChangeWatchedFilesClientCapabilities.hpp"
#include "DidChangeConfigurationClientCapabilities.hpp"
#include "DiagnosticWorkspaceClientCapabilities.hpp"
#include "CodeLensWorkspaceClientCapabilities.hpp"
#include "Window.hpp"
#include "ShowMessageRequestClientCapabilities.hpp"
#include "MessageActionItem.hpp"
#include "ShowDocumentClientCapabilities.hpp"
#include "TextDocumentClientCapabilities.hpp"
#include "TypeHierarchyClientCapabilities.hpp"
#include "TypeDefinitionClientCapabilities.hpp"
#include "TextDocumentSyncClientCapabilities.hpp"
#include "SignatureHelpClientCapabilities.hpp"
#include "SignatureInformation.hpp"
#include "ParameterInformation.hpp"
#include "SemanticTokensClientCapabilities.hpp"
#include "Requests.hpp"
#include "RangeCapability.hpp"
#include "RangeCapabilityClass.hpp"
#include "FullCapability.hpp"
#include "FullCapabilityClass.hpp"
#include "TokenFormat.hpp"
#include "SelectionRangeClientCapabilities.hpp"
#include "RenameClientCapabilities.hpp"
#include "ReferenceClientCapabilities.hpp"
#include "DocumentRangeFormattingClientCapabilities.hpp"
#include "PublishDiagnosticsClientCapabilities.hpp"
#include "PublishDiagnosticsClientCapabilitiesTagSupport.hpp"
#include "DocumentOnTypeFormattingClientCapabilities.hpp"
#include "MonikerClientCapabilities.hpp"
#include "LinkedEditingRangeClientCapabilities.hpp"
#include "InlineValueClientCapabilities.hpp"
#include "InlayHintClientCapabilities.hpp"
#include "InlayHintClientCapabilitiesResolveSupport.hpp"
#include "ImplementationClientCapabilities.hpp"
#include "HoverClientCapabilities.hpp"
#include "DocumentFormattingClientCapabilities.hpp"
#include "FoldingRangeClientCapabilities.hpp"
#include "FoldingRangeKind.hpp"
#include "FoldingRange.hpp"
#include "DocumentSymbolClientCapabilities.hpp"
#include "DocumentSymbolClientCapabilitiesTagSupport.hpp"
#include "DocumentSymbolClientCapabilitiesSymbolKind.hpp"
#include "DocumentLinkClientCapabilities.hpp"
#include "DocumentHighlightClientCapabilities.hpp"
#include "DiagnosticClientCapabilities.hpp"
#include "DefinitionClientCapabilities.hpp"
#include "DeclarationClientCapabilities.hpp"
#include "CompletionClientCapabilities.hpp"
#include "CompletionList.hpp"
#include "CompletionItemKind.hpp"
#include "CompletionClientCapabilitiesCompletionItem.hpp"
#include "CompletionItemTagSupport.hpp"
#include "CompletionItemResolveSupport.hpp"
#include "InsertTextModeSupport.hpp"
#include "MarkupKind.hpp"
#include "DocumentColorClientCapabilities.hpp"
#include "CodeLensClientCapabilities.hpp"
#include "CodeActionClientCapabilities.hpp"
#include "CodeActionClientCapabilitiesResolveSupport.hpp"
#include "CodeActionLiteralSupport.hpp"
#include "CodeActionKind.hpp"
#include "NotebookDocumentClientCapabilities.hpp"
#include "NotebookDocumentSyncClientCapabilities.hpp"
#include "General.hpp"
#include "StaleRequestSupport.hpp"
#include "RegularExpressionsClientCapabilities.hpp"
#include "MarkdownClientCapabilities.hpp"
#include "CancelParams.hpp"
#include "CallHierarchyRegistrationOptions.hpp"
#include "DocumentFilter.hpp"
#include "CallHierarchyPrepareParams.hpp"
#include "TextDocumentIdentifier.hpp"
#include "CallHierarchyOutgoingCallsParams.hpp"
#include "CallHierarchyOutgoingCall.hpp"
#include "CallHierarchyOptionsClass.hpp"
#include "CallHierarchyIncomingCallsParams.hpp"
#include "ProgressToken.hpp"
#include "CallHierarchyIncomingCall.hpp"
#include "CallHierarchyItem.hpp"
#include "LspAny.hpp"
#include "CallHierarchyClientCapabilities.hpp"
#include "ApplyWorkspaceEditResult.hpp"
#include "ApplyWorkspaceEditParams.hpp"
#include "WorkspaceEdit.hpp"
#include "TextDocumentEdit.hpp"
#include "OptionalVersionedTextDocumentIdentifier.hpp"
#include "EFileOptions.hpp"
#include "ResourceOperationKind.hpp"
#include "EditElement.hpp"
#include "TextEdit.hpp"
#include "ChangeAnnotation.hpp"
#include "AnnotatedTextEdit.hpp"
#include "PurpleRange.hpp"
#include "Position.hpp"

namespace lsps {
void from_json(const json & j, Position & x);
void to_json(json & j, const Position & x);

void from_json(const json & j, PurpleRange & x);
void to_json(json & j, const PurpleRange & x);

void from_json(const json & j, AnnotatedTextEdit & x);
void to_json(json & j, const AnnotatedTextEdit & x);

void from_json(const json & j, ChangeAnnotation & x);
void to_json(json & j, const ChangeAnnotation & x);

void from_json(const json & j, TextEdit & x);
void to_json(json & j, const TextEdit & x);

void from_json(const json & j, EditElement & x);
void to_json(json & j, const EditElement & x);

void from_json(const json & j, EFileOptions & x);
void to_json(json & j, const EFileOptions & x);

void from_json(const json & j, OptionalVersionedTextDocumentIdentifier & x);
void to_json(json & j, const OptionalVersionedTextDocumentIdentifier & x);

void from_json(const json & j, TextDocumentEdit & x);
void to_json(json & j, const TextDocumentEdit & x);

void from_json(const json & j, WorkspaceEdit & x);
void to_json(json & j, const WorkspaceEdit & x);

void from_json(const json & j, ApplyWorkspaceEditParams & x);
void to_json(json & j, const ApplyWorkspaceEditParams & x);

void from_json(const json & j, ApplyWorkspaceEditResult & x);
void to_json(json & j, const ApplyWorkspaceEditResult & x);

void from_json(const json & j, CallHierarchyClientCapabilities & x);
void to_json(json & j, const CallHierarchyClientCapabilities & x);

void from_json(const json & j, CallHierarchyItem & x);
void to_json(json & j, const CallHierarchyItem & x);

void from_json(const json & j, CallHierarchyIncomingCall & x);
void to_json(json & j, const CallHierarchyIncomingCall & x);

void from_json(const json & j, CallHierarchyIncomingCallsParams & x);
void to_json(json & j, const CallHierarchyIncomingCallsParams & x);

void from_json(const json & j, CallHierarchyOptionsClass & x);
void to_json(json & j, const CallHierarchyOptionsClass & x);

void from_json(const json & j, CallHierarchyOutgoingCall & x);
void to_json(json & j, const CallHierarchyOutgoingCall & x);

void from_json(const json & j, CallHierarchyOutgoingCallsParams & x);
void to_json(json & j, const CallHierarchyOutgoingCallsParams & x);

void from_json(const json & j, TextDocumentIdentifier & x);
void to_json(json & j, const TextDocumentIdentifier & x);

void from_json(const json & j, CallHierarchyPrepareParams & x);
void to_json(json & j, const CallHierarchyPrepareParams & x);

void from_json(const json & j, DocumentFilter & x);
void to_json(json & j, const DocumentFilter & x);

void from_json(const json & j, CallHierarchyRegistrationOptions & x);
void to_json(json & j, const CallHierarchyRegistrationOptions & x);

void from_json(const json & j, CancelParams & x);
void to_json(json & j, const CancelParams & x);

void from_json(const json & j, MarkdownClientCapabilities & x);
void to_json(json & j, const MarkdownClientCapabilities & x);

void from_json(const json & j, RegularExpressionsClientCapabilities & x);
void to_json(json & j, const RegularExpressionsClientCapabilities & x);

void from_json(const json & j, StaleRequestSupport & x);
void to_json(json & j, const StaleRequestSupport & x);

void from_json(const json & j, General & x);
void to_json(json & j, const General & x);

void from_json(const json & j, NotebookDocumentSyncClientCapabilities & x);
void to_json(json & j, const NotebookDocumentSyncClientCapabilities & x);

void from_json(const json & j, NotebookDocumentClientCapabilities & x);
void to_json(json & j, const NotebookDocumentClientCapabilities & x);

void from_json(const json & j, CodeActionKind & x);
void to_json(json & j, const CodeActionKind & x);

void from_json(const json & j, CodeActionLiteralSupport & x);
void to_json(json & j, const CodeActionLiteralSupport & x);

void from_json(const json & j, CodeActionClientCapabilitiesResolveSupport & x);
void to_json(json & j, const CodeActionClientCapabilitiesResolveSupport & x);

void from_json(const json & j, CodeActionClientCapabilities & x);
void to_json(json & j, const CodeActionClientCapabilities & x);

void from_json(const json & j, CodeLensClientCapabilities & x);
void to_json(json & j, const CodeLensClientCapabilities & x);

void from_json(const json & j, DocumentColorClientCapabilities & x);
void to_json(json & j, const DocumentColorClientCapabilities & x);

void from_json(const json & j, InsertTextModeSupport & x);
void to_json(json & j, const InsertTextModeSupport & x);

void from_json(const json & j, CompletionItemResolveSupport & x);
void to_json(json & j, const CompletionItemResolveSupport & x);

void from_json(const json & j, CompletionItemTagSupport & x);
void to_json(json & j, const CompletionItemTagSupport & x);

void from_json(const json & j, CompletionClientCapabilitiesCompletionItem & x);
void to_json(json & j, const CompletionClientCapabilitiesCompletionItem & x);

void from_json(const json & j, CompletionItemKind & x);
void to_json(json & j, const CompletionItemKind & x);

void from_json(const json & j, CompletionList & x);
void to_json(json & j, const CompletionList & x);

void from_json(const json & j, CompletionClientCapabilities & x);
void to_json(json & j, const CompletionClientCapabilities & x);

void from_json(const json & j, DeclarationClientCapabilities & x);
void to_json(json & j, const DeclarationClientCapabilities & x);

void from_json(const json & j, DefinitionClientCapabilities & x);
void to_json(json & j, const DefinitionClientCapabilities & x);

void from_json(const json & j, DiagnosticClientCapabilities & x);
void to_json(json & j, const DiagnosticClientCapabilities & x);

void from_json(const json & j, DocumentHighlightClientCapabilities & x);
void to_json(json & j, const DocumentHighlightClientCapabilities & x);

void from_json(const json & j, DocumentLinkClientCapabilities & x);
void to_json(json & j, const DocumentLinkClientCapabilities & x);

void from_json(const json & j, DocumentSymbolClientCapabilitiesSymbolKind & x);
void to_json(json & j, const DocumentSymbolClientCapabilitiesSymbolKind & x);

void from_json(const json & j, DocumentSymbolClientCapabilitiesTagSupport & x);
void to_json(json & j, const DocumentSymbolClientCapabilitiesTagSupport & x);

void from_json(const json & j, DocumentSymbolClientCapabilities & x);
void to_json(json & j, const DocumentSymbolClientCapabilities & x);

void from_json(const json & j, FoldingRange & x);
void to_json(json & j, const FoldingRange & x);

void from_json(const json & j, FoldingRangeKind & x);
void to_json(json & j, const FoldingRangeKind & x);

void from_json(const json & j, FoldingRangeClientCapabilities & x);
void to_json(json & j, const FoldingRangeClientCapabilities & x);

void from_json(const json & j, DocumentFormattingClientCapabilities & x);
void to_json(json & j, const DocumentFormattingClientCapabilities & x);

void from_json(const json & j, HoverClientCapabilities & x);
void to_json(json & j, const HoverClientCapabilities & x);

void from_json(const json & j, ImplementationClientCapabilities & x);
void to_json(json & j, const ImplementationClientCapabilities & x);

void from_json(const json & j, InlayHintClientCapabilitiesResolveSupport & x);
void to_json(json & j, const InlayHintClientCapabilitiesResolveSupport & x);

void from_json(const json & j, InlayHintClientCapabilities & x);
void to_json(json & j, const InlayHintClientCapabilities & x);

void from_json(const json & j, InlineValueClientCapabilities & x);
void to_json(json & j, const InlineValueClientCapabilities & x);

void from_json(const json & j, LinkedEditingRangeClientCapabilities & x);
void to_json(json & j, const LinkedEditingRangeClientCapabilities & x);

void from_json(const json & j, MonikerClientCapabilities & x);
void to_json(json & j, const MonikerClientCapabilities & x);

void from_json(const json & j, DocumentOnTypeFormattingClientCapabilities & x);
void to_json(json & j, const DocumentOnTypeFormattingClientCapabilities & x);

void from_json(const json & j, PublishDiagnosticsClientCapabilitiesTagSupport & x);
void to_json(json & j, const PublishDiagnosticsClientCapabilitiesTagSupport & x);

void from_json(const json & j, PublishDiagnosticsClientCapabilities & x);
void to_json(json & j, const PublishDiagnosticsClientCapabilities & x);

void from_json(const json & j, DocumentRangeFormattingClientCapabilities & x);
void to_json(json & j, const DocumentRangeFormattingClientCapabilities & x);

void from_json(const json & j, ReferenceClientCapabilities & x);
void to_json(json & j, const ReferenceClientCapabilities & x);

void from_json(const json & j, RenameClientCapabilities & x);
void to_json(json & j, const RenameClientCapabilities & x);

void from_json(const json & j, SelectionRangeClientCapabilities & x);
void to_json(json & j, const SelectionRangeClientCapabilities & x);

void from_json(const json & j, FullCapabilityClass & x);
void to_json(json & j, const FullCapabilityClass & x);

void from_json(const json & j, RangeCapabilityClass & x);
void to_json(json & j, const RangeCapabilityClass & x);

void from_json(const json & j, Requests & x);
void to_json(json & j, const Requests & x);

void from_json(const json & j, SemanticTokensClientCapabilities & x);
void to_json(json & j, const SemanticTokensClientCapabilities & x);

void from_json(const json & j, ParameterInformation & x);
void to_json(json & j, const ParameterInformation & x);

void from_json(const json & j, SignatureInformation & x);
void to_json(json & j, const SignatureInformation & x);

void from_json(const json & j, SignatureHelpClientCapabilities & x);
void to_json(json & j, const SignatureHelpClientCapabilities & x);

void from_json(const json & j, TextDocumentSyncClientCapabilities & x);
void to_json(json & j, const TextDocumentSyncClientCapabilities & x);

void from_json(const json & j, TypeDefinitionClientCapabilities & x);
void to_json(json & j, const TypeDefinitionClientCapabilities & x);

void from_json(const json & j, TypeHierarchyClientCapabilities & x);
void to_json(json & j, const TypeHierarchyClientCapabilities & x);

void from_json(const json & j, TextDocumentClientCapabilities & x);
void to_json(json & j, const TextDocumentClientCapabilities & x);

void from_json(const json & j, ShowDocumentClientCapabilities & x);
void to_json(json & j, const ShowDocumentClientCapabilities & x);

void from_json(const json & j, MessageActionItem & x);
void to_json(json & j, const MessageActionItem & x);

void from_json(const json & j, ShowMessageRequestClientCapabilities & x);
void to_json(json & j, const ShowMessageRequestClientCapabilities & x);

void from_json(const json & j, Window & x);
void to_json(json & j, const Window & x);

void from_json(const json & j, CodeLensWorkspaceClientCapabilities & x);
void to_json(json & j, const CodeLensWorkspaceClientCapabilities & x);

void from_json(const json & j, DiagnosticWorkspaceClientCapabilities & x);
void to_json(json & j, const DiagnosticWorkspaceClientCapabilities & x);

void from_json(const json & j, DidChangeConfigurationClientCapabilities & x);
void to_json(json & j, const DidChangeConfigurationClientCapabilities & x);

void from_json(const json & j, DidChangeWatchedFilesClientCapabilities & x);
void to_json(json & j, const DidChangeWatchedFilesClientCapabilities & x);

void from_json(const json & j, ExecuteCommandClientCapabilities & x);
void to_json(json & j, const ExecuteCommandClientCapabilities & x);

void from_json(const json & j, ClientFileOperations & x);
void to_json(json & j, const ClientFileOperations & x);

void from_json(const json & j, InlayHintWorkspaceClientCapabilities & x);
void to_json(json & j, const InlayHintWorkspaceClientCapabilities & x);

void from_json(const json & j, InlineValueWorkspaceClientCapabilities & x);
void to_json(json & j, const InlineValueWorkspaceClientCapabilities & x);

void from_json(const json & j, SemanticTokensWorkspaceClientCapabilities & x);
void to_json(json & j, const SemanticTokensWorkspaceClientCapabilities & x);

void from_json(const json & j, WorkspaceSymbolClientCapabilitiesResolveSupport & x);
void to_json(json & j, const WorkspaceSymbolClientCapabilitiesResolveSupport & x);

void from_json(const json & j, WorkspaceSymbolClientCapabilitiesSymbolKind & x);
void to_json(json & j, const WorkspaceSymbolClientCapabilitiesSymbolKind & x);

void from_json(const json & j, WorkspaceSymbolClientCapabilitiesTagSupport & x);
void to_json(json & j, const WorkspaceSymbolClientCapabilitiesTagSupport & x);

void from_json(const json & j, WorkspaceSymbolClientCapabilities & x);
void to_json(json & j, const WorkspaceSymbolClientCapabilities & x);

void from_json(const json & j, ChangeAnnotationSupport & x);
void to_json(json & j, const ChangeAnnotationSupport & x);

void from_json(const json & j, WorkspaceEditClientCapabilities & x);
void to_json(json & j, const WorkspaceEditClientCapabilities & x);

void from_json(const json & j, Empty & x);
void to_json(json & j, const Empty & x);

void from_json(const json & j, ClientCapabilities & x);
void to_json(json & j, const ClientCapabilities & x);

void from_json(const json & j, Command & x);
void to_json(json & j, const Command & x);

void from_json(const json & j, CodeDescription & x);
void to_json(json & j, const CodeDescription & x);

void from_json(const json & j, LocationClass & x);
void to_json(json & j, const LocationClass & x);

void from_json(const json & j, DiagnosticRelatedInformation & x);
void to_json(json & j, const DiagnosticRelatedInformation & x);

void from_json(const json & j, Diagnostic & x);
void to_json(json & j, const Diagnostic & x);

void from_json(const json & j, Disabled & x);
void to_json(json & j, const Disabled & x);

void from_json(const json & j, CodeAction & x);
void to_json(json & j, const CodeAction & x);

void from_json(const json & j, CodeActionContext & x);
void to_json(json & j, const CodeActionContext & x);

void from_json(const json & j, CodeActionOptions & x);
void to_json(json & j, const CodeActionOptions & x);

void from_json(const json & j, CodeActionParams & x);
void to_json(json & j, const CodeActionParams & x);

void from_json(const json & j, CodeActionRegistrationOptions & x);
void to_json(json & j, const CodeActionRegistrationOptions & x);

void from_json(const json & j, CodeLens & x);
void to_json(json & j, const CodeLens & x);

void from_json(const json & j, CodeLensOptions & x);
void to_json(json & j, const CodeLensOptions & x);

void from_json(const json & j, CodeLensParams & x);
void to_json(json & j, const CodeLensParams & x);

void from_json(const json & j, CodeLensRegistrationOptions & x);
void to_json(json & j, const CodeLensRegistrationOptions & x);

void from_json(const json & j, Color & x);
void to_json(json & j, const Color & x);

void from_json(const json & j, ColorInformation & x);
void to_json(json & j, const ColorInformation & x);

void from_json(const json & j, ColorPresentation & x);
void to_json(json & j, const ColorPresentation & x);

void from_json(const json & j, ColorPresentationParams & x);
void to_json(json & j, const ColorPresentationParams & x);

void from_json(const json & j, CompletionContext & x);
void to_json(json & j, const CompletionContext & x);

void from_json(const json & j, DocumentationMarkupContent & x);
void to_json(json & j, const DocumentationMarkupContent & x);

void from_json(const json & j, CompletionItemLabelDetails & x);
void to_json(json & j, const CompletionItemLabelDetails & x);

void from_json(const json & j, Edit & x);
void to_json(json & j, const Edit & x);

void from_json(const json & j, CompletionItem & x);
void to_json(json & j, const CompletionItem & x);

void from_json(const json & j, EditRangeClass & x);
void to_json(json & j, const EditRangeClass & x);

void from_json(const json & j, ItemDefaults & x);
void to_json(json & j, const ItemDefaults & x);

void from_json(const json & j, CompletionListClass & x);
void to_json(json & j, const CompletionListClass & x);

void from_json(const json & j, CompletionOptionsCompletionItem & x);
void to_json(json & j, const CompletionOptionsCompletionItem & x);

void from_json(const json & j, CompletionOptions & x);
void to_json(json & j, const CompletionOptions & x);

void from_json(const json & j, CompletionParams & x);
void to_json(json & j, const CompletionParams & x);

void from_json(const json & j, CompletionRegistrationOptionsCompletionItem & x);
void to_json(json & j, const CompletionRegistrationOptionsCompletionItem & x);

void from_json(const json & j, CompletionRegistrationOptions & x);
void to_json(json & j, const CompletionRegistrationOptions & x);

void from_json(const json & j, ConfigurationItem & x);
void to_json(json & j, const ConfigurationItem & x);

void from_json(const json & j, ConfigurationParams & x);
void to_json(json & j, const ConfigurationParams & x);

void from_json(const json & j, CreateFileOptions & x);
void to_json(json & j, const CreateFileOptions & x);

void from_json(const json & j, CreateFile & x);
void to_json(json & j, const CreateFile & x);

void from_json(const json & j, FileCreate & x);
void to_json(json & j, const FileCreate & x);

void from_json(const json & j, CreateFilesParams & x);
void to_json(json & j, const CreateFilesParams & x);

void from_json(const json & j, DeclarationOptions & x);
void to_json(json & j, const DeclarationOptions & x);

void from_json(const json & j, DeclarationParams & x);
void to_json(json & j, const DeclarationParams & x);

void from_json(const json & j, DeclarationRegistrationOptions & x);
void to_json(json & j, const DeclarationRegistrationOptions & x);

void from_json(const json & j, DefinitionOptions & x);
void to_json(json & j, const DefinitionOptions & x);

void from_json(const json & j, DefinitionParams & x);
void to_json(json & j, const DefinitionParams & x);

void from_json(const json & j, DefinitionRegistrationOptions & x);
void to_json(json & j, const DefinitionRegistrationOptions & x);

void from_json(const json & j, DeleteFileOptions & x);
void to_json(json & j, const DeleteFileOptions & x);

void from_json(const json & j, DeleteFile & x);
void to_json(json & j, const DeleteFile & x);

void from_json(const json & j, FileDelete & x);
void to_json(json & j, const FileDelete & x);

void from_json(const json & j, DeleteFilesParams & x);
void to_json(json & j, const DeleteFilesParams & x);

void from_json(const json & j, DiagnosticOptions & x);
void to_json(json & j, const DiagnosticOptions & x);

void from_json(const json & j, DiagnosticRegistrationOptions & x);
void to_json(json & j, const DiagnosticRegistrationOptions & x);

void from_json(const json & j, DiagnosticServerCancellationData & x);
void to_json(json & j, const DiagnosticServerCancellationData & x);

void from_json(const json & j, DidChangeConfigurationParams & x);
void to_json(json & j, const DidChangeConfigurationParams & x);

void from_json(const json & j, ExecutionSummary & x);
void to_json(json & j, const ExecutionSummary & x);

void from_json(const json & j, NotebookCell & x);
void to_json(json & j, const NotebookCell & x);

void from_json(const json & j, NotebookCellArrayChange & x);
void to_json(json & j, const NotebookCellArrayChange & x);

void from_json(const json & j, TextDocumentItem & x);
void to_json(json & j, const TextDocumentItem & x);

void from_json(const json & j, Structure & x);
void to_json(json & j, const Structure & x);

void from_json(const json & j, TextDocumentContentChangeEvent & x);
void to_json(json & j, const TextDocumentContentChangeEvent & x);

void from_json(const json & j, VersionedTextDocumentIdentifier & x);
void to_json(json & j, const VersionedTextDocumentIdentifier & x);

void from_json(const json & j, TextContent & x);
void to_json(json & j, const TextContent & x);

void from_json(const json & j, Cells & x);
void to_json(json & j, const Cells & x);

void from_json(const json & j, NotebookDocumentChangeEvent & x);
void to_json(json & j, const NotebookDocumentChangeEvent & x);

void from_json(const json & j, VersionedNotebookDocumentIdentifier & x);
void to_json(json & j, const VersionedNotebookDocumentIdentifier & x);

void from_json(const json & j, DidChangeNotebookDocumentParams & x);
void to_json(json & j, const DidChangeNotebookDocumentParams & x);

void from_json(const json & j, DidChangeTextDocumentParams & x);
void to_json(json & j, const DidChangeTextDocumentParams & x);

void from_json(const json & j, FileEvent & x);
void to_json(json & j, const FileEvent & x);

void from_json(const json & j, DidChangeWatchedFilesParams & x);
void to_json(json & j, const DidChangeWatchedFilesParams & x);

void from_json(const json & j, WorkspaceFolder & x);
void to_json(json & j, const WorkspaceFolder & x);

void from_json(const json & j, RelativePattern & x);
void to_json(json & j, const RelativePattern & x);

void from_json(const json & j, FileSystemWatcher & x);
void to_json(json & j, const FileSystemWatcher & x);

void from_json(const json & j, DidChangeWatchedFilesRegistrationOptions & x);
void to_json(json & j, const DidChangeWatchedFilesRegistrationOptions & x);

void from_json(const json & j, WorkspaceFoldersChangeEvent & x);
void to_json(json & j, const WorkspaceFoldersChangeEvent & x);

void from_json(const json & j, DidChangeWorkspaceFoldersParams & x);
void to_json(json & j, const DidChangeWorkspaceFoldersParams & x);

void from_json(const json & j, NotebookDocumentIdentifier & x);
void to_json(json & j, const NotebookDocumentIdentifier & x);

void from_json(const json & j, DidCloseNotebookDocumentParams & x);
void to_json(json & j, const DidCloseNotebookDocumentParams & x);

void from_json(const json & j, DidCloseTextDocumentParams & x);
void to_json(json & j, const DidCloseTextDocumentParams & x);

void from_json(const json & j, NotebookDocument & x);
void to_json(json & j, const NotebookDocument & x);

void from_json(const json & j, DidOpenNotebookDocumentParams & x);
void to_json(json & j, const DidOpenNotebookDocumentParams & x);

void from_json(const json & j, DidOpenTextDocumentParams & x);
void to_json(json & j, const DidOpenTextDocumentParams & x);

void from_json(const json & j, DidSaveNotebookDocumentParams & x);
void to_json(json & j, const DidSaveNotebookDocumentParams & x);

void from_json(const json & j, DidSaveTextDocumentParams & x);
void to_json(json & j, const DidSaveTextDocumentParams & x);

void from_json(const json & j, DocumentColorOptionsClass & x);
void to_json(json & j, const DocumentColorOptionsClass & x);

void from_json(const json & j, DocumentColorParams & x);
void to_json(json & j, const DocumentColorParams & x);

void from_json(const json & j, DocumentColorRegistrationOptions & x);
void to_json(json & j, const DocumentColorRegistrationOptions & x);

void from_json(const json & j, DocumentDiagnosticParams & x);
void to_json(json & j, const DocumentDiagnosticParams & x);

void from_json(const json & j, RelatedDocumentValue & x);
void to_json(json & j, const RelatedDocumentValue & x);

void from_json(const json & j, DocumentDiagnosticReport & x);
void to_json(json & j, const DocumentDiagnosticReport & x);

void from_json(const json & j, DocumentDiagnosticReportPartialResult & x);
void to_json(json & j, const DocumentDiagnosticReportPartialResult & x);

void from_json(const json & j, DocumentFormattingOptions & x);
void to_json(json & j, const DocumentFormattingOptions & x);

void from_json(const json & j, FormattingOptions & x);
void to_json(json & j, const FormattingOptions & x);

void from_json(const json & j, DocumentFormattingParams & x);
void to_json(json & j, const DocumentFormattingParams & x);

void from_json(const json & j, DocumentFormattingRegistrationOptions & x);
void to_json(json & j, const DocumentFormattingRegistrationOptions & x);

void from_json(const json & j, DocumentHighlight & x);
void to_json(json & j, const DocumentHighlight & x);

void from_json(const json & j, DocumentHighlightOptions & x);
void to_json(json & j, const DocumentHighlightOptions & x);

void from_json(const json & j, DocumentHighlightParams & x);
void to_json(json & j, const DocumentHighlightParams & x);

void from_json(const json & j, DocumentHighlightRegistrationOptions & x);
void to_json(json & j, const DocumentHighlightRegistrationOptions & x);

void from_json(const json & j, DocumentLink & x);
void to_json(json & j, const DocumentLink & x);

void from_json(const json & j, DocumentLinkOptions & x);
void to_json(json & j, const DocumentLinkOptions & x);

void from_json(const json & j, DocumentLinkParams & x);
void to_json(json & j, const DocumentLinkParams & x);

void from_json(const json & j, DocumentLinkRegistrationOptions & x);
void to_json(json & j, const DocumentLinkRegistrationOptions & x);

void from_json(const json & j, DocumentOnTypeFormattingOptions & x);
void to_json(json & j, const DocumentOnTypeFormattingOptions & x);

void from_json(const json & j, DocumentOnTypeFormattingParams & x);
void to_json(json & j, const DocumentOnTypeFormattingParams & x);

void from_json(const json & j, DocumentOnTypeFormattingRegistrationOptions & x);
void to_json(json & j, const DocumentOnTypeFormattingRegistrationOptions & x);

void from_json(const json & j, DocumentRangeFormattingOptions & x);
void to_json(json & j, const DocumentRangeFormattingOptions & x);

void from_json(const json & j, DocumentRangeFormattingParams & x);
void to_json(json & j, const DocumentRangeFormattingParams & x);

void from_json(const json & j, DocumentRangeFormattingRegistrationOptions & x);
void to_json(json & j, const DocumentRangeFormattingRegistrationOptions & x);

void from_json(const json & j, DocumentSymbol & x);
void to_json(json & j, const DocumentSymbol & x);

void from_json(const json & j, DocumentSymbolOptions & x);
void to_json(json & j, const DocumentSymbolOptions & x);

void from_json(const json & j, DocumentSymbolParams & x);
void to_json(json & j, const DocumentSymbolParams & x);

void from_json(const json & j, DocumentSymbolRegistrationOptions & x);
void to_json(json & j, const DocumentSymbolRegistrationOptions & x);

void from_json(const json & j, ExecuteCommandOptions & x);
void to_json(json & j, const ExecuteCommandOptions & x);

void from_json(const json & j, ExecuteCommandParams & x);
void to_json(json & j, const ExecuteCommandParams & x);

void from_json(const json & j, ExecuteCommandRegistrationOptions & x);
void to_json(json & j, const ExecuteCommandRegistrationOptions & x);

void from_json(const json & j, FileOperationPatternOptions & x);
void to_json(json & j, const FileOperationPatternOptions & x);

void from_json(const json & j, FileOperationPattern & x);
void to_json(json & j, const FileOperationPattern & x);

void from_json(const json & j, FileOperationFilter & x);
void to_json(json & j, const FileOperationFilter & x);

void from_json(const json & j, FileOperationRegistrationOptions & x);
void to_json(json & j, const FileOperationRegistrationOptions & x);

void from_json(const json & j, FileRename & x);
void to_json(json & j, const FileRename & x);

void from_json(const json & j, FoldingRangeClass & x);
void to_json(json & j, const FoldingRangeClass & x);

void from_json(const json & j, FoldingRangeOptionsClass & x);
void to_json(json & j, const FoldingRangeOptionsClass & x);

void from_json(const json & j, FoldingRangeParams & x);
void to_json(json & j, const FoldingRangeParams & x);

void from_json(const json & j, FoldingRangeRegistrationOptions & x);
void to_json(json & j, const FoldingRangeRegistrationOptions & x);

void from_json(const json & j, FullDocumentDiagnosticReport & x);
void to_json(json & j, const FullDocumentDiagnosticReport & x);

void from_json(const json & j, MarkedStringClass & x);
void to_json(json & j, const MarkedStringClass & x);

void from_json(const json & j, ContentsMarkupContent & x);
void to_json(json & j, const ContentsMarkupContent & x);

void from_json(const json & j, Hover & x);
void to_json(json & j, const Hover & x);

void from_json(const json & j, HoverOptions & x);
void to_json(json & j, const HoverOptions & x);

void from_json(const json & j, HoverParams & x);
void to_json(json & j, const HoverParams & x);

void from_json(const json & j, HoverRegistrationOptions & x);
void to_json(json & j, const HoverRegistrationOptions & x);

void from_json(const json & j, ImplementationOptions & x);
void to_json(json & j, const ImplementationOptions & x);

void from_json(const json & j, ImplementationParams & x);
void to_json(json & j, const ImplementationParams & x);

void from_json(const json & j, ImplementationRegistrationOptions & x);
void to_json(json & j, const ImplementationRegistrationOptions & x);

void from_json(const json & j, InitializeError & x);
void to_json(json & j, const InitializeError & x);

void from_json(const json & j, ClientInfo & x);
void to_json(json & j, const ClientInfo & x);

void from_json(const json & j, InitializeParams & x);
void to_json(json & j, const InitializeParams & x);

void from_json(const json & j, CallHierarchyOptions & x);
void to_json(json & j, const CallHierarchyOptions & x);

void from_json(const json & j, DocumentColorOptions & x);
void to_json(json & j, const DocumentColorOptions & x);

void from_json(const json & j, DeclarationRationOptions & x);
void to_json(json & j, const DeclarationRationOptions & x);

void from_json(const json & j, DiagnosticProviderClass & x);
void to_json(json & j, const DiagnosticProviderClass & x);

void from_json(const json & j, FoldingRangeOptions & x);
void to_json(json & j, const FoldingRangeOptions & x);

void from_json(const json & j, ImplementationAtionOptions & x);
void to_json(json & j, const ImplementationAtionOptions & x);

void from_json(const json & j, InlayHintOptions & x);
void to_json(json & j, const InlayHintOptions & x);

void from_json(const json & j, InlineValueOptions & x);
void to_json(json & j, const InlineValueOptions & x);

void from_json(const json & j, LinkedEditingRangeOptions & x);
void to_json(json & j, const LinkedEditingRangeOptions & x);

void from_json(const json & j, MonikerOptions & x);
void to_json(json & j, const MonikerOptions & x);

void from_json(const json & j, Cell & x);
void to_json(json & j, const Cell & x);

void from_json(const json & j, NotebookClass & x);
void to_json(json & j, const NotebookClass & x);

void from_json(const json & j, NotebookSelector & x);
void to_json(json & j, const NotebookSelector & x);

void from_json(const json & j, NotebookDocumentSyncOptions & x);
void to_json(json & j, const NotebookDocumentSyncOptions & x);

void from_json(const json & j, ReferenceOptions & x);
void to_json(json & j, const ReferenceOptions & x);

void from_json(const json & j, RenameOptions & x);
void to_json(json & j, const RenameOptions & x);

void from_json(const json & j, SelectionRangeOptions & x);
void to_json(json & j, const SelectionRangeOptions & x);

void from_json(const json & j, FullClass & x);
void to_json(json & j, const FullClass & x);

void from_json(const json & j, SemanticTokensLegend & x);
void to_json(json & j, const SemanticTokensLegend & x);

void from_json(const json & j, RangeClass & x);
void to_json(json & j, const RangeClass & x);

void from_json(const json & j, SemanticTokensOptions & x);
void to_json(json & j, const SemanticTokensOptions & x);

void from_json(const json & j, SignatureHelpOptions & x);
void to_json(json & j, const SignatureHelpOptions & x);

void from_json(const json & j, TextDocumentSyncOptions & x);
void to_json(json & j, const TextDocumentSyncOptions & x);

void from_json(const json & j, TypeDefinitionTionOptions & x);
void to_json(json & j, const TypeDefinitionTionOptions & x);

void from_json(const json & j, TypeHierarchyOptions & x);
void to_json(json & j, const TypeHierarchyOptions & x);

void from_json(const json & j, ServerFileOperations & x);
void to_json(json & j, const ServerFileOperations & x);

void from_json(const json & j, WorkspaceFoldersServerCapabilities & x);
void to_json(json & j, const WorkspaceFoldersServerCapabilities & x);

void from_json(const json & j, Workspace & x);
void to_json(json & j, const Workspace & x);

void from_json(const json & j, WorkspaceSymbolOptions & x);
void to_json(json & j, const WorkspaceSymbolOptions & x);

void from_json(const json & j, ServerCapabilities & x);
void to_json(json & j, const ServerCapabilities & x);

void from_json(const json & j, ServerInfo & x);
void to_json(json & j, const ServerInfo & x);

void from_json(const json & j, InitializeResult & x);
void to_json(json & j, const InitializeResult & x);

void from_json(const json & j, InitializedParams & x);
void to_json(json & j, const InitializedParams & x);

void from_json(const json & j, InlayHintLabelPart & x);
void to_json(json & j, const InlayHintLabelPart & x);

void from_json(const json & j, InlayHint & x);
void to_json(json & j, const InlayHint & x);

void from_json(const json & j, InlayHintOptionsClass & x);
void to_json(json & j, const InlayHintOptionsClass & x);

void from_json(const json & j, InlayHintParams & x);
void to_json(json & j, const InlayHintParams & x);

void from_json(const json & j, InlayHintRegistrationOptions & x);
void to_json(json & j, const InlayHintRegistrationOptions & x);

void from_json(const json & j, InlineValue & x);
void to_json(json & j, const InlineValue & x);

void from_json(const json & j, InlineValueContext & x);
void to_json(json & j, const InlineValueContext & x);

void from_json(const json & j, InlineValueEvaluatableExpression & x);
void to_json(json & j, const InlineValueEvaluatableExpression & x);

void from_json(const json & j, InlineValueOptionsClass & x);
void to_json(json & j, const InlineValueOptionsClass & x);

void from_json(const json & j, InlineValueParams & x);
void to_json(json & j, const InlineValueParams & x);

void from_json(const json & j, InlineValueRegistrationOptions & x);
void to_json(json & j, const InlineValueRegistrationOptions & x);

void from_json(const json & j, InlineValueText & x);
void to_json(json & j, const InlineValueText & x);

void from_json(const json & j, InlineValueVariableLookup & x);
void to_json(json & j, const InlineValueVariableLookup & x);

void from_json(const json & j, InsertReplaceEdit & x);
void to_json(json & j, const InsertReplaceEdit & x);

void from_json(const json & j, LinkedEditingRangeOptionsClass & x);
void to_json(json & j, const LinkedEditingRangeOptionsClass & x);

void from_json(const json & j, LinkedEditingRangeParams & x);
void to_json(json & j, const LinkedEditingRangeParams & x);

void from_json(const json & j, LinkedEditingRangeRegistrationOptions & x);
void to_json(json & j, const LinkedEditingRangeRegistrationOptions & x);

void from_json(const json & j, LinkedEditingRanges & x);
void to_json(json & j, const LinkedEditingRanges & x);

void from_json(const json & j, LocationLink & x);
void to_json(json & j, const LocationLink & x);

void from_json(const json & j, LogMessageParams & x);
void to_json(json & j, const LogMessageParams & x);

void from_json(const json & j, LogTraceParams & x);
void to_json(json & j, const LogTraceParams & x);

void from_json(const json & j, Message & x);
void to_json(json & j, const Message & x);

void from_json(const json & j, MessageActionItemElement & x);
void to_json(json & j, const MessageActionItemElement & x);

void from_json(const json & j, Moniker & x);
void to_json(json & j, const Moniker & x);

void from_json(const json & j, MonikerOptionsClass & x);
void to_json(json & j, const MonikerOptionsClass & x);

void from_json(const json & j, MonikerParams & x);
void to_json(json & j, const MonikerParams & x);

void from_json(const json & j, MonikerRegistrationOptions & x);
void to_json(json & j, const MonikerRegistrationOptions & x);

void from_json(const json & j, NotebookCellTextDocumentFilter & x);
void to_json(json & j, const NotebookCellTextDocumentFilter & x);

void from_json(const json & j, NotebookDocumentFilter & x);
void to_json(json & j, const NotebookDocumentFilter & x);

void from_json(const json & j, NotebookDocumentSyncOptionsClass & x);
void to_json(json & j, const NotebookDocumentSyncOptionsClass & x);

void from_json(const json & j, NotebookDocumentSyncRegistrationOptions & x);
void to_json(json & j, const NotebookDocumentSyncRegistrationOptions & x);

void from_json(const json & j, NotificationMessage & x);
void to_json(json & j, const NotificationMessage & x);

void from_json(const json & j, ParameterInformationElement & x);
void to_json(json & j, const ParameterInformationElement & x);

void from_json(const json & j, PartialResultParams & x);
void to_json(json & j, const PartialResultParams & x);

void from_json(const json & j, PrepareRenameParams & x);
void to_json(json & j, const PrepareRenameParams & x);

void from_json(const json & j, PreviousResultId & x);
void to_json(json & j, const PreviousResultId & x);

void from_json(const json & j, PublishDiagnosticsParams & x);
void to_json(json & j, const PublishDiagnosticsParams & x);

void from_json(const json & j, ReferenceContext & x);
void to_json(json & j, const ReferenceContext & x);

void from_json(const json & j, ReferenceParams & x);
void to_json(json & j, const ReferenceParams & x);

void from_json(const json & j, ReferenceRegistrationOptions & x);
void to_json(json & j, const ReferenceRegistrationOptions & x);

void from_json(const json & j, Registration & x);
void to_json(json & j, const Registration & x);

void from_json(const json & j, RegistrationParams & x);
void to_json(json & j, const RegistrationParams & x);

void from_json(const json & j, RelatedFullDocumentDiagnosticReport & x);
void to_json(json & j, const RelatedFullDocumentDiagnosticReport & x);

void from_json(const json & j, RelatedUnchangedDocumentDiagnosticReport & x);
void to_json(json & j, const RelatedUnchangedDocumentDiagnosticReport & x);

void from_json(const json & j, RenameFileOptions & x);
void to_json(json & j, const RenameFileOptions & x);

void from_json(const json & j, RenameFile & x);
void to_json(json & j, const RenameFile & x);

void from_json(const json & j, RenameFilesParams & x);
void to_json(json & j, const RenameFilesParams & x);

void from_json(const json & j, RenameParams & x);
void to_json(json & j, const RenameParams & x);

void from_json(const json & j, RenameRegistrationOptions & x);
void to_json(json & j, const RenameRegistrationOptions & x);

void from_json(const json & j, RequestMessage & x);
void to_json(json & j, const RequestMessage & x);

void from_json(const json & j, ResponseError & x);
void to_json(json & j, const ResponseError & x);

void from_json(const json & j, ResponseMessage & x);
void to_json(json & j, const ResponseMessage & x);

void from_json(const json & j, SaveOptions & x);
void to_json(json & j, const SaveOptions & x);

void from_json(const json & j, SelectionRange & x);
void to_json(json & j, const SelectionRange & x);

void from_json(const json & j, SelectionRangeOptionsClass & x);
void to_json(json & j, const SelectionRangeOptionsClass & x);

void from_json(const json & j, SelectionRangeParams & x);
void to_json(json & j, const SelectionRangeParams & x);

void from_json(const json & j, SelectionRangeRegistrationOptions & x);
void to_json(json & j, const SelectionRangeRegistrationOptions & x);

void from_json(const json & j, SemanticTokens & x);
void to_json(json & j, const SemanticTokens & x);

void from_json(const json & j, SemanticTokensEdit & x);
void to_json(json & j, const SemanticTokensEdit & x);

void from_json(const json & j, SemanticTokensDelta & x);
void to_json(json & j, const SemanticTokensDelta & x);

void from_json(const json & j, SemanticTokensDeltaParams & x);
void to_json(json & j, const SemanticTokensDeltaParams & x);

void from_json(const json & j, SemanticTokensDeltaPartialResult & x);
void to_json(json & j, const SemanticTokensDeltaPartialResult & x);

void from_json(const json & j, FullOptionClass & x);
void to_json(json & j, const FullOptionClass & x);

void from_json(const json & j, RangeOptionClass & x);
void to_json(json & j, const RangeOptionClass & x);

void from_json(const json & j, SemanticTokensOptionsClass & x);
void to_json(json & j, const SemanticTokensOptionsClass & x);

void from_json(const json & j, SemanticTokensParams & x);
void to_json(json & j, const SemanticTokensParams & x);

void from_json(const json & j, SemanticTokensPartialResult & x);
void to_json(json & j, const SemanticTokensPartialResult & x);

void from_json(const json & j, SemanticTokensRangeParams & x);
void to_json(json & j, const SemanticTokensRangeParams & x);

void from_json(const json & j, FullRegistrationOptionsClass & x);
void to_json(json & j, const FullRegistrationOptionsClass & x);

void from_json(const json & j, RangeRegistrationOptionClass & x);
void to_json(json & j, const RangeRegistrationOptionClass & x);

void from_json(const json & j, SemanticTokensRegistrationOptions & x);
void to_json(json & j, const SemanticTokensRegistrationOptions & x);

void from_json(const json & j, SetTraceParams & x);
void to_json(json & j, const SetTraceParams & x);

void from_json(const json & j, ShowDocumentParams & x);
void to_json(json & j, const ShowDocumentParams & x);

void from_json(const json & j, ShowDocumentResult & x);
void to_json(json & j, const ShowDocumentResult & x);

void from_json(const json & j, ShowMessageParams & x);
void to_json(json & j, const ShowMessageParams & x);

void from_json(const json & j, ShowMessageRequestParams & x);
void to_json(json & j, const ShowMessageRequestParams & x);

void from_json(const json & j, SignatureInformationElement & x);
void to_json(json & j, const SignatureInformationElement & x);

void from_json(const json & j, SignatureHelp & x);
void to_json(json & j, const SignatureHelp & x);

void from_json(const json & j, SignatureHelpContext & x);
void to_json(json & j, const SignatureHelpContext & x);

void from_json(const json & j, SignatureHelpParams & x);
void to_json(json & j, const SignatureHelpParams & x);

void from_json(const json & j, SignatureHelpRegistrationOptions & x);
void to_json(json & j, const SignatureHelpRegistrationOptions & x);

void from_json(const json & j, StaticRegistrationOptions & x);
void to_json(json & j, const StaticRegistrationOptions & x);

void from_json(const json & j, SymbolInformation & x);
void to_json(json & j, const SymbolInformation & x);

void from_json(const json & j, TextDocumentChangeRegistrationOptions & x);
void to_json(json & j, const TextDocumentChangeRegistrationOptions & x);

void from_json(const json & j, TextDocumentEditClass & x);
void to_json(json & j, const TextDocumentEditClass & x);

void from_json(const json & j, TextDocumentPositionParams & x);
void to_json(json & j, const TextDocumentPositionParams & x);

void from_json(const json & j, TextDocumentRegistrationOptions & x);
void to_json(json & j, const TextDocumentRegistrationOptions & x);

void from_json(const json & j, TextDocumentSaveRegistrationOptions & x);
void to_json(json & j, const TextDocumentSaveRegistrationOptions & x);

void from_json(const json & j, TypeDefinitionOptions & x);
void to_json(json & j, const TypeDefinitionOptions & x);

void from_json(const json & j, TypeDefinitionParams & x);
void to_json(json & j, const TypeDefinitionParams & x);

void from_json(const json & j, TypeDefinitionRegistrationOptions & x);
void to_json(json & j, const TypeDefinitionRegistrationOptions & x);

void from_json(const json & j, TypeHierarchyItem & x);
void to_json(json & j, const TypeHierarchyItem & x);

void from_json(const json & j, TypeHierarchyOptionsClass & x);
void to_json(json & j, const TypeHierarchyOptionsClass & x);

void from_json(const json & j, TypeHierarchyPrepareParams & x);
void to_json(json & j, const TypeHierarchyPrepareParams & x);

void from_json(const json & j, TypeHierarchyRegistrationOptions & x);
void to_json(json & j, const TypeHierarchyRegistrationOptions & x);

void from_json(const json & j, TypeHierarchySubtypesParams & x);
void to_json(json & j, const TypeHierarchySubtypesParams & x);

void from_json(const json & j, TypeHierarchySupertypesParams & x);
void to_json(json & j, const TypeHierarchySupertypesParams & x);

void from_json(const json & j, UnchangedDocumentDiagnosticReport & x);
void to_json(json & j, const UnchangedDocumentDiagnosticReport & x);

void from_json(const json & j, Unregistration & x);
void to_json(json & j, const Unregistration & x);

void from_json(const json & j, UnregistrationParams & x);
void to_json(json & j, const UnregistrationParams & x);

void from_json(const json & j, WillSaveTextDocumentParams & x);
void to_json(json & j, const WillSaveTextDocumentParams & x);

void from_json(const json & j, WorkDoneProgressBegin & x);
void to_json(json & j, const WorkDoneProgressBegin & x);

void from_json(const json & j, WorkDoneProgressCancelParams & x);
void to_json(json & j, const WorkDoneProgressCancelParams & x);

void from_json(const json & j, WorkDoneProgressCreateParams & x);
void to_json(json & j, const WorkDoneProgressCreateParams & x);

void from_json(const json & j, WorkDoneProgressEnd & x);
void to_json(json & j, const WorkDoneProgressEnd & x);

void from_json(const json & j, WorkDoneProgressOptions & x);
void to_json(json & j, const WorkDoneProgressOptions & x);

void from_json(const json & j, WorkDoneProgressParams & x);
void to_json(json & j, const WorkDoneProgressParams & x);

void from_json(const json & j, WorkDoneProgressReport & x);
void to_json(json & j, const WorkDoneProgressReport & x);

void from_json(const json & j, WorkspaceDiagnosticParams & x);
void to_json(json & j, const WorkspaceDiagnosticParams & x);

void from_json(const json & j, WorkspaceDocumentDiagnosticReport & x);
void to_json(json & j, const WorkspaceDocumentDiagnosticReport & x);

void from_json(const json & j, WorkspaceDiagnosticReport & x);
void to_json(json & j, const WorkspaceDiagnosticReport & x);

void from_json(const json & j, WorkspaceDiagnosticReportPartialResult & x);
void to_json(json & j, const WorkspaceDiagnosticReportPartialResult & x);

void from_json(const json & j, WorkspaceFullDocumentDiagnosticReport & x);
void to_json(json & j, const WorkspaceFullDocumentDiagnosticReport & x);

void from_json(const json & j, WorkspaceSymbolLocation & x);
void to_json(json & j, const WorkspaceSymbolLocation & x);

void from_json(const json & j, WorkspaceSymbol & x);
void to_json(json & j, const WorkspaceSymbol & x);

void from_json(const json & j, WorkspaceSymbolParams & x);
void to_json(json & j, const WorkspaceSymbolParams & x);

void from_json(const json & j, WorkspaceSymbolRegistrationOptions & x);
void to_json(json & j, const WorkspaceSymbolRegistrationOptions & x);

void from_json(const json & j, WorkspaceUnchangedDocumentDiagnosticReport & x);
void to_json(json & j, const WorkspaceUnchangedDocumentDiagnosticReport & x);

void from_json(const json & j, ModelsClass & x);
void to_json(json & j, const ModelsClass & x);

void from_json(const json & j, ResourceOperationKind & x);
void to_json(json & j, const ResourceOperationKind & x);

void from_json(const json & j, MarkupKind & x);
void to_json(json & j, const MarkupKind & x);

void from_json(const json & j, TokenFormat & x);
void to_json(json & j, const TokenFormat & x);

void from_json(const json & j, FailureHandlingKind & x);
void to_json(json & j, const FailureHandlingKind & x);

void from_json(const json & j, CreateFileKind & x);
void to_json(json & j, const CreateFileKind & x);

void from_json(const json & j, DeleteFileKind & x);
void to_json(json & j, const DeleteFileKind & x);

void from_json(const json & j, DocumentDiagnosticReportKind & x);
void to_json(json & j, const DocumentDiagnosticReportKind & x);

void from_json(const json & j, FileOperationPatternKind & x);
void to_json(json & j, const FileOperationPatternKind & x);

void from_json(const json & j, FullDocumentDiagnosticReportKind & x);
void to_json(json & j, const FullDocumentDiagnosticReportKind & x);

void from_json(const json & j, TraceValue & x);
void to_json(json & j, const TraceValue & x);

void from_json(const json & j, MonikerKind & x);
void to_json(json & j, const MonikerKind & x);

void from_json(const json & j, UniquenessLevel & x);
void to_json(json & j, const UniquenessLevel & x);

void from_json(const json & j, RelatedUnchangedDocumentDiagnosticReportKind & x);
void to_json(json & j, const RelatedUnchangedDocumentDiagnosticReportKind & x);

void from_json(const json & j, RenameFileKind & x);
void to_json(json & j, const RenameFileKind & x);

void from_json(const json & j, SemanticTokenModifiers & x);
void to_json(json & j, const SemanticTokenModifiers & x);

void from_json(const json & j, SemanticTokenTypes & x);
void to_json(json & j, const SemanticTokenTypes & x);

void from_json(const json & j, WorkDoneProgressBeginKind & x);
void to_json(json & j, const WorkDoneProgressBeginKind & x);

void from_json(const json & j, WorkDoneProgressEndKind & x);
void to_json(json & j, const WorkDoneProgressEndKind & x);

void from_json(const json & j, WorkDoneProgressReportKind & x);
void to_json(json & j, const WorkDoneProgressReportKind & x);
}
namespace nlohmann {
template <>
struct adl_serializer<std::variant<bool, double, int64_t, std::string>> {
    static void from_json(const json & j, std::variant<bool, double, int64_t, std::string> & x);
    static void to_json(json & j, const std::variant<bool, double, int64_t, std::string> & x);
};

template <>
struct adl_serializer<std::variant<int64_t, std::string>> {
    static void from_json(const json & j, std::variant<int64_t, std::string> & x);
    static void to_json(json & j, const std::variant<int64_t, std::string> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::FullCapabilityClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::FullCapabilityClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::FullCapabilityClass> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::RangeCapabilityClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::RangeCapabilityClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::RangeCapabilityClass> & x);
};

template <>
struct adl_serializer<std::variant<lsps::DocumentationMarkupContent, std::string>> {
    static void from_json(const json & j, std::variant<lsps::DocumentationMarkupContent, std::string> & x);
    static void to_json(json & j, const std::variant<lsps::DocumentationMarkupContent, std::string> & x);
};

template <>
struct adl_serializer<std::variant<lsps::WorkspaceFolder, std::string>> {
    static void from_json(const json & j, std::variant<lsps::WorkspaceFolder, std::string> & x);
    static void to_json(json & j, const std::variant<lsps::WorkspaceFolder, std::string> & x);
};

template <>
struct adl_serializer<std::variant<lsps::RelativePattern, std::string>> {
    static void from_json(const json & j, std::variant<lsps::RelativePattern, std::string> & x);
    static void to_json(json & j, const std::variant<lsps::RelativePattern, std::string> & x);
};

template <>
struct adl_serializer<std::variant<lsps::MarkedStringClass, std::string>> {
    static void from_json(const json & j, std::variant<lsps::MarkedStringClass, std::string> & x);
    static void to_json(json & j, const std::variant<lsps::MarkedStringClass, std::string> & x);
};

template <>
struct adl_serializer<std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string>> {
    static void from_json(const json & j, std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string> & x);
    static void to_json(json & j, const std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::CallHierarchyOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::CallHierarchyOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::CallHierarchyOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::CodeActionOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::CodeActionOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::CodeActionOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DocumentColorOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DocumentColorOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DocumentColorOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DeclarationRationOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DeclarationRationOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DeclarationRationOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DefinitionOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DefinitionOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DefinitionOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DocumentFormattingOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DocumentFormattingOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DocumentFormattingOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DocumentHighlightOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DocumentHighlightOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DocumentHighlightOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DocumentRangeFormattingOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DocumentRangeFormattingOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DocumentRangeFormattingOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::DocumentSymbolOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::DocumentSymbolOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::DocumentSymbolOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::FoldingRangeOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::FoldingRangeOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::FoldingRangeOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::HoverOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::HoverOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::HoverOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::ImplementationAtionOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::ImplementationAtionOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::ImplementationAtionOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::InlayHintOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::InlayHintOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::InlayHintOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::InlineValueOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::InlineValueOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::InlineValueOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::LinkedEditingRangeOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::LinkedEditingRangeOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::LinkedEditingRangeOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::MonikerOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::MonikerOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::MonikerOptions> & x);
};

template <>
struct adl_serializer<std::variant<lsps::NotebookClass, std::string>> {
    static void from_json(const json & j, std::variant<lsps::NotebookClass, std::string> & x);
    static void to_json(json & j, const std::variant<lsps::NotebookClass, std::string> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::ReferenceOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::ReferenceOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::ReferenceOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::RenameOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::RenameOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::RenameOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::SelectionRangeOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::SelectionRangeOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::SelectionRangeOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::FullClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::FullClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::FullClass> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::RangeClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::RangeClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::RangeClass> & x);
};

template <>
struct adl_serializer<std::variant<lsps::TextDocumentSyncOptions, double>> {
    static void from_json(const json & j, std::variant<lsps::TextDocumentSyncOptions, double> & x);
    static void to_json(json & j, const std::variant<lsps::TextDocumentSyncOptions, double> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::TypeDefinitionTionOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::TypeDefinitionTionOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::TypeDefinitionTionOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::TypeHierarchyOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::TypeHierarchyOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::TypeHierarchyOptions> & x);
};

template <>
struct adl_serializer<std::variant<bool, std::string>> {
    static void from_json(const json & j, std::variant<bool, std::string> & x);
    static void to_json(json & j, const std::variant<bool, std::string> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::WorkspaceSymbolOptions>> {
    static void from_json(const json & j, std::variant<bool, lsps::WorkspaceSymbolOptions> & x);
    static void to_json(json & j, const std::variant<bool, lsps::WorkspaceSymbolOptions> & x);
};

template <>
struct adl_serializer<std::variant<std::vector<lsps::InlayHintLabelPart>, std::string>> {
    static void from_json(const json & j, std::variant<std::vector<lsps::InlayHintLabelPart>, std::string> & x);
    static void to_json(json & j, const std::variant<std::vector<lsps::InlayHintLabelPart>, std::string> & x);
};

template <>
struct adl_serializer<std::variant<std::vector<json>, std::map<std::string, json>>> {
    static void from_json(const json & j, std::variant<std::vector<json>, std::map<std::string, json>> & x);
    static void to_json(json & j, const std::variant<std::vector<json>, std::map<std::string, json>> & x);
};

template <>
struct adl_serializer<std::variant<std::vector<int64_t>, std::string>> {
    static void from_json(const json & j, std::variant<std::vector<int64_t>, std::string> & x);
    static void to_json(json & j, const std::variant<std::vector<int64_t>, std::string> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::FullOptionClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::FullOptionClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::FullOptionClass> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::RangeOptionClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::RangeOptionClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::RangeOptionClass> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::FullRegistrationOptionsClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::FullRegistrationOptionsClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::FullRegistrationOptionsClass> & x);
};

template <>
struct adl_serializer<std::variant<bool, lsps::RangeRegistrationOptionClass>> {
    static void from_json(const json & j, std::variant<bool, lsps::RangeRegistrationOptionClass> & x);
    static void to_json(json & j, const std::variant<bool, lsps::RangeRegistrationOptionClass> & x);
};

template <>
struct adl_serializer<std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string>> {
    static void from_json(const json & j, std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string> & x);
    static void to_json(json & j, const std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string> & x);
};
}
namespace lsps {
    inline void from_json(const json & j, Position& x) {
        x.set_character(j.at("character").get<int64_t>());
        x.set_line(j.at("line").get<int64_t>());
    }

    inline void to_json(json & j, const Position & x) {
        j = json::object();
        j["character"] = x.get_character();
        j["line"] = x.get_line();
    }

    inline void from_json(const json & j, PurpleRange& x) {
        x.set_end(j.at("end").get<Position>());
        x.set_start(j.at("start").get<Position>());
    }

    inline void to_json(json & j, const PurpleRange & x) {
        j = json::object();
        j["end"] = x.get_end();
        j["start"] = x.get_start();
    }

    inline void from_json(const json & j, AnnotatedTextEdit& x) {
        x.set_annotation_id(j.at("annotationId").get<std::string>());
        x.set_new_text(j.at("newText").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const AnnotatedTextEdit & x) {
        j = json::object();
        j["annotationId"] = x.get_annotation_id();
        j["newText"] = x.get_new_text();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, ChangeAnnotation& x) {
        x.set_description(get_stack_optional<std::string>(j, "description"));
        x.set_label(j.at("label").get<std::string>());
        x.set_needs_confirmation(get_stack_optional<bool>(j, "needsConfirmation"));
    }

    inline void to_json(json & j, const ChangeAnnotation & x) {
        j = json::object();
        j["description"] = x.get_description();
        j["label"] = x.get_label();
        j["needsConfirmation"] = x.get_needs_confirmation();
    }

    inline void from_json(const json & j, TextEdit& x) {
        x.set_new_text(j.at("newText").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const TextEdit & x) {
        j = json::object();
        j["newText"] = x.get_new_text();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, EditElement& x) {
        x.set_new_text(j.at("newText").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_annotation_id(get_stack_optional<std::string>(j, "annotationId"));
    }

    inline void to_json(json & j, const EditElement & x) {
        j = json::object();
        j["newText"] = x.get_new_text();
        j["range"] = x.get_range();
        j["annotationId"] = x.get_annotation_id();
    }

    inline void from_json(const json & j, EFileOptions& x) {
        x.set_ignore_if_exists(get_stack_optional<bool>(j, "ignoreIfExists"));
        x.set_overwrite(get_stack_optional<bool>(j, "overwrite"));
        x.set_ignore_if_not_exists(get_stack_optional<bool>(j, "ignoreIfNotExists"));
        x.set_recursive(get_stack_optional<bool>(j, "recursive"));
    }

    inline void to_json(json & j, const EFileOptions & x) {
        j = json::object();
        j["ignoreIfExists"] = x.get_ignore_if_exists();
        j["overwrite"] = x.get_overwrite();
        j["ignoreIfNotExists"] = x.get_ignore_if_not_exists();
        j["recursive"] = x.get_recursive();
    }

    inline void from_json(const json & j, OptionalVersionedTextDocumentIdentifier& x) {
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(get_stack_optional<int64_t>(j, "version"));
    }

    inline void to_json(json & j, const OptionalVersionedTextDocumentIdentifier & x) {
        j = json::object();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, TextDocumentEdit& x) {
        x.set_edits(get_stack_optional<std::vector<EditElement>>(j, "edits"));
        x.set_text_document(get_stack_optional<OptionalVersionedTextDocumentIdentifier>(j, "textDocument"));
        x.set_annotation_id(get_stack_optional<std::string>(j, "annotationId"));
        x.set_kind(get_stack_optional<ResourceOperationKind>(j, "kind"));
        x.set_options(get_stack_optional<EFileOptions>(j, "options"));
        x.set_uri(get_stack_optional<std::string>(j, "uri"));
        x.set_new_uri(get_stack_optional<std::string>(j, "newUri"));
        x.set_old_uri(get_stack_optional<std::string>(j, "oldUri"));
    }

    inline void to_json(json & j, const TextDocumentEdit & x) {
        j = json::object();
        j["edits"] = x.get_edits();
        j["textDocument"] = x.get_text_document();
        j["annotationId"] = x.get_annotation_id();
        j["kind"] = x.get_kind();
        j["options"] = x.get_options();
        j["uri"] = x.get_uri();
        j["newUri"] = x.get_new_uri();
        j["oldUri"] = x.get_old_uri();
    }

    inline void from_json(const json & j, WorkspaceEdit& x) {
        x.set_change_annotations(get_stack_optional<std::map<std::string, ChangeAnnotation>>(j, "changeAnnotations"));
        x.set_changes(get_stack_optional<std::map<std::string, std::vector<TextEdit>>>(j, "changes"));
        x.set_document_changes(get_stack_optional<std::vector<TextDocumentEdit>>(j, "documentChanges"));
    }

    inline void to_json(json & j, const WorkspaceEdit & x) {
        j = json::object();
        j["changeAnnotations"] = x.get_change_annotations();
        j["changes"] = x.get_changes();
        j["documentChanges"] = x.get_document_changes();
    }

    inline void from_json(const json & j, ApplyWorkspaceEditParams& x) {
        x.set_edit(j.at("edit").get<WorkspaceEdit>());
        x.set_label(get_stack_optional<std::string>(j, "label"));
    }

    inline void to_json(json & j, const ApplyWorkspaceEditParams & x) {
        j = json::object();
        j["edit"] = x.get_edit();
        j["label"] = x.get_label();
    }

    inline void from_json(const json & j, ApplyWorkspaceEditResult& x) {
        x.set_applied(j.at("applied").get<bool>());
        x.set_failed_change(get_stack_optional<int64_t>(j, "failedChange"));
        x.set_failure_reason(get_stack_optional<std::string>(j, "failureReason"));
    }

    inline void to_json(json & j, const ApplyWorkspaceEditResult & x) {
        j = json::object();
        j["applied"] = x.get_applied();
        j["failedChange"] = x.get_failed_change();
        j["failureReason"] = x.get_failure_reason();
    }

    inline void from_json(const json & j, CallHierarchyClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const CallHierarchyClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, CallHierarchyItem& x) {
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_detail(get_stack_optional<std::string>(j, "detail"));
        x.set_kind(j.at("kind").get<double>());
        x.set_name(j.at("name").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_selection_range(j.at("selectionRange").get<PurpleRange>());
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const CallHierarchyItem & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["detail"] = x.get_detail();
        j["kind"] = x.get_kind();
        j["name"] = x.get_name();
        j["range"] = x.get_range();
        j["selectionRange"] = x.get_selection_range();
        j["tags"] = x.get_tags();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, CallHierarchyIncomingCall& x) {
        x.set_from(j.at("from").get<CallHierarchyItem>());
        x.set_from_ranges(j.at("fromRanges").get<std::vector<PurpleRange>>());
    }

    inline void to_json(json & j, const CallHierarchyIncomingCall & x) {
        j = json::object();
        j["from"] = x.get_from();
        j["fromRanges"] = x.get_from_ranges();
    }

    inline void from_json(const json & j, CallHierarchyIncomingCallsParams& x) {
        x.set_item(j.at("item").get<CallHierarchyItem>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CallHierarchyIncomingCallsParams & x) {
        j = json::object();
        j["item"] = x.get_item();
        j["partialResultToken"] = x.get_partial_result_token();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, CallHierarchyOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CallHierarchyOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CallHierarchyOutgoingCall& x) {
        x.set_from_ranges(j.at("fromRanges").get<std::vector<PurpleRange>>());
        x.set_to(j.at("to").get<CallHierarchyItem>());
    }

    inline void to_json(json & j, const CallHierarchyOutgoingCall & x) {
        j = json::object();
        j["fromRanges"] = x.get_from_ranges();
        j["to"] = x.get_to();
    }

    inline void from_json(const json & j, CallHierarchyOutgoingCallsParams& x) {
        x.set_item(j.at("item").get<CallHierarchyItem>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CallHierarchyOutgoingCallsParams & x) {
        j = json::object();
        j["item"] = x.get_item();
        j["partialResultToken"] = x.get_partial_result_token();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, TextDocumentIdentifier& x) {
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const TextDocumentIdentifier & x) {
        j = json::object();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, CallHierarchyPrepareParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CallHierarchyPrepareParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentFilter& x) {
        x.set_language(get_stack_optional<std::string>(j, "language"));
        x.set_pattern(get_stack_optional<std::string>(j, "pattern"));
        x.set_scheme(get_stack_optional<std::string>(j, "scheme"));
    }

    inline void to_json(json & j, const DocumentFilter & x) {
        j = json::object();
        j["language"] = x.get_language();
        j["pattern"] = x.get_pattern();
        j["scheme"] = x.get_scheme();
    }

    inline void from_json(const json & j, CallHierarchyRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CallHierarchyRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CancelParams& x) {
        x.set_id(j.at("id").get<ProgressToken>());
    }

    inline void to_json(json & j, const CancelParams & x) {
        j = json::object();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, MarkdownClientCapabilities& x) {
        x.set_allowed_tags(get_stack_optional<std::vector<std::string>>(j, "allowedTags"));
        x.set_parser(j.at("parser").get<std::string>());
        x.set_version(get_stack_optional<std::string>(j, "version"));
    }

    inline void to_json(json & j, const MarkdownClientCapabilities & x) {
        j = json::object();
        j["allowedTags"] = x.get_allowed_tags();
        j["parser"] = x.get_parser();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, RegularExpressionsClientCapabilities& x) {
        x.set_engine(j.at("engine").get<std::string>());
        x.set_version(get_stack_optional<std::string>(j, "version"));
    }

    inline void to_json(json & j, const RegularExpressionsClientCapabilities & x) {
        j = json::object();
        j["engine"] = x.get_engine();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, StaleRequestSupport& x) {
        x.set_cancel(j.at("cancel").get<bool>());
        x.set_retry_on_content_modified(j.at("retryOnContentModified").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const StaleRequestSupport & x) {
        j = json::object();
        j["cancel"] = x.get_cancel();
        j["retryOnContentModified"] = x.get_retry_on_content_modified();
    }

    inline void from_json(const json & j, General& x) {
        x.set_markdown(get_stack_optional<MarkdownClientCapabilities>(j, "markdown"));
        x.set_position_encodings(get_stack_optional<std::vector<std::string>>(j, "positionEncodings"));
        x.set_regular_expressions(get_stack_optional<RegularExpressionsClientCapabilities>(j, "regularExpressions"));
        x.set_stale_request_support(get_stack_optional<StaleRequestSupport>(j, "staleRequestSupport"));
    }

    inline void to_json(json & j, const General & x) {
        j = json::object();
        j["markdown"] = x.get_markdown();
        j["positionEncodings"] = x.get_position_encodings();
        j["regularExpressions"] = x.get_regular_expressions();
        j["staleRequestSupport"] = x.get_stale_request_support();
    }

    inline void from_json(const json & j, NotebookDocumentSyncClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_execution_summary_support(get_stack_optional<bool>(j, "executionSummarySupport"));
    }

    inline void to_json(json & j, const NotebookDocumentSyncClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["executionSummarySupport"] = x.get_execution_summary_support();
    }

    inline void from_json(const json & j, NotebookDocumentClientCapabilities& x) {
        x.set_synchronization(j.at("synchronization").get<NotebookDocumentSyncClientCapabilities>());
    }

    inline void to_json(json & j, const NotebookDocumentClientCapabilities & x) {
        j = json::object();
        j["synchronization"] = x.get_synchronization();
    }

    inline void from_json(const json & j, CodeActionKind& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const CodeActionKind & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, CodeActionLiteralSupport& x) {
        x.set_code_action_kind(j.at("codeActionKind").get<CodeActionKind>());
    }

    inline void to_json(json & j, const CodeActionLiteralSupport & x) {
        j = json::object();
        j["codeActionKind"] = x.get_code_action_kind();
    }

    inline void from_json(const json & j, CodeActionClientCapabilitiesResolveSupport& x) {
        x.set_properties(j.at("properties").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const CodeActionClientCapabilitiesResolveSupport & x) {
        j = json::object();
        j["properties"] = x.get_properties();
    }

    inline void from_json(const json & j, CodeActionClientCapabilities& x) {
        x.set_code_action_literal_support(get_stack_optional<CodeActionLiteralSupport>(j, "codeActionLiteralSupport"));
        x.set_data_support(get_stack_optional<bool>(j, "dataSupport"));
        x.set_disabled_support(get_stack_optional<bool>(j, "disabledSupport"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_honors_change_annotations(get_stack_optional<bool>(j, "honorsChangeAnnotations"));
        x.set_is_preferred_support(get_stack_optional<bool>(j, "isPreferredSupport"));
        x.set_resolve_support(get_stack_optional<CodeActionClientCapabilitiesResolveSupport>(j, "resolveSupport"));
    }

    inline void to_json(json & j, const CodeActionClientCapabilities & x) {
        j = json::object();
        j["codeActionLiteralSupport"] = x.get_code_action_literal_support();
        j["dataSupport"] = x.get_data_support();
        j["disabledSupport"] = x.get_disabled_support();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["honorsChangeAnnotations"] = x.get_honors_change_annotations();
        j["isPreferredSupport"] = x.get_is_preferred_support();
        j["resolveSupport"] = x.get_resolve_support();
    }

    inline void from_json(const json & j, CodeLensClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const CodeLensClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, DocumentColorClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DocumentColorClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, InsertTextModeSupport& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<double>>());
    }

    inline void to_json(json & j, const InsertTextModeSupport & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, CompletionItemResolveSupport& x) {
        x.set_properties(j.at("properties").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const CompletionItemResolveSupport & x) {
        j = json::object();
        j["properties"] = x.get_properties();
    }

    inline void from_json(const json & j, CompletionItemTagSupport& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<double>>());
    }

    inline void to_json(json & j, const CompletionItemTagSupport & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, CompletionClientCapabilitiesCompletionItem& x) {
        x.set_commit_characters_support(get_stack_optional<bool>(j, "commitCharactersSupport"));
        x.set_deprecated_support(get_stack_optional<bool>(j, "deprecatedSupport"));
        x.set_documentation_format(get_stack_optional<std::vector<MarkupKind>>(j, "documentationFormat"));
        x.set_insert_replace_support(get_stack_optional<bool>(j, "insertReplaceSupport"));
        x.set_insert_text_mode_support(get_stack_optional<InsertTextModeSupport>(j, "insertTextModeSupport"));
        x.set_label_details_support(get_stack_optional<bool>(j, "labelDetailsSupport"));
        x.set_preselect_support(get_stack_optional<bool>(j, "preselectSupport"));
        x.set_resolve_support(get_stack_optional<CompletionItemResolveSupport>(j, "resolveSupport"));
        x.set_snippet_support(get_stack_optional<bool>(j, "snippetSupport"));
        x.set_tag_support(get_stack_optional<CompletionItemTagSupport>(j, "tagSupport"));
    }

    inline void to_json(json & j, const CompletionClientCapabilitiesCompletionItem & x) {
        j = json::object();
        j["commitCharactersSupport"] = x.get_commit_characters_support();
        j["deprecatedSupport"] = x.get_deprecated_support();
        j["documentationFormat"] = x.get_documentation_format();
        j["insertReplaceSupport"] = x.get_insert_replace_support();
        j["insertTextModeSupport"] = x.get_insert_text_mode_support();
        j["labelDetailsSupport"] = x.get_label_details_support();
        j["preselectSupport"] = x.get_preselect_support();
        j["resolveSupport"] = x.get_resolve_support();
        j["snippetSupport"] = x.get_snippet_support();
        j["tagSupport"] = x.get_tag_support();
    }

    inline void from_json(const json & j, CompletionItemKind& x) {
        x.set_value_set(get_stack_optional<std::vector<double>>(j, "valueSet"));
    }

    inline void to_json(json & j, const CompletionItemKind & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, CompletionList& x) {
        x.set_item_defaults(get_stack_optional<std::vector<std::string>>(j, "itemDefaults"));
    }

    inline void to_json(json & j, const CompletionList & x) {
        j = json::object();
        j["itemDefaults"] = x.get_item_defaults();
    }

    inline void from_json(const json & j, CompletionClientCapabilities& x) {
        x.set_completion_item(get_stack_optional<CompletionClientCapabilitiesCompletionItem>(j, "completionItem"));
        x.set_completion_item_kind(get_stack_optional<CompletionItemKind>(j, "completionItemKind"));
        x.set_completion_list(get_stack_optional<CompletionList>(j, "completionList"));
        x.set_context_support(get_stack_optional<bool>(j, "contextSupport"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_insert_text_mode(get_stack_optional<double>(j, "insertTextMode"));
    }

    inline void to_json(json & j, const CompletionClientCapabilities & x) {
        j = json::object();
        j["completionItem"] = x.get_completion_item();
        j["completionItemKind"] = x.get_completion_item_kind();
        j["completionList"] = x.get_completion_list();
        j["contextSupport"] = x.get_context_support();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["insertTextMode"] = x.get_insert_text_mode();
    }

    inline void from_json(const json & j, DeclarationClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_link_support(get_stack_optional<bool>(j, "linkSupport"));
    }

    inline void to_json(json & j, const DeclarationClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["linkSupport"] = x.get_link_support();
    }

    inline void from_json(const json & j, DefinitionClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_link_support(get_stack_optional<bool>(j, "linkSupport"));
    }

    inline void to_json(json & j, const DefinitionClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["linkSupport"] = x.get_link_support();
    }

    inline void from_json(const json & j, DiagnosticClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_related_document_support(get_stack_optional<bool>(j, "relatedDocumentSupport"));
    }

    inline void to_json(json & j, const DiagnosticClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["relatedDocumentSupport"] = x.get_related_document_support();
    }

    inline void from_json(const json & j, DocumentHighlightClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DocumentHighlightClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, DocumentLinkClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_tooltip_support(get_stack_optional<bool>(j, "tooltipSupport"));
    }

    inline void to_json(json & j, const DocumentLinkClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["tooltipSupport"] = x.get_tooltip_support();
    }

    inline void from_json(const json & j, DocumentSymbolClientCapabilitiesSymbolKind& x) {
        x.set_value_set(get_stack_optional<std::vector<double>>(j, "valueSet"));
    }

    inline void to_json(json & j, const DocumentSymbolClientCapabilitiesSymbolKind & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, DocumentSymbolClientCapabilitiesTagSupport& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<double>>());
    }

    inline void to_json(json & j, const DocumentSymbolClientCapabilitiesTagSupport & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, DocumentSymbolClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_hierarchical_document_symbol_support(get_stack_optional<bool>(j, "hierarchicalDocumentSymbolSupport"));
        x.set_label_support(get_stack_optional<bool>(j, "labelSupport"));
        x.set_symbol_kind(get_stack_optional<DocumentSymbolClientCapabilitiesSymbolKind>(j, "symbolKind"));
        x.set_tag_support(get_stack_optional<DocumentSymbolClientCapabilitiesTagSupport>(j, "tagSupport"));
    }

    inline void to_json(json & j, const DocumentSymbolClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["hierarchicalDocumentSymbolSupport"] = x.get_hierarchical_document_symbol_support();
        j["labelSupport"] = x.get_label_support();
        j["symbolKind"] = x.get_symbol_kind();
        j["tagSupport"] = x.get_tag_support();
    }

    inline void from_json(const json & j, FoldingRange& x) {
        x.set_collapsed_text(get_stack_optional<bool>(j, "collapsedText"));
    }

    inline void to_json(json & j, const FoldingRange & x) {
        j = json::object();
        j["collapsedText"] = x.get_collapsed_text();
    }

    inline void from_json(const json & j, FoldingRangeKind& x) {
        x.set_value_set(get_stack_optional<std::vector<std::string>>(j, "valueSet"));
    }

    inline void to_json(json & j, const FoldingRangeKind & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, FoldingRangeClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_folding_range(get_stack_optional<FoldingRange>(j, "foldingRange"));
        x.set_folding_range_kind(get_stack_optional<FoldingRangeKind>(j, "foldingRangeKind"));
        x.set_line_folding_only(get_stack_optional<bool>(j, "lineFoldingOnly"));
        x.set_range_limit(get_stack_optional<int64_t>(j, "rangeLimit"));
    }

    inline void to_json(json & j, const FoldingRangeClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["foldingRange"] = x.get_folding_range();
        j["foldingRangeKind"] = x.get_folding_range_kind();
        j["lineFoldingOnly"] = x.get_line_folding_only();
        j["rangeLimit"] = x.get_range_limit();
    }

    inline void from_json(const json & j, DocumentFormattingClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DocumentFormattingClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, HoverClientCapabilities& x) {
        x.set_content_format(get_stack_optional<std::vector<MarkupKind>>(j, "contentFormat"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const HoverClientCapabilities & x) {
        j = json::object();
        j["contentFormat"] = x.get_content_format();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, ImplementationClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_link_support(get_stack_optional<bool>(j, "linkSupport"));
    }

    inline void to_json(json & j, const ImplementationClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["linkSupport"] = x.get_link_support();
    }

    inline void from_json(const json & j, InlayHintClientCapabilitiesResolveSupport& x) {
        x.set_properties(j.at("properties").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const InlayHintClientCapabilitiesResolveSupport & x) {
        j = json::object();
        j["properties"] = x.get_properties();
    }

    inline void from_json(const json & j, InlayHintClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_resolve_support(get_stack_optional<InlayHintClientCapabilitiesResolveSupport>(j, "resolveSupport"));
    }

    inline void to_json(json & j, const InlayHintClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["resolveSupport"] = x.get_resolve_support();
    }

    inline void from_json(const json & j, InlineValueClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const InlineValueClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, LinkedEditingRangeClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const LinkedEditingRangeClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, MonikerClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const MonikerClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, DocumentOnTypeFormattingClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DocumentOnTypeFormattingClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, PublishDiagnosticsClientCapabilitiesTagSupport& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<double>>());
    }

    inline void to_json(json & j, const PublishDiagnosticsClientCapabilitiesTagSupport & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, PublishDiagnosticsClientCapabilities& x) {
        x.set_code_description_support(get_stack_optional<bool>(j, "codeDescriptionSupport"));
        x.set_data_support(get_stack_optional<bool>(j, "dataSupport"));
        x.set_related_information(get_stack_optional<bool>(j, "relatedInformation"));
        x.set_tag_support(get_stack_optional<PublishDiagnosticsClientCapabilitiesTagSupport>(j, "tagSupport"));
        x.set_version_support(get_stack_optional<bool>(j, "versionSupport"));
    }

    inline void to_json(json & j, const PublishDiagnosticsClientCapabilities & x) {
        j = json::object();
        j["codeDescriptionSupport"] = x.get_code_description_support();
        j["dataSupport"] = x.get_data_support();
        j["relatedInformation"] = x.get_related_information();
        j["tagSupport"] = x.get_tag_support();
        j["versionSupport"] = x.get_version_support();
    }

    inline void from_json(const json & j, DocumentRangeFormattingClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DocumentRangeFormattingClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, ReferenceClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const ReferenceClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, RenameClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_honors_change_annotations(get_stack_optional<bool>(j, "honorsChangeAnnotations"));
        x.set_prepare_support(get_stack_optional<bool>(j, "prepareSupport"));
        x.set_prepare_support_default_behavior(get_stack_optional<double>(j, "prepareSupportDefaultBehavior"));
    }

    inline void to_json(json & j, const RenameClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["honorsChangeAnnotations"] = x.get_honors_change_annotations();
        j["prepareSupport"] = x.get_prepare_support();
        j["prepareSupportDefaultBehavior"] = x.get_prepare_support_default_behavior();
    }

    inline void from_json(const json & j, SelectionRangeClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const SelectionRangeClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, FullCapabilityClass& x) {
        x.set_delta(get_stack_optional<bool>(j, "delta"));
    }

    inline void to_json(json & j, const FullCapabilityClass & x) {
        j = json::object();
        j["delta"] = x.get_delta();
    }

    inline void from_json(const json & j, RangeCapabilityClass& x) {
    }

    inline void to_json(json & j, const RangeCapabilityClass & x) {
        j = json::object();
    }

    inline void from_json(const json & j, Requests& x) {
        x.set_full(get_stack_optional<std::variant<bool, FullCapabilityClass>>(j, "full"));
        x.set_range(get_stack_optional<std::variant<bool, RangeCapabilityClass>>(j, "range"));
    }

    inline void to_json(json & j, const Requests & x) {
        j = json::object();
        j["full"] = x.get_full();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, SemanticTokensClientCapabilities& x) {
        x.set_augments_syntax_tokens(get_stack_optional<bool>(j, "augmentsSyntaxTokens"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_formats(j.at("formats").get<std::vector<TokenFormat>>());
        x.set_multiline_token_support(get_stack_optional<bool>(j, "multilineTokenSupport"));
        x.set_overlapping_token_support(get_stack_optional<bool>(j, "overlappingTokenSupport"));
        x.set_requests(j.at("requests").get<Requests>());
        x.set_server_cancel_support(get_stack_optional<bool>(j, "serverCancelSupport"));
        x.set_token_modifiers(j.at("tokenModifiers").get<std::vector<std::string>>());
        x.set_token_types(j.at("tokenTypes").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const SemanticTokensClientCapabilities & x) {
        j = json::object();
        j["augmentsSyntaxTokens"] = x.get_augments_syntax_tokens();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["formats"] = x.get_formats();
        j["multilineTokenSupport"] = x.get_multiline_token_support();
        j["overlappingTokenSupport"] = x.get_overlapping_token_support();
        j["requests"] = x.get_requests();
        j["serverCancelSupport"] = x.get_server_cancel_support();
        j["tokenModifiers"] = x.get_token_modifiers();
        j["tokenTypes"] = x.get_token_types();
    }

    inline void from_json(const json & j, ParameterInformation& x) {
        x.set_label_offset_support(get_stack_optional<bool>(j, "labelOffsetSupport"));
    }

    inline void to_json(json & j, const ParameterInformation & x) {
        j = json::object();
        j["labelOffsetSupport"] = x.get_label_offset_support();
    }

    inline void from_json(const json & j, SignatureInformation& x) {
        x.set_active_parameter_support(get_stack_optional<bool>(j, "activeParameterSupport"));
        x.set_documentation_format(get_stack_optional<std::vector<MarkupKind>>(j, "documentationFormat"));
        x.set_parameter_information(get_stack_optional<ParameterInformation>(j, "parameterInformation"));
    }

    inline void to_json(json & j, const SignatureInformation & x) {
        j = json::object();
        j["activeParameterSupport"] = x.get_active_parameter_support();
        j["documentationFormat"] = x.get_documentation_format();
        j["parameterInformation"] = x.get_parameter_information();
    }

    inline void from_json(const json & j, SignatureHelpClientCapabilities& x) {
        x.set_context_support(get_stack_optional<bool>(j, "contextSupport"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_signature_information(get_stack_optional<SignatureInformation>(j, "signatureInformation"));
    }

    inline void to_json(json & j, const SignatureHelpClientCapabilities & x) {
        j = json::object();
        j["contextSupport"] = x.get_context_support();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["signatureInformation"] = x.get_signature_information();
    }

    inline void from_json(const json & j, TextDocumentSyncClientCapabilities& x) {
        x.set_did_save(get_stack_optional<bool>(j, "didSave"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_will_save(get_stack_optional<bool>(j, "willSave"));
        x.set_will_save_wait_until(get_stack_optional<bool>(j, "willSaveWaitUntil"));
    }

    inline void to_json(json & j, const TextDocumentSyncClientCapabilities & x) {
        j = json::object();
        j["didSave"] = x.get_did_save();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["willSave"] = x.get_will_save();
        j["willSaveWaitUntil"] = x.get_will_save_wait_until();
    }

    inline void from_json(const json & j, TypeDefinitionClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_link_support(get_stack_optional<bool>(j, "linkSupport"));
    }

    inline void to_json(json & j, const TypeDefinitionClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["linkSupport"] = x.get_link_support();
    }

    inline void from_json(const json & j, TypeHierarchyClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const TypeHierarchyClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, TextDocumentClientCapabilities& x) {
        x.set_call_hierarchy(get_stack_optional<CallHierarchyClientCapabilities>(j, "callHierarchy"));
        x.set_code_action(get_stack_optional<CodeActionClientCapabilities>(j, "codeAction"));
        x.set_code_lens(get_stack_optional<CodeLensClientCapabilities>(j, "codeLens"));
        x.set_color_provider(get_stack_optional<DocumentColorClientCapabilities>(j, "colorProvider"));
        x.set_completion(get_stack_optional<CompletionClientCapabilities>(j, "completion"));
        x.set_declaration(get_stack_optional<DeclarationClientCapabilities>(j, "declaration"));
        x.set_definition(get_stack_optional<DefinitionClientCapabilities>(j, "definition"));
        x.set_diagnostic(get_stack_optional<DiagnosticClientCapabilities>(j, "diagnostic"));
        x.set_document_highlight(get_stack_optional<DocumentHighlightClientCapabilities>(j, "documentHighlight"));
        x.set_document_link(get_stack_optional<DocumentLinkClientCapabilities>(j, "documentLink"));
        x.set_document_symbol(get_stack_optional<DocumentSymbolClientCapabilities>(j, "documentSymbol"));
        x.set_folding_range(get_stack_optional<FoldingRangeClientCapabilities>(j, "foldingRange"));
        x.set_formatting(get_stack_optional<DocumentFormattingClientCapabilities>(j, "formatting"));
        x.set_hover(get_stack_optional<HoverClientCapabilities>(j, "hover"));
        x.set_implementation(get_stack_optional<ImplementationClientCapabilities>(j, "implementation"));
        x.set_inlay_hint(get_stack_optional<InlayHintClientCapabilities>(j, "inlayHint"));
        x.set_inline_value(get_stack_optional<InlineValueClientCapabilities>(j, "inlineValue"));
        x.set_linked_editing_range(get_stack_optional<LinkedEditingRangeClientCapabilities>(j, "linkedEditingRange"));
        x.set_moniker(get_stack_optional<MonikerClientCapabilities>(j, "moniker"));
        x.set_on_type_formatting(get_stack_optional<DocumentOnTypeFormattingClientCapabilities>(j, "onTypeFormatting"));
        x.set_publish_diagnostics(get_stack_optional<PublishDiagnosticsClientCapabilities>(j, "publishDiagnostics"));
        x.set_range_formatting(get_stack_optional<DocumentRangeFormattingClientCapabilities>(j, "rangeFormatting"));
        x.set_references(get_stack_optional<ReferenceClientCapabilities>(j, "references"));
        x.set_rename(get_stack_optional<RenameClientCapabilities>(j, "rename"));
        x.set_selection_range(get_stack_optional<SelectionRangeClientCapabilities>(j, "selectionRange"));
        x.set_semantic_tokens(get_stack_optional<SemanticTokensClientCapabilities>(j, "semanticTokens"));
        x.set_signature_help(get_stack_optional<SignatureHelpClientCapabilities>(j, "signatureHelp"));
        x.set_synchronization(get_stack_optional<TextDocumentSyncClientCapabilities>(j, "synchronization"));
        x.set_type_definition(get_stack_optional<TypeDefinitionClientCapabilities>(j, "typeDefinition"));
        x.set_type_hierarchy(get_stack_optional<TypeHierarchyClientCapabilities>(j, "typeHierarchy"));
    }

    inline void to_json(json & j, const TextDocumentClientCapabilities & x) {
        j = json::object();
        j["callHierarchy"] = x.get_call_hierarchy();
        j["codeAction"] = x.get_code_action();
        j["codeLens"] = x.get_code_lens();
        j["colorProvider"] = x.get_color_provider();
        j["completion"] = x.get_completion();
        j["declaration"] = x.get_declaration();
        j["definition"] = x.get_definition();
        j["diagnostic"] = x.get_diagnostic();
        j["documentHighlight"] = x.get_document_highlight();
        j["documentLink"] = x.get_document_link();
        j["documentSymbol"] = x.get_document_symbol();
        j["foldingRange"] = x.get_folding_range();
        j["formatting"] = x.get_formatting();
        j["hover"] = x.get_hover();
        j["implementation"] = x.get_implementation();
        j["inlayHint"] = x.get_inlay_hint();
        j["inlineValue"] = x.get_inline_value();
        j["linkedEditingRange"] = x.get_linked_editing_range();
        j["moniker"] = x.get_moniker();
        j["onTypeFormatting"] = x.get_on_type_formatting();
        j["publishDiagnostics"] = x.get_publish_diagnostics();
        j["rangeFormatting"] = x.get_range_formatting();
        j["references"] = x.get_references();
        j["rename"] = x.get_rename();
        j["selectionRange"] = x.get_selection_range();
        j["semanticTokens"] = x.get_semantic_tokens();
        j["signatureHelp"] = x.get_signature_help();
        j["synchronization"] = x.get_synchronization();
        j["typeDefinition"] = x.get_type_definition();
        j["typeHierarchy"] = x.get_type_hierarchy();
    }

    inline void from_json(const json & j, ShowDocumentClientCapabilities& x) {
        x.set_support(j.at("support").get<bool>());
    }

    inline void to_json(json & j, const ShowDocumentClientCapabilities & x) {
        j = json::object();
        j["support"] = x.get_support();
    }

    inline void from_json(const json & j, MessageActionItem& x) {
        x.set_additional_properties_support(get_stack_optional<bool>(j, "additionalPropertiesSupport"));
    }

    inline void to_json(json & j, const MessageActionItem & x) {
        j = json::object();
        j["additionalPropertiesSupport"] = x.get_additional_properties_support();
    }

    inline void from_json(const json & j, ShowMessageRequestClientCapabilities& x) {
        x.set_message_action_item(get_stack_optional<MessageActionItem>(j, "messageActionItem"));
    }

    inline void to_json(json & j, const ShowMessageRequestClientCapabilities & x) {
        j = json::object();
        j["messageActionItem"] = x.get_message_action_item();
    }

    inline void from_json(const json & j, Window& x) {
        x.set_show_document(get_stack_optional<ShowDocumentClientCapabilities>(j, "showDocument"));
        x.set_show_message(get_stack_optional<ShowMessageRequestClientCapabilities>(j, "showMessage"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const Window & x) {
        j = json::object();
        j["showDocument"] = x.get_show_document();
        j["showMessage"] = x.get_show_message();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CodeLensWorkspaceClientCapabilities& x) {
        x.set_refresh_support(get_stack_optional<bool>(j, "refreshSupport"));
    }

    inline void to_json(json & j, const CodeLensWorkspaceClientCapabilities & x) {
        j = json::object();
        j["refreshSupport"] = x.get_refresh_support();
    }

    inline void from_json(const json & j, DiagnosticWorkspaceClientCapabilities& x) {
        x.set_refresh_support(get_stack_optional<bool>(j, "refreshSupport"));
    }

    inline void to_json(json & j, const DiagnosticWorkspaceClientCapabilities & x) {
        j = json::object();
        j["refreshSupport"] = x.get_refresh_support();
    }

    inline void from_json(const json & j, DidChangeConfigurationClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const DidChangeConfigurationClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, DidChangeWatchedFilesClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_relative_pattern_support(get_stack_optional<bool>(j, "relativePatternSupport"));
    }

    inline void to_json(json & j, const DidChangeWatchedFilesClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["relativePatternSupport"] = x.get_relative_pattern_support();
    }

    inline void from_json(const json & j, ExecuteCommandClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
    }

    inline void to_json(json & j, const ExecuteCommandClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
    }

    inline void from_json(const json & j, ClientFileOperations& x) {
        x.set_did_create(get_stack_optional<bool>(j, "didCreate"));
        x.set_did_delete(get_stack_optional<bool>(j, "didDelete"));
        x.set_did_rename(get_stack_optional<bool>(j, "didRename"));
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_will_create(get_stack_optional<bool>(j, "willCreate"));
        x.set_will_delete(get_stack_optional<bool>(j, "willDelete"));
        x.set_will_rename(get_stack_optional<bool>(j, "willRename"));
    }

    inline void to_json(json & j, const ClientFileOperations & x) {
        j = json::object();
        j["didCreate"] = x.get_did_create();
        j["didDelete"] = x.get_did_delete();
        j["didRename"] = x.get_did_rename();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["willCreate"] = x.get_will_create();
        j["willDelete"] = x.get_will_delete();
        j["willRename"] = x.get_will_rename();
    }

    inline void from_json(const json & j, InlayHintWorkspaceClientCapabilities& x) {
        x.set_refresh_support(get_stack_optional<bool>(j, "refreshSupport"));
    }

    inline void to_json(json & j, const InlayHintWorkspaceClientCapabilities & x) {
        j = json::object();
        j["refreshSupport"] = x.get_refresh_support();
    }

    inline void from_json(const json & j, InlineValueWorkspaceClientCapabilities& x) {
        x.set_refresh_support(get_stack_optional<bool>(j, "refreshSupport"));
    }

    inline void to_json(json & j, const InlineValueWorkspaceClientCapabilities & x) {
        j = json::object();
        j["refreshSupport"] = x.get_refresh_support();
    }

    inline void from_json(const json & j, SemanticTokensWorkspaceClientCapabilities& x) {
        x.set_refresh_support(get_stack_optional<bool>(j, "refreshSupport"));
    }

    inline void to_json(json & j, const SemanticTokensWorkspaceClientCapabilities & x) {
        j = json::object();
        j["refreshSupport"] = x.get_refresh_support();
    }

    inline void from_json(const json & j, WorkspaceSymbolClientCapabilitiesResolveSupport& x) {
        x.set_properties(j.at("properties").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const WorkspaceSymbolClientCapabilitiesResolveSupport & x) {
        j = json::object();
        j["properties"] = x.get_properties();
    }

    inline void from_json(const json & j, WorkspaceSymbolClientCapabilitiesSymbolKind& x) {
        x.set_value_set(get_stack_optional<std::vector<double>>(j, "valueSet"));
    }

    inline void to_json(json & j, const WorkspaceSymbolClientCapabilitiesSymbolKind & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, WorkspaceSymbolClientCapabilitiesTagSupport& x) {
        x.set_value_set(j.at("valueSet").get<std::vector<double>>());
    }

    inline void to_json(json & j, const WorkspaceSymbolClientCapabilitiesTagSupport & x) {
        j = json::object();
        j["valueSet"] = x.get_value_set();
    }

    inline void from_json(const json & j, WorkspaceSymbolClientCapabilities& x) {
        x.set_dynamic_registration(get_stack_optional<bool>(j, "dynamicRegistration"));
        x.set_resolve_support(get_stack_optional<WorkspaceSymbolClientCapabilitiesResolveSupport>(j, "resolveSupport"));
        x.set_symbol_kind(get_stack_optional<WorkspaceSymbolClientCapabilitiesSymbolKind>(j, "symbolKind"));
        x.set_tag_support(get_stack_optional<WorkspaceSymbolClientCapabilitiesTagSupport>(j, "tagSupport"));
    }

    inline void to_json(json & j, const WorkspaceSymbolClientCapabilities & x) {
        j = json::object();
        j["dynamicRegistration"] = x.get_dynamic_registration();
        j["resolveSupport"] = x.get_resolve_support();
        j["symbolKind"] = x.get_symbol_kind();
        j["tagSupport"] = x.get_tag_support();
    }

    inline void from_json(const json & j, ChangeAnnotationSupport& x) {
        x.set_groups_on_label(get_stack_optional<bool>(j, "groupsOnLabel"));
    }

    inline void to_json(json & j, const ChangeAnnotationSupport & x) {
        j = json::object();
        j["groupsOnLabel"] = x.get_groups_on_label();
    }

    inline void from_json(const json & j, WorkspaceEditClientCapabilities& x) {
        x.set_change_annotation_support(get_stack_optional<ChangeAnnotationSupport>(j, "changeAnnotationSupport"));
        x.set_document_changes(get_stack_optional<bool>(j, "documentChanges"));
        x.set_failure_handling(get_stack_optional<FailureHandlingKind>(j, "failureHandling"));
        x.set_normalizes_line_endings(get_stack_optional<bool>(j, "normalizesLineEndings"));
        x.set_resource_operations(get_stack_optional<std::vector<ResourceOperationKind>>(j, "resourceOperations"));
    }

    inline void to_json(json & j, const WorkspaceEditClientCapabilities & x) {
        j = json::object();
        j["changeAnnotationSupport"] = x.get_change_annotation_support();
        j["documentChanges"] = x.get_document_changes();
        j["failureHandling"] = x.get_failure_handling();
        j["normalizesLineEndings"] = x.get_normalizes_line_endings();
        j["resourceOperations"] = x.get_resource_operations();
    }

    inline void from_json(const json & j, Empty& x) {
        x.set_apply_edit(get_stack_optional<bool>(j, "applyEdit"));
        x.set_code_lens(get_stack_optional<CodeLensWorkspaceClientCapabilities>(j, "codeLens"));
        x.set_configuration(get_stack_optional<bool>(j, "configuration"));
        x.set_diagnostics(get_stack_optional<DiagnosticWorkspaceClientCapabilities>(j, "diagnostics"));
        x.set_did_change_configuration(get_stack_optional<DidChangeConfigurationClientCapabilities>(j, "didChangeConfiguration"));
        x.set_did_change_watched_files(get_stack_optional<DidChangeWatchedFilesClientCapabilities>(j, "didChangeWatchedFiles"));
        x.set_execute_command(get_stack_optional<ExecuteCommandClientCapabilities>(j, "executeCommand"));
        x.set_file_operations(get_stack_optional<ClientFileOperations>(j, "fileOperations"));
        x.set_inlay_hint(get_stack_optional<InlayHintWorkspaceClientCapabilities>(j, "inlayHint"));
        x.set_inline_value(get_stack_optional<InlineValueWorkspaceClientCapabilities>(j, "inlineValue"));
        x.set_semantic_tokens(get_stack_optional<SemanticTokensWorkspaceClientCapabilities>(j, "semanticTokens"));
        x.set_symbol(get_stack_optional<WorkspaceSymbolClientCapabilities>(j, "symbol"));
        x.set_workspace_edit(get_stack_optional<WorkspaceEditClientCapabilities>(j, "workspaceEdit"));
        x.set_workspace_folders(get_stack_optional<bool>(j, "workspaceFolders"));
    }

    inline void to_json(json & j, const Empty & x) {
        j = json::object();
        j["applyEdit"] = x.get_apply_edit();
        j["codeLens"] = x.get_code_lens();
        j["configuration"] = x.get_configuration();
        j["diagnostics"] = x.get_diagnostics();
        j["didChangeConfiguration"] = x.get_did_change_configuration();
        j["didChangeWatchedFiles"] = x.get_did_change_watched_files();
        j["executeCommand"] = x.get_execute_command();
        j["fileOperations"] = x.get_file_operations();
        j["inlayHint"] = x.get_inlay_hint();
        j["inlineValue"] = x.get_inline_value();
        j["semanticTokens"] = x.get_semantic_tokens();
        j["symbol"] = x.get_symbol();
        j["workspaceEdit"] = x.get_workspace_edit();
        j["workspaceFolders"] = x.get_workspace_folders();
    }

    inline void from_json(const json & j, ClientCapabilities& x) {
        x.set_experimental(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "experimental"));
        x.set_general(get_stack_optional<General>(j, "general"));
        x.set_notebook_document(get_stack_optional<NotebookDocumentClientCapabilities>(j, "notebookDocument"));
        x.set_text_document(get_stack_optional<TextDocumentClientCapabilities>(j, "textDocument"));
        x.set_window(get_stack_optional<Window>(j, "window"));
        x.set_workspace(get_stack_optional<Empty>(j, "workspace"));
    }

    inline void to_json(json & j, const ClientCapabilities & x) {
        j = json::object();
        j["experimental"] = x.get_experimental();
        j["general"] = x.get_general();
        j["notebookDocument"] = x.get_notebook_document();
        j["textDocument"] = x.get_text_document();
        j["window"] = x.get_window();
        j["workspace"] = x.get_workspace();
    }

    inline void from_json(const json & j, Command& x) {
        x.set_arguments(get_stack_optional<std::vector<LspAny>>(j, "arguments"));
        x.set_command(j.at("command").get<std::string>());
        x.set_title(j.at("title").get<std::string>());
    }

    inline void to_json(json & j, const Command & x) {
        j = json::object();
        j["arguments"] = x.get_arguments();
        j["command"] = x.get_command();
        j["title"] = x.get_title();
    }

    inline void from_json(const json & j, CodeDescription& x) {
        x.set_href(j.at("href").get<std::string>());
    }

    inline void to_json(json & j, const CodeDescription & x) {
        j = json::object();
        j["href"] = x.get_href();
    }

    inline void from_json(const json & j, LocationClass& x) {
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const LocationClass & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, DiagnosticRelatedInformation& x) {
        x.set_location(j.at("location").get<LocationClass>());
        x.set_message(j.at("message").get<std::string>());
    }

    inline void to_json(json & j, const DiagnosticRelatedInformation & x) {
        j = json::object();
        j["location"] = x.get_location();
        j["message"] = x.get_message();
    }

    inline void from_json(const json & j, Diagnostic& x) {
        x.set_code(get_stack_optional<std::variant<int64_t, std::string>>(j, "code"));
        x.set_code_description(get_stack_optional<CodeDescription>(j, "codeDescription"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_message(j.at("message").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_related_information(get_stack_optional<std::vector<DiagnosticRelatedInformation>>(j, "relatedInformation"));
        x.set_severity(get_stack_optional<double>(j, "severity"));
        x.set_source(get_stack_optional<std::string>(j, "source"));
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
    }

    inline void to_json(json & j, const Diagnostic & x) {
        j = json::object();
        j["code"] = x.get_code();
        j["codeDescription"] = x.get_code_description();
        j["data"] = x.get_data();
        j["message"] = x.get_message();
        j["range"] = x.get_range();
        j["relatedInformation"] = x.get_related_information();
        j["severity"] = x.get_severity();
        j["source"] = x.get_source();
        j["tags"] = x.get_tags();
    }

    inline void from_json(const json & j, Disabled& x) {
        x.set_reason(j.at("reason").get<std::string>());
    }

    inline void to_json(json & j, const Disabled & x) {
        j = json::object();
        j["reason"] = x.get_reason();
    }

    inline void from_json(const json & j, CodeAction& x) {
        x.set_command(get_stack_optional<Command>(j, "command"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_diagnostics(get_stack_optional<std::vector<Diagnostic>>(j, "diagnostics"));
        x.set_disabled(get_stack_optional<Disabled>(j, "disabled"));
        x.set_edit(get_stack_optional<WorkspaceEdit>(j, "edit"));
        x.set_is_preferred(get_stack_optional<bool>(j, "isPreferred"));
        x.set_kind(get_stack_optional<std::string>(j, "kind"));
        x.set_title(j.at("title").get<std::string>());
    }

    inline void to_json(json & j, const CodeAction & x) {
        j = json::object();
        j["command"] = x.get_command();
        j["data"] = x.get_data();
        j["diagnostics"] = x.get_diagnostics();
        j["disabled"] = x.get_disabled();
        j["edit"] = x.get_edit();
        j["isPreferred"] = x.get_is_preferred();
        j["kind"] = x.get_kind();
        j["title"] = x.get_title();
    }

    inline void from_json(const json & j, CodeActionContext& x) {
        x.set_diagnostics(j.at("diagnostics").get<std::vector<Diagnostic>>());
        x.set_only(get_stack_optional<std::vector<std::string>>(j, "only"));
        x.set_trigger_kind(get_stack_optional<double>(j, "triggerKind"));
    }

    inline void to_json(json & j, const CodeActionContext & x) {
        j = json::object();
        j["diagnostics"] = x.get_diagnostics();
        j["only"] = x.get_only();
        j["triggerKind"] = x.get_trigger_kind();
    }

    inline void from_json(const json & j, CodeActionOptions& x) {
        x.set_code_action_kinds(get_stack_optional<std::vector<std::string>>(j, "codeActionKinds"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CodeActionOptions & x) {
        j = json::object();
        j["codeActionKinds"] = x.get_code_action_kinds();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CodeActionParams& x) {
        x.set_context(j.at("context").get<CodeActionContext>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CodeActionParams & x) {
        j = json::object();
        j["context"] = x.get_context();
        j["partialResultToken"] = x.get_partial_result_token();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, CodeActionRegistrationOptions& x) {
        x.set_code_action_kinds(get_stack_optional<std::vector<std::string>>(j, "codeActionKinds"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CodeActionRegistrationOptions & x) {
        j = json::object();
        j["codeActionKinds"] = x.get_code_action_kinds();
        j["documentSelector"] = x.get_document_selector();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CodeLens& x) {
        x.set_command(get_stack_optional<Command>(j, "command"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const CodeLens & x) {
        j = json::object();
        j["command"] = x.get_command();
        j["data"] = x.get_data();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, CodeLensOptions& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CodeLensOptions & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CodeLensParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CodeLensParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, CodeLensRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CodeLensRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, Color& x) {
        x.set_alpha(j.at("alpha").get<double>());
        x.set_blue(j.at("blue").get<double>());
        x.set_green(j.at("green").get<double>());
        x.set_red(j.at("red").get<double>());
    }

    inline void to_json(json & j, const Color & x) {
        j = json::object();
        j["alpha"] = x.get_alpha();
        j["blue"] = x.get_blue();
        j["green"] = x.get_green();
        j["red"] = x.get_red();
    }

    inline void from_json(const json & j, ColorInformation& x) {
        x.set_color(j.at("color").get<Color>());
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const ColorInformation & x) {
        j = json::object();
        j["color"] = x.get_color();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, ColorPresentation& x) {
        x.set_additional_text_edits(get_stack_optional<std::vector<TextEdit>>(j, "additionalTextEdits"));
        x.set_label(j.at("label").get<std::string>());
        x.set_text_edit(get_stack_optional<TextEdit>(j, "textEdit"));
    }

    inline void to_json(json & j, const ColorPresentation & x) {
        j = json::object();
        j["additionalTextEdits"] = x.get_additional_text_edits();
        j["label"] = x.get_label();
        j["textEdit"] = x.get_text_edit();
    }

    inline void from_json(const json & j, ColorPresentationParams& x) {
        x.set_color(j.at("color").get<Color>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const ColorPresentationParams & x) {
        j = json::object();
        j["color"] = x.get_color();
        j["partialResultToken"] = x.get_partial_result_token();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, CompletionContext& x) {
        x.set_trigger_character(get_stack_optional<std::string>(j, "triggerCharacter"));
        x.set_trigger_kind(j.at("triggerKind").get<double>());
    }

    inline void to_json(json & j, const CompletionContext & x) {
        j = json::object();
        j["triggerCharacter"] = x.get_trigger_character();
        j["triggerKind"] = x.get_trigger_kind();
    }

    inline void from_json(const json & j, DocumentationMarkupContent& x) {
        x.set_kind(j.at("kind").get<MarkupKind>());
        x.set_value(j.at("value").get<std::string>());
    }

    inline void to_json(json & j, const DocumentationMarkupContent & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["value"] = x.get_value();
    }

    inline void from_json(const json & j, CompletionItemLabelDetails& x) {
        x.set_description(get_stack_optional<std::string>(j, "description"));
        x.set_detail(get_stack_optional<std::string>(j, "detail"));
    }

    inline void to_json(json & j, const CompletionItemLabelDetails & x) {
        j = json::object();
        j["description"] = x.get_description();
        j["detail"] = x.get_detail();
    }

    inline void from_json(const json & j, Edit& x) {
        x.set_new_text(j.at("newText").get<std::string>());
        x.set_range(get_stack_optional<PurpleRange>(j, "range"));
        x.set_insert(get_stack_optional<PurpleRange>(j, "insert"));
        x.set_replace(get_stack_optional<PurpleRange>(j, "replace"));
    }

    inline void to_json(json & j, const Edit & x) {
        j = json::object();
        j["newText"] = x.get_new_text();
        j["range"] = x.get_range();
        j["insert"] = x.get_insert();
        j["replace"] = x.get_replace();
    }

    inline void from_json(const json & j, CompletionItem& x) {
        x.set_additional_text_edits(get_stack_optional<std::vector<TextEdit>>(j, "additionalTextEdits"));
        x.set_command(get_stack_optional<Command>(j, "command"));
        x.set_commit_characters(get_stack_optional<std::vector<std::string>>(j, "commitCharacters"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_deprecated(get_stack_optional<bool>(j, "deprecated"));
        x.set_detail(get_stack_optional<std::string>(j, "detail"));
        x.set_documentation(get_stack_optional<std::variant<DocumentationMarkupContent, std::string>>(j, "documentation"));
        x.set_filter_text(get_stack_optional<std::string>(j, "filterText"));
        x.set_insert_text(get_stack_optional<std::string>(j, "insertText"));
        x.set_insert_text_format(get_stack_optional<double>(j, "insertTextFormat"));
        x.set_insert_text_mode(get_stack_optional<double>(j, "insertTextMode"));
        x.set_kind(get_stack_optional<double>(j, "kind"));
        x.set_label(j.at("label").get<std::string>());
        x.set_label_details(get_stack_optional<CompletionItemLabelDetails>(j, "labelDetails"));
        x.set_preselect(get_stack_optional<bool>(j, "preselect"));
        x.set_sort_text(get_stack_optional<std::string>(j, "sortText"));
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
        x.set_text_edit(get_stack_optional<Edit>(j, "textEdit"));
        x.set_text_edit_text(get_stack_optional<std::string>(j, "textEditText"));
    }

    inline void to_json(json & j, const CompletionItem & x) {
        j = json::object();
        j["additionalTextEdits"] = x.get_additional_text_edits();
        j["command"] = x.get_command();
        j["commitCharacters"] = x.get_commit_characters();
        j["data"] = x.get_data();
        j["deprecated"] = x.get_deprecated();
        j["detail"] = x.get_detail();
        j["documentation"] = x.get_documentation();
        j["filterText"] = x.get_filter_text();
        j["insertText"] = x.get_insert_text();
        j["insertTextFormat"] = x.get_insert_text_format();
        j["insertTextMode"] = x.get_insert_text_mode();
        j["kind"] = x.get_kind();
        j["label"] = x.get_label();
        j["labelDetails"] = x.get_label_details();
        j["preselect"] = x.get_preselect();
        j["sortText"] = x.get_sort_text();
        j["tags"] = x.get_tags();
        j["textEdit"] = x.get_text_edit();
        j["textEditText"] = x.get_text_edit_text();
    }

    inline void from_json(const json & j, EditRangeClass& x) {
        x.set_end(get_stack_optional<Position>(j, "end"));
        x.set_start(get_stack_optional<Position>(j, "start"));
        x.set_insert(get_stack_optional<PurpleRange>(j, "insert"));
        x.set_replace(get_stack_optional<PurpleRange>(j, "replace"));
    }

    inline void to_json(json & j, const EditRangeClass & x) {
        j = json::object();
        j["end"] = x.get_end();
        j["start"] = x.get_start();
        j["insert"] = x.get_insert();
        j["replace"] = x.get_replace();
    }

    inline void from_json(const json & j, ItemDefaults& x) {
        x.set_commit_characters(get_stack_optional<std::vector<std::string>>(j, "commitCharacters"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_edit_range(get_stack_optional<EditRangeClass>(j, "editRange"));
        x.set_insert_text_format(get_stack_optional<double>(j, "insertTextFormat"));
        x.set_insert_text_mode(get_stack_optional<double>(j, "insertTextMode"));
    }

    inline void to_json(json & j, const ItemDefaults & x) {
        j = json::object();
        j["commitCharacters"] = x.get_commit_characters();
        j["data"] = x.get_data();
        j["editRange"] = x.get_edit_range();
        j["insertTextFormat"] = x.get_insert_text_format();
        j["insertTextMode"] = x.get_insert_text_mode();
    }

    inline void from_json(const json & j, CompletionListClass& x) {
        x.set_is_incomplete(j.at("isIncomplete").get<bool>());
        x.set_item_defaults(get_stack_optional<ItemDefaults>(j, "itemDefaults"));
        x.set_items(j.at("items").get<std::vector<CompletionItem>>());
    }

    inline void to_json(json & j, const CompletionListClass & x) {
        j = json::object();
        j["isIncomplete"] = x.get_is_incomplete();
        j["itemDefaults"] = x.get_item_defaults();
        j["items"] = x.get_items();
    }

    inline void from_json(const json & j, CompletionOptionsCompletionItem& x) {
        x.set_label_details_support(get_stack_optional<bool>(j, "labelDetailsSupport"));
    }

    inline void to_json(json & j, const CompletionOptionsCompletionItem & x) {
        j = json::object();
        j["labelDetailsSupport"] = x.get_label_details_support();
    }

    inline void from_json(const json & j, CompletionOptions& x) {
        x.set_all_commit_characters(get_stack_optional<std::vector<std::string>>(j, "allCommitCharacters"));
        x.set_completion_item(get_stack_optional<CompletionOptionsCompletionItem>(j, "completionItem"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_trigger_characters(get_stack_optional<std::vector<std::string>>(j, "triggerCharacters"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CompletionOptions & x) {
        j = json::object();
        j["allCommitCharacters"] = x.get_all_commit_characters();
        j["completionItem"] = x.get_completion_item();
        j["resolveProvider"] = x.get_resolve_provider();
        j["triggerCharacters"] = x.get_trigger_characters();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, CompletionParams& x) {
        x.set_context(get_stack_optional<CompletionContext>(j, "context"));
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const CompletionParams & x) {
        j = json::object();
        j["context"] = x.get_context();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, CompletionRegistrationOptionsCompletionItem& x) {
        x.set_label_details_support(get_stack_optional<bool>(j, "labelDetailsSupport"));
    }

    inline void to_json(json & j, const CompletionRegistrationOptionsCompletionItem & x) {
        j = json::object();
        j["labelDetailsSupport"] = x.get_label_details_support();
    }

    inline void from_json(const json & j, CompletionRegistrationOptions& x) {
        x.set_all_commit_characters(get_stack_optional<std::vector<std::string>>(j, "allCommitCharacters"));
        x.set_completion_item(get_stack_optional<CompletionRegistrationOptionsCompletionItem>(j, "completionItem"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_trigger_characters(get_stack_optional<std::vector<std::string>>(j, "triggerCharacters"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const CompletionRegistrationOptions & x) {
        j = json::object();
        j["allCommitCharacters"] = x.get_all_commit_characters();
        j["completionItem"] = x.get_completion_item();
        j["documentSelector"] = x.get_document_selector();
        j["resolveProvider"] = x.get_resolve_provider();
        j["triggerCharacters"] = x.get_trigger_characters();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ConfigurationItem& x) {
        x.set_scope_uri(get_stack_optional<std::string>(j, "scopeUri"));
        x.set_section(get_stack_optional<std::string>(j, "section"));
    }

    inline void to_json(json & j, const ConfigurationItem & x) {
        j = json::object();
        j["scopeUri"] = x.get_scope_uri();
        j["section"] = x.get_section();
    }

    inline void from_json(const json & j, ConfigurationParams& x) {
        x.set_items(j.at("items").get<std::vector<ConfigurationItem>>());
    }

    inline void to_json(json & j, const ConfigurationParams & x) {
        j = json::object();
        j["items"] = x.get_items();
    }

    inline void from_json(const json & j, CreateFileOptions& x) {
        x.set_ignore_if_exists(get_stack_optional<bool>(j, "ignoreIfExists"));
        x.set_overwrite(get_stack_optional<bool>(j, "overwrite"));
    }

    inline void to_json(json & j, const CreateFileOptions & x) {
        j = json::object();
        j["ignoreIfExists"] = x.get_ignore_if_exists();
        j["overwrite"] = x.get_overwrite();
    }

    inline void from_json(const json & j, CreateFile& x) {
        x.set_annotation_id(get_stack_optional<std::string>(j, "annotationId"));
        x.set_kind(j.at("kind").get<CreateFileKind>());
        x.set_options(get_stack_optional<CreateFileOptions>(j, "options"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const CreateFile & x) {
        j = json::object();
        j["annotationId"] = x.get_annotation_id();
        j["kind"] = x.get_kind();
        j["options"] = x.get_options();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, FileCreate& x) {
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const FileCreate & x) {
        j = json::object();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, CreateFilesParams& x) {
        x.set_files(j.at("files").get<std::vector<FileCreate>>());
    }

    inline void to_json(json & j, const CreateFilesParams & x) {
        j = json::object();
        j["files"] = x.get_files();
    }

    inline void from_json(const json & j, DeclarationOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DeclarationOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DeclarationParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DeclarationParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DeclarationRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DeclarationRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DefinitionOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DefinitionOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DefinitionParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DefinitionParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DefinitionRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DefinitionRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DeleteFileOptions& x) {
        x.set_ignore_if_not_exists(get_stack_optional<bool>(j, "ignoreIfNotExists"));
        x.set_recursive(get_stack_optional<bool>(j, "recursive"));
    }

    inline void to_json(json & j, const DeleteFileOptions & x) {
        j = json::object();
        j["ignoreIfNotExists"] = x.get_ignore_if_not_exists();
        j["recursive"] = x.get_recursive();
    }

    inline void from_json(const json & j, DeleteFile& x) {
        x.set_annotation_id(get_stack_optional<std::string>(j, "annotationId"));
        x.set_kind(j.at("kind").get<DeleteFileKind>());
        x.set_options(get_stack_optional<DeleteFileOptions>(j, "options"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const DeleteFile & x) {
        j = json::object();
        j["annotationId"] = x.get_annotation_id();
        j["kind"] = x.get_kind();
        j["options"] = x.get_options();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, FileDelete& x) {
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const FileDelete & x) {
        j = json::object();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, DeleteFilesParams& x) {
        x.set_files(j.at("files").get<std::vector<FileDelete>>());
    }

    inline void to_json(json & j, const DeleteFilesParams & x) {
        j = json::object();
        j["files"] = x.get_files();
    }

    inline void from_json(const json & j, DiagnosticOptions& x) {
        x.set_identifier(get_stack_optional<std::string>(j, "identifier"));
        x.set_inter_file_dependencies(j.at("interFileDependencies").get<bool>());
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_workspace_diagnostics(j.at("workspaceDiagnostics").get<bool>());
    }

    inline void to_json(json & j, const DiagnosticOptions & x) {
        j = json::object();
        j["identifier"] = x.get_identifier();
        j["interFileDependencies"] = x.get_inter_file_dependencies();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["workspaceDiagnostics"] = x.get_workspace_diagnostics();
    }

    inline void from_json(const json & j, DiagnosticRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_identifier(get_stack_optional<std::string>(j, "identifier"));
        x.set_inter_file_dependencies(j.at("interFileDependencies").get<bool>());
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_workspace_diagnostics(j.at("workspaceDiagnostics").get<bool>());
    }

    inline void to_json(json & j, const DiagnosticRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["identifier"] = x.get_identifier();
        j["interFileDependencies"] = x.get_inter_file_dependencies();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["workspaceDiagnostics"] = x.get_workspace_diagnostics();
    }

    inline void from_json(const json & j, DiagnosticServerCancellationData& x) {
        x.set_retrigger_request(j.at("retriggerRequest").get<bool>());
    }

    inline void to_json(json & j, const DiagnosticServerCancellationData & x) {
        j = json::object();
        j["retriggerRequest"] = x.get_retrigger_request();
    }

    inline void from_json(const json & j, DidChangeConfigurationParams& x) {
        x.set_settings(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "settings"));
    }

    inline void to_json(json & j, const DidChangeConfigurationParams & x) {
        j = json::object();
        j["settings"] = x.get_settings();
    }

    inline void from_json(const json & j, ExecutionSummary& x) {
        x.set_execution_order(j.at("executionOrder").get<int64_t>());
        x.set_success(get_stack_optional<bool>(j, "success"));
    }

    inline void to_json(json & j, const ExecutionSummary & x) {
        j = json::object();
        j["executionOrder"] = x.get_execution_order();
        j["success"] = x.get_success();
    }

    inline void from_json(const json & j, NotebookCell& x) {
        x.set_document(j.at("document").get<std::string>());
        x.set_execution_summary(get_stack_optional<ExecutionSummary>(j, "executionSummary"));
        x.set_kind(j.at("kind").get<double>());
        x.set_metadata(get_stack_optional<std::map<std::string, LspAny>>(j, "metadata"));
    }

    inline void to_json(json & j, const NotebookCell & x) {
        j = json::object();
        j["document"] = x.get_document();
        j["executionSummary"] = x.get_execution_summary();
        j["kind"] = x.get_kind();
        j["metadata"] = x.get_metadata();
    }

    inline void from_json(const json & j, NotebookCellArrayChange& x) {
        x.set_cells(get_stack_optional<std::vector<NotebookCell>>(j, "cells"));
        x.set_delete_count(j.at("deleteCount").get<int64_t>());
        x.set_start(j.at("start").get<int64_t>());
    }

    inline void to_json(json & j, const NotebookCellArrayChange & x) {
        j = json::object();
        j["cells"] = x.get_cells();
        j["deleteCount"] = x.get_delete_count();
        j["start"] = x.get_start();
    }

    inline void from_json(const json & j, TextDocumentItem& x) {
        x.set_language_id(j.at("languageId").get<std::string>());
        x.set_text(j.at("text").get<std::string>());
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(j.at("version").get<int64_t>());
    }

    inline void to_json(json & j, const TextDocumentItem & x) {
        j = json::object();
        j["languageId"] = x.get_language_id();
        j["text"] = x.get_text();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, Structure& x) {
        x.set_array(j.at("array").get<NotebookCellArrayChange>());
        x.set_did_close(get_stack_optional<std::vector<TextDocumentIdentifier>>(j, "didClose"));
        x.set_did_open(get_stack_optional<std::vector<TextDocumentItem>>(j, "didOpen"));
    }

    inline void to_json(json & j, const Structure & x) {
        j = json::object();
        j["array"] = x.get_array();
        j["didClose"] = x.get_did_close();
        j["didOpen"] = x.get_did_open();
    }

    inline void from_json(const json & j, TextDocumentContentChangeEvent& x) {
        x.set_range(get_stack_optional<PurpleRange>(j, "range"));
        x.set_range_length(get_stack_optional<int64_t>(j, "rangeLength"));
        x.set_text(j.at("text").get<std::string>());
    }

    inline void to_json(json & j, const TextDocumentContentChangeEvent & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["rangeLength"] = x.get_range_length();
        j["text"] = x.get_text();
    }

    inline void from_json(const json & j, VersionedTextDocumentIdentifier& x) {
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(j.at("version").get<int64_t>());
    }

    inline void to_json(json & j, const VersionedTextDocumentIdentifier & x) {
        j = json::object();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, TextContent& x) {
        x.set_changes(j.at("changes").get<std::vector<TextDocumentContentChangeEvent>>());
        x.set_document(j.at("document").get<VersionedTextDocumentIdentifier>());
    }

    inline void to_json(json & j, const TextContent & x) {
        j = json::object();
        j["changes"] = x.get_changes();
        j["document"] = x.get_document();
    }

    inline void from_json(const json & j, Cells& x) {
        x.set_data(get_stack_optional<std::vector<NotebookCell>>(j, "data"));
        x.set_structure(get_stack_optional<Structure>(j, "structure"));
        x.set_text_content(get_stack_optional<std::vector<TextContent>>(j, "textContent"));
    }

    inline void to_json(json & j, const Cells & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["structure"] = x.get_structure();
        j["textContent"] = x.get_text_content();
    }

    inline void from_json(const json & j, NotebookDocumentChangeEvent& x) {
        x.set_cells(get_stack_optional<Cells>(j, "cells"));
        x.set_metadata(get_stack_optional<std::map<std::string, LspAny>>(j, "metadata"));
    }

    inline void to_json(json & j, const NotebookDocumentChangeEvent & x) {
        j = json::object();
        j["cells"] = x.get_cells();
        j["metadata"] = x.get_metadata();
    }

    inline void from_json(const json & j, VersionedNotebookDocumentIdentifier& x) {
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(j.at("version").get<int64_t>());
    }

    inline void to_json(json & j, const VersionedNotebookDocumentIdentifier & x) {
        j = json::object();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, DidChangeNotebookDocumentParams& x) {
        x.set_change(j.at("change").get<NotebookDocumentChangeEvent>());
        x.set_notebook_document(j.at("notebookDocument").get<VersionedNotebookDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidChangeNotebookDocumentParams & x) {
        j = json::object();
        j["change"] = x.get_change();
        j["notebookDocument"] = x.get_notebook_document();
    }

    inline void from_json(const json & j, DidChangeTextDocumentParams& x) {
        x.set_content_changes(j.at("contentChanges").get<std::vector<TextDocumentContentChangeEvent>>());
        x.set_text_document(j.at("textDocument").get<VersionedTextDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidChangeTextDocumentParams & x) {
        j = json::object();
        j["contentChanges"] = x.get_content_changes();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, FileEvent& x) {
        x.set_type(j.at("type").get<double>());
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const FileEvent & x) {
        j = json::object();
        j["type"] = x.get_type();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, DidChangeWatchedFilesParams& x) {
        x.set_changes(j.at("changes").get<std::vector<FileEvent>>());
    }

    inline void to_json(json & j, const DidChangeWatchedFilesParams & x) {
        j = json::object();
        j["changes"] = x.get_changes();
    }

    inline void from_json(const json & j, WorkspaceFolder& x) {
        x.set_name(j.at("name").get<std::string>());
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const WorkspaceFolder & x) {
        j = json::object();
        j["name"] = x.get_name();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, RelativePattern& x) {
        x.set_base_uri(j.at("baseUri").get<BaseUri>());
        x.set_pattern(j.at("pattern").get<std::string>());
    }

    inline void to_json(json & j, const RelativePattern & x) {
        j = json::object();
        j["baseUri"] = x.get_base_uri();
        j["pattern"] = x.get_pattern();
    }

    inline void from_json(const json & j, FileSystemWatcher& x) {
        x.set_glob_pattern(j.at("globPattern").get<GlobPattern>());
        x.set_kind(get_stack_optional<int64_t>(j, "kind"));
    }

    inline void to_json(json & j, const FileSystemWatcher & x) {
        j = json::object();
        j["globPattern"] = x.get_glob_pattern();
        j["kind"] = x.get_kind();
    }

    inline void from_json(const json & j, DidChangeWatchedFilesRegistrationOptions& x) {
        x.set_watchers(j.at("watchers").get<std::vector<FileSystemWatcher>>());
    }

    inline void to_json(json & j, const DidChangeWatchedFilesRegistrationOptions & x) {
        j = json::object();
        j["watchers"] = x.get_watchers();
    }

    inline void from_json(const json & j, WorkspaceFoldersChangeEvent& x) {
        x.set_added(j.at("added").get<std::vector<WorkspaceFolder>>());
        x.set_removed(j.at("removed").get<std::vector<WorkspaceFolder>>());
    }

    inline void to_json(json & j, const WorkspaceFoldersChangeEvent & x) {
        j = json::object();
        j["added"] = x.get_added();
        j["removed"] = x.get_removed();
    }

    inline void from_json(const json & j, DidChangeWorkspaceFoldersParams& x) {
        x.set_event(j.at("event").get<WorkspaceFoldersChangeEvent>());
    }

    inline void to_json(json & j, const DidChangeWorkspaceFoldersParams & x) {
        j = json::object();
        j["event"] = x.get_event();
    }

    inline void from_json(const json & j, NotebookDocumentIdentifier& x) {
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const NotebookDocumentIdentifier & x) {
        j = json::object();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, DidCloseNotebookDocumentParams& x) {
        x.set_cell_text_documents(j.at("cellTextDocuments").get<std::vector<TextDocumentIdentifier>>());
        x.set_notebook_document(j.at("notebookDocument").get<NotebookDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidCloseNotebookDocumentParams & x) {
        j = json::object();
        j["cellTextDocuments"] = x.get_cell_text_documents();
        j["notebookDocument"] = x.get_notebook_document();
    }

    inline void from_json(const json & j, DidCloseTextDocumentParams& x) {
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidCloseTextDocumentParams & x) {
        j = json::object();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, NotebookDocument& x) {
        x.set_cells(j.at("cells").get<std::vector<NotebookCell>>());
        x.set_metadata(get_stack_optional<std::map<std::string, LspAny>>(j, "metadata"));
        x.set_notebook_type(j.at("notebookType").get<std::string>());
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(j.at("version").get<int64_t>());
    }

    inline void to_json(json & j, const NotebookDocument & x) {
        j = json::object();
        j["cells"] = x.get_cells();
        j["metadata"] = x.get_metadata();
        j["notebookType"] = x.get_notebook_type();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, DidOpenNotebookDocumentParams& x) {
        x.set_cell_text_documents(j.at("cellTextDocuments").get<std::vector<TextDocumentItem>>());
        x.set_notebook_document(j.at("notebookDocument").get<NotebookDocument>());
    }

    inline void to_json(json & j, const DidOpenNotebookDocumentParams & x) {
        j = json::object();
        j["cellTextDocuments"] = x.get_cell_text_documents();
        j["notebookDocument"] = x.get_notebook_document();
    }

    inline void from_json(const json & j, DidOpenTextDocumentParams& x) {
        x.set_text_document(j.at("textDocument").get<TextDocumentItem>());
    }

    inline void to_json(json & j, const DidOpenTextDocumentParams & x) {
        j = json::object();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, DidSaveNotebookDocumentParams& x) {
        x.set_notebook_document(j.at("notebookDocument").get<NotebookDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidSaveNotebookDocumentParams & x) {
        j = json::object();
        j["notebookDocument"] = x.get_notebook_document();
    }

    inline void from_json(const json & j, DidSaveTextDocumentParams& x) {
        x.set_text(get_stack_optional<std::string>(j, "text"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
    }

    inline void to_json(json & j, const DidSaveTextDocumentParams & x) {
        j = json::object();
        j["text"] = x.get_text();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, DocumentColorOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentColorOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentColorParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentColorParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentColorRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentColorRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentDiagnosticParams& x) {
        x.set_identifier(get_stack_optional<std::string>(j, "identifier"));
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_previous_result_id(get_stack_optional<std::string>(j, "previousResultId"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentDiagnosticParams & x) {
        j = json::object();
        j["identifier"] = x.get_identifier();
        j["partialResultToken"] = x.get_partial_result_token();
        j["previousResultId"] = x.get_previous_result_id();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, RelatedDocumentValue& x) {
        x.set_items(get_stack_optional<std::vector<Diagnostic>>(j, "items"));
        x.set_kind(j.at("kind").get<DocumentDiagnosticReportKind>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const RelatedDocumentValue & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, DocumentDiagnosticReport& x) {
        x.set_items(get_stack_optional<std::vector<Diagnostic>>(j, "items"));
        x.set_kind(j.at("kind").get<DocumentDiagnosticReportKind>());
        x.set_related_documents(get_stack_optional<std::map<std::string, RelatedDocumentValue>>(j, "relatedDocuments"));
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const DocumentDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["relatedDocuments"] = x.get_related_documents();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, DocumentDiagnosticReportPartialResult& x) {
        x.set_related_documents(j.at("relatedDocuments").get<std::map<std::string, RelatedDocumentValue>>());
    }

    inline void to_json(json & j, const DocumentDiagnosticReportPartialResult & x) {
        j = json::object();
        j["relatedDocuments"] = x.get_related_documents();
    }

    inline void from_json(const json & j, DocumentFormattingOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentFormattingOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, FormattingOptions& x) {
        x.set_insert_final_newline(get_stack_optional<bool>(j, "insertFinalNewline"));
        x.set_insert_spaces(j.at("insertSpaces").get<bool>());
        x.set_tab_size(j.at("tabSize").get<int64_t>());
        x.set_trim_final_newlines(get_stack_optional<bool>(j, "trimFinalNewlines"));
        x.set_trim_trailing_whitespace(get_stack_optional<bool>(j, "trimTrailingWhitespace"));
    }

    inline void to_json(json & j, const FormattingOptions & x) {
        j = json::object();
        j["insertFinalNewline"] = x.get_insert_final_newline();
        j["insertSpaces"] = x.get_insert_spaces();
        j["tabSize"] = x.get_tab_size();
        j["trimFinalNewlines"] = x.get_trim_final_newlines();
        j["trimTrailingWhitespace"] = x.get_trim_trailing_whitespace();
    }

    inline void from_json(const json & j, DocumentFormattingParams& x) {
        x.set_options(j.at("options").get<FormattingOptions>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentFormattingParams & x) {
        j = json::object();
        j["options"] = x.get_options();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentFormattingRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentFormattingRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentHighlight& x) {
        x.set_kind(get_stack_optional<double>(j, "kind"));
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const DocumentHighlight & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, DocumentHighlightOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentHighlightOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentHighlightParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentHighlightParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentHighlightRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentHighlightRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentLink& x) {
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_target(get_stack_optional<std::string>(j, "target"));
        x.set_tooltip(get_stack_optional<std::string>(j, "tooltip"));
    }

    inline void to_json(json & j, const DocumentLink & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["range"] = x.get_range();
        j["target"] = x.get_target();
        j["tooltip"] = x.get_tooltip();
    }

    inline void from_json(const json & j, DocumentLinkOptions& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentLinkOptions & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentLinkParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentLinkParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentLinkRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentLinkRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentOnTypeFormattingOptions& x) {
        x.set_first_trigger_character(j.at("firstTriggerCharacter").get<std::string>());
        x.set_more_trigger_character(get_stack_optional<std::vector<std::string>>(j, "moreTriggerCharacter"));
    }

    inline void to_json(json & j, const DocumentOnTypeFormattingOptions & x) {
        j = json::object();
        j["firstTriggerCharacter"] = x.get_first_trigger_character();
        j["moreTriggerCharacter"] = x.get_more_trigger_character();
    }

    inline void from_json(const json & j, DocumentOnTypeFormattingParams& x) {
        x.set_ch(j.at("ch").get<std::string>());
        x.set_options(j.at("options").get<FormattingOptions>());
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
    }

    inline void to_json(json & j, const DocumentOnTypeFormattingParams & x) {
        j = json::object();
        j["ch"] = x.get_ch();
        j["options"] = x.get_options();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, DocumentOnTypeFormattingRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_first_trigger_character(j.at("firstTriggerCharacter").get<std::string>());
        x.set_more_trigger_character(get_stack_optional<std::vector<std::string>>(j, "moreTriggerCharacter"));
    }

    inline void to_json(json & j, const DocumentOnTypeFormattingRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["firstTriggerCharacter"] = x.get_first_trigger_character();
        j["moreTriggerCharacter"] = x.get_more_trigger_character();
    }

    inline void from_json(const json & j, DocumentRangeFormattingOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentRangeFormattingOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentRangeFormattingParams& x) {
        x.set_options(j.at("options").get<FormattingOptions>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentRangeFormattingParams & x) {
        j = json::object();
        j["options"] = x.get_options();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentRangeFormattingRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentRangeFormattingRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentSymbol& x) {
        x.set_children(get_stack_optional<std::vector<DocumentSymbol>>(j, "children"));
        x.set_deprecated(get_stack_optional<bool>(j, "deprecated"));
        x.set_detail(get_stack_optional<std::string>(j, "detail"));
        x.set_kind(j.at("kind").get<double>());
        x.set_name(j.at("name").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_selection_range(j.at("selectionRange").get<PurpleRange>());
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
    }

    inline void to_json(json & j, const DocumentSymbol & x) {
        j = json::object();
        j["children"] = x.get_children();
        j["deprecated"] = x.get_deprecated();
        j["detail"] = x.get_detail();
        j["kind"] = x.get_kind();
        j["name"] = x.get_name();
        j["range"] = x.get_range();
        j["selectionRange"] = x.get_selection_range();
        j["tags"] = x.get_tags();
    }

    inline void from_json(const json & j, DocumentSymbolOptions& x) {
        x.set_label(get_stack_optional<std::string>(j, "label"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentSymbolOptions & x) {
        j = json::object();
        j["label"] = x.get_label();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, DocumentSymbolParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const DocumentSymbolParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, DocumentSymbolRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_label(get_stack_optional<std::string>(j, "label"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const DocumentSymbolRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["label"] = x.get_label();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ExecuteCommandOptions& x) {
        x.set_commands(j.at("commands").get<std::vector<std::string>>());
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ExecuteCommandOptions & x) {
        j = json::object();
        j["commands"] = x.get_commands();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ExecuteCommandParams& x) {
        x.set_arguments(get_stack_optional<std::vector<LspAny>>(j, "arguments"));
        x.set_command(j.at("command").get<std::string>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const ExecuteCommandParams & x) {
        j = json::object();
        j["arguments"] = x.get_arguments();
        j["command"] = x.get_command();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, ExecuteCommandRegistrationOptions& x) {
        x.set_commands(j.at("commands").get<std::vector<std::string>>());
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ExecuteCommandRegistrationOptions & x) {
        j = json::object();
        j["commands"] = x.get_commands();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, FileOperationPatternOptions& x) {
        x.set_ignore_case(get_stack_optional<bool>(j, "ignoreCase"));
    }

    inline void to_json(json & j, const FileOperationPatternOptions & x) {
        j = json::object();
        j["ignoreCase"] = x.get_ignore_case();
    }

    inline void from_json(const json & j, FileOperationPattern& x) {
        x.set_glob(j.at("glob").get<std::string>());
        x.set_matches(get_stack_optional<FileOperationPatternKind>(j, "matches"));
        x.set_options(get_stack_optional<FileOperationPatternOptions>(j, "options"));
    }

    inline void to_json(json & j, const FileOperationPattern & x) {
        j = json::object();
        j["glob"] = x.get_glob();
        j["matches"] = x.get_matches();
        j["options"] = x.get_options();
    }

    inline void from_json(const json & j, FileOperationFilter& x) {
        x.set_pattern(j.at("pattern").get<FileOperationPattern>());
        x.set_scheme(get_stack_optional<std::string>(j, "scheme"));
    }

    inline void to_json(json & j, const FileOperationFilter & x) {
        j = json::object();
        j["pattern"] = x.get_pattern();
        j["scheme"] = x.get_scheme();
    }

    inline void from_json(const json & j, FileOperationRegistrationOptions& x) {
        x.set_filters(j.at("filters").get<std::vector<FileOperationFilter>>());
    }

    inline void to_json(json & j, const FileOperationRegistrationOptions & x) {
        j = json::object();
        j["filters"] = x.get_filters();
    }

    inline void from_json(const json & j, FileRename& x) {
        x.set_new_uri(j.at("newUri").get<std::string>());
        x.set_old_uri(j.at("oldUri").get<std::string>());
    }

    inline void to_json(json & j, const FileRename & x) {
        j = json::object();
        j["newUri"] = x.get_new_uri();
        j["oldUri"] = x.get_old_uri();
    }

    inline void from_json(const json & j, FoldingRangeClass& x) {
        x.set_collapsed_text(get_stack_optional<std::string>(j, "collapsedText"));
        x.set_end_character(get_stack_optional<int64_t>(j, "endCharacter"));
        x.set_end_line(j.at("endLine").get<int64_t>());
        x.set_kind(get_stack_optional<std::string>(j, "kind"));
        x.set_start_character(get_stack_optional<int64_t>(j, "startCharacter"));
        x.set_start_line(j.at("startLine").get<int64_t>());
    }

    inline void to_json(json & j, const FoldingRangeClass & x) {
        j = json::object();
        j["collapsedText"] = x.get_collapsed_text();
        j["endCharacter"] = x.get_end_character();
        j["endLine"] = x.get_end_line();
        j["kind"] = x.get_kind();
        j["startCharacter"] = x.get_start_character();
        j["startLine"] = x.get_start_line();
    }

    inline void from_json(const json & j, FoldingRangeOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const FoldingRangeOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, FoldingRangeParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const FoldingRangeParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, FoldingRangeRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const FoldingRangeRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, FullDocumentDiagnosticReport& x) {
        x.set_items(j.at("items").get<std::vector<Diagnostic>>());
        x.set_kind(j.at("kind").get<FullDocumentDiagnosticReportKind>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const FullDocumentDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, MarkedStringClass& x) {
        x.set_language(j.at("language").get<std::string>());
        x.set_value(j.at("value").get<std::string>());
    }

    inline void to_json(json & j, const MarkedStringClass & x) {
        j = json::object();
        j["language"] = x.get_language();
        j["value"] = x.get_value();
    }

    inline void from_json(const json & j, ContentsMarkupContent& x) {
        x.set_language(get_stack_optional<std::string>(j, "language"));
        x.set_value(j.at("value").get<std::string>());
        x.set_kind(get_stack_optional<MarkupKind>(j, "kind"));
    }

    inline void to_json(json & j, const ContentsMarkupContent & x) {
        j = json::object();
        j["language"] = x.get_language();
        j["value"] = x.get_value();
        j["kind"] = x.get_kind();
    }

    inline void from_json(const json & j, Hover& x) {
        x.set_contents(j.at("contents").get<ContentsUnion>());
        x.set_range(get_stack_optional<PurpleRange>(j, "range"));
    }

    inline void to_json(json & j, const Hover & x) {
        j = json::object();
        j["contents"] = x.get_contents();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, HoverOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const HoverOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, HoverParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const HoverParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, HoverRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const HoverRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ImplementationOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ImplementationOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ImplementationParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const ImplementationParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, ImplementationRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ImplementationRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, InitializeError& x) {
        x.set_retry(j.at("retry").get<bool>());
    }

    inline void to_json(json & j, const InitializeError & x) {
        j = json::object();
        j["retry"] = x.get_retry();
    }

    inline void from_json(const json & j, ClientInfo& x) {
        x.set_name(j.at("name").get<std::string>());
        x.set_version(get_stack_optional<std::string>(j, "version"));
    }

    inline void to_json(json & j, const ClientInfo & x) {
        j = json::object();
        j["name"] = x.get_name();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, InitializeParams& x) {
        x.set_capabilities(j.at("capabilities").get<ClientCapabilities>());
        x.set_client_info(get_stack_optional<ClientInfo>(j, "clientInfo"));
        x.set_initialization_options(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "initializationOptions"));
        x.set_locale(get_stack_optional<std::string>(j, "locale"));
        x.set_process_id(get_stack_optional<int64_t>(j, "processId"));
        x.set_root_path(get_stack_optional<std::string>(j, "rootPath"));
        x.set_root_uri(get_stack_optional<std::string>(j, "rootUri"));
        x.set_trace(get_stack_optional<TraceValue>(j, "trace"));
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
        x.set_workspace_folders(get_stack_optional<std::vector<WorkspaceFolder>>(j, "workspaceFolders"));
    }

    inline void to_json(json & j, const InitializeParams & x) {
        j = json::object();
        j["capabilities"] = x.get_capabilities();
        j["clientInfo"] = x.get_client_info();
        j["initializationOptions"] = x.get_initialization_options();
        j["locale"] = x.get_locale();
        j["processId"] = x.get_process_id();
        j["rootPath"] = x.get_root_path();
        j["rootUri"] = x.get_root_uri();
        j["trace"] = x.get_trace();
        j["workDoneToken"] = x.get_work_done_token();
        j["workspaceFolders"] = x.get_workspace_folders();
    }

    inline void from_json(const json & j, CallHierarchyOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const CallHierarchyOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, DocumentColorOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const DocumentColorOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, DeclarationRationOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const DeclarationRationOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, DiagnosticProviderClass& x) {
        x.set_identifier(get_stack_optional<std::string>(j, "identifier"));
        x.set_inter_file_dependencies(j.at("interFileDependencies").get<bool>());
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_workspace_diagnostics(j.at("workspaceDiagnostics").get<bool>());
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const DiagnosticProviderClass & x) {
        j = json::object();
        j["identifier"] = x.get_identifier();
        j["interFileDependencies"] = x.get_inter_file_dependencies();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["workspaceDiagnostics"] = x.get_workspace_diagnostics();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, FoldingRangeOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const FoldingRangeOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, ImplementationAtionOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const ImplementationAtionOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, InlayHintOptions& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const InlayHintOptions & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, InlineValueOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const InlineValueOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, LinkedEditingRangeOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const LinkedEditingRangeOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, MonikerOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
    }

    inline void to_json(json & j, const MonikerOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
    }

    inline void from_json(const json & j, Cell& x) {
        x.set_language(j.at("language").get<std::string>());
    }

    inline void to_json(json & j, const Cell & x) {
        j = json::object();
        j["language"] = x.get_language();
    }

    inline void from_json(const json & j, NotebookClass& x) {
        x.set_notebook_type(get_stack_optional<std::string>(j, "notebookType"));
        x.set_pattern(get_stack_optional<std::string>(j, "pattern"));
        x.set_scheme(get_stack_optional<std::string>(j, "scheme"));
    }

    inline void to_json(json & j, const NotebookClass & x) {
        j = json::object();
        j["notebookType"] = x.get_notebook_type();
        j["pattern"] = x.get_pattern();
        j["scheme"] = x.get_scheme();
    }

    inline void from_json(const json & j, NotebookSelector& x) {
        x.set_cells(get_stack_optional<std::vector<Cell>>(j, "cells"));
        x.set_notebook(get_stack_optional<std::variant<NotebookClass, std::string>>(j, "notebook"));
    }

    inline void to_json(json & j, const NotebookSelector & x) {
        j = json::object();
        j["cells"] = x.get_cells();
        j["notebook"] = x.get_notebook();
    }

    inline void from_json(const json & j, NotebookDocumentSyncOptions& x) {
        x.set_notebook_selector(j.at("notebookSelector").get<std::vector<NotebookSelector>>());
        x.set_save(get_stack_optional<bool>(j, "save"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const NotebookDocumentSyncOptions & x) {
        j = json::object();
        j["notebookSelector"] = x.get_notebook_selector();
        j["save"] = x.get_save();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, ReferenceOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ReferenceOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, RenameOptions& x) {
        x.set_prepare_provider(get_stack_optional<bool>(j, "prepareProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const RenameOptions & x) {
        j = json::object();
        j["prepareProvider"] = x.get_prepare_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, SelectionRangeOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const SelectionRangeOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, FullClass& x) {
        x.set_delta(get_stack_optional<bool>(j, "delta"));
    }

    inline void to_json(json & j, const FullClass & x) {
        j = json::object();
        j["delta"] = x.get_delta();
    }

    inline void from_json(const json & j, SemanticTokensLegend& x) {
        x.set_token_modifiers(j.at("tokenModifiers").get<std::vector<std::string>>());
        x.set_token_types(j.at("tokenTypes").get<std::vector<std::string>>());
    }

    inline void to_json(json & j, const SemanticTokensLegend & x) {
        j = json::object();
        j["tokenModifiers"] = x.get_token_modifiers();
        j["tokenTypes"] = x.get_token_types();
    }

    inline void from_json(const json & j, RangeClass& x) {
    }

    inline void to_json(json & j, const RangeClass & x) {
        j = json::object();
    }

    inline void from_json(const json & j, SemanticTokensOptions& x) {
        x.set_full(get_stack_optional<std::variant<bool, FullClass>>(j, "full"));
        x.set_legend(j.at("legend").get<SemanticTokensLegend>());
        x.set_range(get_stack_optional<std::variant<bool, RangeClass>>(j, "range"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const SemanticTokensOptions & x) {
        j = json::object();
        j["full"] = x.get_full();
        j["legend"] = x.get_legend();
        j["range"] = x.get_range();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, SignatureHelpOptions& x) {
        x.set_retrigger_characters(get_stack_optional<std::vector<std::string>>(j, "retriggerCharacters"));
        x.set_trigger_characters(get_stack_optional<std::vector<std::string>>(j, "triggerCharacters"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SignatureHelpOptions & x) {
        j = json::object();
        j["retriggerCharacters"] = x.get_retrigger_characters();
        j["triggerCharacters"] = x.get_trigger_characters();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, TextDocumentSyncOptions& x) {
        x.set_change(get_stack_optional<double>(j, "change"));
        x.set_open_close(get_stack_optional<bool>(j, "openClose"));
        x.set_save(get_stack_optional<bool>(j, "save"));
        x.set_will_save(get_stack_optional<bool>(j, "willSave"));
        x.set_will_save_wait_until(get_stack_optional<bool>(j, "willSaveWaitUntil"));
    }

    inline void to_json(json & j, const TextDocumentSyncOptions & x) {
        j = json::object();
        j["change"] = x.get_change();
        j["openClose"] = x.get_open_close();
        j["save"] = x.get_save();
        j["willSave"] = x.get_will_save();
        j["willSaveWaitUntil"] = x.get_will_save_wait_until();
    }

    inline void from_json(const json & j, TypeDefinitionTionOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const TypeDefinitionTionOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, TypeHierarchyOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const TypeHierarchyOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, ServerFileOperations& x) {
        x.set_did_create(get_stack_optional<FileOperationRegistrationOptions>(j, "didCreate"));
        x.set_did_delete(get_stack_optional<FileOperationRegistrationOptions>(j, "didDelete"));
        x.set_did_rename(get_stack_optional<FileOperationRegistrationOptions>(j, "didRename"));
        x.set_will_create(get_stack_optional<FileOperationRegistrationOptions>(j, "willCreate"));
        x.set_will_delete(get_stack_optional<FileOperationRegistrationOptions>(j, "willDelete"));
        x.set_will_rename(get_stack_optional<FileOperationRegistrationOptions>(j, "willRename"));
    }

    inline void to_json(json & j, const ServerFileOperations & x) {
        j = json::object();
        j["didCreate"] = x.get_did_create();
        j["didDelete"] = x.get_did_delete();
        j["didRename"] = x.get_did_rename();
        j["willCreate"] = x.get_will_create();
        j["willDelete"] = x.get_will_delete();
        j["willRename"] = x.get_will_rename();
    }

    inline void from_json(const json & j, WorkspaceFoldersServerCapabilities& x) {
        x.set_change_notifications(get_stack_optional<std::variant<bool, std::string>>(j, "changeNotifications"));
        x.set_supported(get_stack_optional<bool>(j, "supported"));
    }

    inline void to_json(json & j, const WorkspaceFoldersServerCapabilities & x) {
        j = json::object();
        j["changeNotifications"] = x.get_change_notifications();
        j["supported"] = x.get_supported();
    }

    inline void from_json(const json & j, Workspace& x) {
        x.set_file_operations(get_stack_optional<ServerFileOperations>(j, "fileOperations"));
        x.set_workspace_folders(get_stack_optional<WorkspaceFoldersServerCapabilities>(j, "workspaceFolders"));
    }

    inline void to_json(json & j, const Workspace & x) {
        j = json::object();
        j["fileOperations"] = x.get_file_operations();
        j["workspaceFolders"] = x.get_workspace_folders();
    }

    inline void from_json(const json & j, WorkspaceSymbolOptions& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const WorkspaceSymbolOptions & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, ServerCapabilities& x) {
        x.set_call_hierarchy_provider(get_stack_optional<std::variant<bool, CallHierarchyOptions>>(j, "callHierarchyProvider"));
        x.set_code_action_provider(get_stack_optional<std::variant<bool, CodeActionOptions>>(j, "codeActionProvider"));
        x.set_code_lens_provider(get_stack_optional<CodeLensOptions>(j, "codeLensProvider"));
        x.set_color_provider(get_stack_optional<std::variant<bool, DocumentColorOptions>>(j, "colorProvider"));
        x.set_completion_provider(get_stack_optional<CompletionOptions>(j, "completionProvider"));
        x.set_declaration_provider(get_stack_optional<std::variant<bool, DeclarationRationOptions>>(j, "declarationProvider"));
        x.set_definition_provider(get_stack_optional<std::variant<bool, DefinitionOptions>>(j, "definitionProvider"));
        x.set_diagnostic_provider(get_stack_optional<DiagnosticProviderClass>(j, "diagnosticProvider"));
        x.set_document_formatting_provider(get_stack_optional<std::variant<bool, DocumentFormattingOptions>>(j, "documentFormattingProvider"));
        x.set_document_highlight_provider(get_stack_optional<std::variant<bool, DocumentHighlightOptions>>(j, "documentHighlightProvider"));
        x.set_document_link_provider(get_stack_optional<DocumentLinkOptions>(j, "documentLinkProvider"));
        x.set_document_on_type_formatting_provider(get_stack_optional<DocumentOnTypeFormattingOptions>(j, "documentOnTypeFormattingProvider"));
        x.set_document_range_formatting_provider(get_stack_optional<std::variant<bool, DocumentRangeFormattingOptions>>(j, "documentRangeFormattingProvider"));
        x.set_document_symbol_provider(get_stack_optional<std::variant<bool, DocumentSymbolOptions>>(j, "documentSymbolProvider"));
        x.set_execute_command_provider(get_stack_optional<ExecuteCommandOptions>(j, "executeCommandProvider"));
        x.set_experimental(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "experimental"));
        x.set_folding_range_provider(get_stack_optional<std::variant<bool, FoldingRangeOptions>>(j, "foldingRangeProvider"));
        x.set_hover_provider(get_stack_optional<std::variant<bool, HoverOptions>>(j, "hoverProvider"));
        x.set_implementation_provider(get_stack_optional<std::variant<bool, ImplementationAtionOptions>>(j, "implementationProvider"));
        x.set_inlay_hint_provider(get_stack_optional<std::variant<bool, InlayHintOptions>>(j, "inlayHintProvider"));
        x.set_inline_value_provider(get_stack_optional<std::variant<bool, InlineValueOptions>>(j, "inlineValueProvider"));
        x.set_linked_editing_range_provider(get_stack_optional<std::variant<bool, LinkedEditingRangeOptions>>(j, "linkedEditingRangeProvider"));
        x.set_moniker_provider(get_stack_optional<std::variant<bool, MonikerOptions>>(j, "monikerProvider"));
        x.set_notebook_document_sync(get_stack_optional<NotebookDocumentSyncOptions>(j, "notebookDocumentSync"));
        x.set_position_encoding(get_stack_optional<std::string>(j, "positionEncoding"));
        x.set_references_provider(get_stack_optional<std::variant<bool, ReferenceOptions>>(j, "referencesProvider"));
        x.set_rename_provider(get_stack_optional<std::variant<bool, RenameOptions>>(j, "renameProvider"));
        x.set_selection_range_provider(get_stack_optional<std::variant<bool, SelectionRangeOptions>>(j, "selectionRangeProvider"));
        x.set_semantic_tokens_provider(get_stack_optional<SemanticTokensOptions>(j, "semanticTokensProvider"));
        x.set_signature_help_provider(get_stack_optional<SignatureHelpOptions>(j, "signatureHelpProvider"));
        x.set_text_document_sync(get_stack_optional<std::variant<TextDocumentSyncOptions, double>>(j, "textDocumentSync"));
        x.set_type_definition_provider(get_stack_optional<std::variant<bool, TypeDefinitionTionOptions>>(j, "typeDefinitionProvider"));
        x.set_type_hierarchy_provider(get_stack_optional<std::variant<bool, TypeHierarchyOptions>>(j, "typeHierarchyProvider"));
        x.set_workspace(get_stack_optional<Workspace>(j, "workspace"));
        x.set_workspace_symbol_provider(get_stack_optional<std::variant<bool, WorkspaceSymbolOptions>>(j, "workspaceSymbolProvider"));
    }

    inline void to_json(json & j, const ServerCapabilities & x) {
        j = json::object();
        j["callHierarchyProvider"] = x.get_call_hierarchy_provider();
        j["codeActionProvider"] = x.get_code_action_provider();
        j["codeLensProvider"] = x.get_code_lens_provider();
        j["colorProvider"] = x.get_color_provider();
        j["completionProvider"] = x.get_completion_provider();
        j["declarationProvider"] = x.get_declaration_provider();
        j["definitionProvider"] = x.get_definition_provider();
        j["diagnosticProvider"] = x.get_diagnostic_provider();
        j["documentFormattingProvider"] = x.get_document_formatting_provider();
        j["documentHighlightProvider"] = x.get_document_highlight_provider();
        j["documentLinkProvider"] = x.get_document_link_provider();
        j["documentOnTypeFormattingProvider"] = x.get_document_on_type_formatting_provider();
        j["documentRangeFormattingProvider"] = x.get_document_range_formatting_provider();
        j["documentSymbolProvider"] = x.get_document_symbol_provider();
        j["executeCommandProvider"] = x.get_execute_command_provider();
        j["experimental"] = x.get_experimental();
        j["foldingRangeProvider"] = x.get_folding_range_provider();
        j["hoverProvider"] = x.get_hover_provider();
        j["implementationProvider"] = x.get_implementation_provider();
        j["inlayHintProvider"] = x.get_inlay_hint_provider();
        j["inlineValueProvider"] = x.get_inline_value_provider();
        j["linkedEditingRangeProvider"] = x.get_linked_editing_range_provider();
        j["monikerProvider"] = x.get_moniker_provider();
        j["notebookDocumentSync"] = x.get_notebook_document_sync();
        j["positionEncoding"] = x.get_position_encoding();
        j["referencesProvider"] = x.get_references_provider();
        j["renameProvider"] = x.get_rename_provider();
        j["selectionRangeProvider"] = x.get_selection_range_provider();
        j["semanticTokensProvider"] = x.get_semantic_tokens_provider();
        j["signatureHelpProvider"] = x.get_signature_help_provider();
        j["textDocumentSync"] = x.get_text_document_sync();
        j["typeDefinitionProvider"] = x.get_type_definition_provider();
        j["typeHierarchyProvider"] = x.get_type_hierarchy_provider();
        j["workspace"] = x.get_workspace();
        j["workspaceSymbolProvider"] = x.get_workspace_symbol_provider();
    }

    inline void from_json(const json & j, ServerInfo& x) {
        x.set_name(j.at("name").get<std::string>());
        x.set_version(get_stack_optional<std::string>(j, "version"));
    }

    inline void to_json(json & j, const ServerInfo & x) {
        j = json::object();
        j["name"] = x.get_name();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, InitializeResult& x) {
        x.set_capabilities(j.at("capabilities").get<ServerCapabilities>());
        x.set_server_info(get_stack_optional<ServerInfo>(j, "serverInfo"));
    }

    inline void to_json(json & j, const InitializeResult & x) {
        j = json::object();
        j["capabilities"] = x.get_capabilities();
        j["serverInfo"] = x.get_server_info();
    }

    inline void from_json(const json & j, InitializedParams& x) {
    }

    inline void to_json(json & j, const InitializedParams & x) {
        j = json::object();
    }

    inline void from_json(const json & j, InlayHintLabelPart& x) {
        x.set_command(get_stack_optional<Command>(j, "command"));
        x.set_location(get_stack_optional<LocationClass>(j, "location"));
        x.set_tooltip(get_stack_optional<std::variant<DocumentationMarkupContent, std::string>>(j, "tooltip"));
        x.set_value(j.at("value").get<std::string>());
    }

    inline void to_json(json & j, const InlayHintLabelPart & x) {
        j = json::object();
        j["command"] = x.get_command();
        j["location"] = x.get_location();
        j["tooltip"] = x.get_tooltip();
        j["value"] = x.get_value();
    }

    inline void from_json(const json & j, InlayHint& x) {
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_kind(get_stack_optional<double>(j, "kind"));
        x.set_label(j.at("label").get<InlayHintLabel>());
        x.set_padding_left(get_stack_optional<bool>(j, "paddingLeft"));
        x.set_padding_right(get_stack_optional<bool>(j, "paddingRight"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_edits(get_stack_optional<std::vector<TextEdit>>(j, "textEdits"));
        x.set_tooltip(get_stack_optional<std::variant<DocumentationMarkupContent, std::string>>(j, "tooltip"));
    }

    inline void to_json(json & j, const InlayHint & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["kind"] = x.get_kind();
        j["label"] = x.get_label();
        j["paddingLeft"] = x.get_padding_left();
        j["paddingRight"] = x.get_padding_right();
        j["position"] = x.get_position();
        j["textEdits"] = x.get_text_edits();
        j["tooltip"] = x.get_tooltip();
    }

    inline void from_json(const json & j, InlayHintOptionsClass& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const InlayHintOptionsClass & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, InlayHintParams& x) {
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const InlayHintParams & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, InlayHintRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const InlayHintRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, InlineValue& x) {
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text(get_stack_optional<std::string>(j, "text"));
        x.set_case_sensitive_lookup(get_stack_optional<bool>(j, "caseSensitiveLookup"));
        x.set_variable_name(get_stack_optional<std::string>(j, "variableName"));
        x.set_expression(get_stack_optional<std::string>(j, "expression"));
    }

    inline void to_json(json & j, const InlineValue & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["text"] = x.get_text();
        j["caseSensitiveLookup"] = x.get_case_sensitive_lookup();
        j["variableName"] = x.get_variable_name();
        j["expression"] = x.get_expression();
    }

    inline void from_json(const json & j, InlineValueContext& x) {
        x.set_frame_id(j.at("frameId").get<int64_t>());
        x.set_stopped_location(j.at("stoppedLocation").get<PurpleRange>());
    }

    inline void to_json(json & j, const InlineValueContext & x) {
        j = json::object();
        j["frameId"] = x.get_frame_id();
        j["stoppedLocation"] = x.get_stopped_location();
    }

    inline void from_json(const json & j, InlineValueEvaluatableExpression& x) {
        x.set_expression(get_stack_optional<std::string>(j, "expression"));
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const InlineValueEvaluatableExpression & x) {
        j = json::object();
        j["expression"] = x.get_expression();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, InlineValueOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const InlineValueOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, InlineValueParams& x) {
        x.set_context(j.at("context").get<InlineValueContext>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const InlineValueParams & x) {
        j = json::object();
        j["context"] = x.get_context();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, InlineValueRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const InlineValueRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, InlineValueText& x) {
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text(j.at("text").get<std::string>());
    }

    inline void to_json(json & j, const InlineValueText & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["text"] = x.get_text();
    }

    inline void from_json(const json & j, InlineValueVariableLookup& x) {
        x.set_case_sensitive_lookup(j.at("caseSensitiveLookup").get<bool>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_variable_name(get_stack_optional<std::string>(j, "variableName"));
    }

    inline void to_json(json & j, const InlineValueVariableLookup & x) {
        j = json::object();
        j["caseSensitiveLookup"] = x.get_case_sensitive_lookup();
        j["range"] = x.get_range();
        j["variableName"] = x.get_variable_name();
    }

    inline void from_json(const json & j, InsertReplaceEdit& x) {
        x.set_insert(j.at("insert").get<PurpleRange>());
        x.set_new_text(j.at("newText").get<std::string>());
        x.set_replace(j.at("replace").get<PurpleRange>());
    }

    inline void to_json(json & j, const InsertReplaceEdit & x) {
        j = json::object();
        j["insert"] = x.get_insert();
        j["newText"] = x.get_new_text();
        j["replace"] = x.get_replace();
    }

    inline void from_json(const json & j, LinkedEditingRangeOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const LinkedEditingRangeOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, LinkedEditingRangeParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const LinkedEditingRangeParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, LinkedEditingRangeRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const LinkedEditingRangeRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, LinkedEditingRanges& x) {
        x.set_ranges(j.at("ranges").get<std::vector<PurpleRange>>());
        x.set_word_pattern(get_stack_optional<std::string>(j, "wordPattern"));
    }

    inline void to_json(json & j, const LinkedEditingRanges & x) {
        j = json::object();
        j["ranges"] = x.get_ranges();
        j["wordPattern"] = x.get_word_pattern();
    }

    inline void from_json(const json & j, LocationLink& x) {
        x.set_origin_selection_range(get_stack_optional<PurpleRange>(j, "originSelectionRange"));
        x.set_target_range(j.at("targetRange").get<PurpleRange>());
        x.set_target_selection_range(j.at("targetSelectionRange").get<PurpleRange>());
        x.set_target_uri(j.at("targetUri").get<std::string>());
    }

    inline void to_json(json & j, const LocationLink & x) {
        j = json::object();
        j["originSelectionRange"] = x.get_origin_selection_range();
        j["targetRange"] = x.get_target_range();
        j["targetSelectionRange"] = x.get_target_selection_range();
        j["targetUri"] = x.get_target_uri();
    }

    inline void from_json(const json & j, LogMessageParams& x) {
        x.set_message(j.at("message").get<std::string>());
        x.set_type(j.at("type").get<double>());
    }

    inline void to_json(json & j, const LogMessageParams & x) {
        j = json::object();
        j["message"] = x.get_message();
        j["type"] = x.get_type();
    }

    inline void from_json(const json & j, LogTraceParams& x) {
        x.set_message(j.at("message").get<std::string>());
        x.set_verbose(get_stack_optional<std::string>(j, "verbose"));
    }

    inline void to_json(json & j, const LogTraceParams & x) {
        j = json::object();
        j["message"] = x.get_message();
        j["verbose"] = x.get_verbose();
    }

    inline void from_json(const json & j, Message& x) {
        x.set_jsonrpc(j.at("jsonrpc").get<std::string>());
    }

    inline void to_json(json & j, const Message & x) {
        j = json::object();
        j["jsonrpc"] = x.get_jsonrpc();
    }

    inline void from_json(const json & j, MessageActionItemElement& x) {
        x.set_title(j.at("title").get<std::string>());
    }

    inline void to_json(json & j, const MessageActionItemElement & x) {
        j = json::object();
        j["title"] = x.get_title();
    }

    inline void from_json(const json & j, Moniker& x) {
        x.set_identifier(j.at("identifier").get<std::string>());
        x.set_kind(get_stack_optional<MonikerKind>(j, "kind"));
        x.set_scheme(j.at("scheme").get<std::string>());
        x.set_unique(j.at("unique").get<UniquenessLevel>());
    }

    inline void to_json(json & j, const Moniker & x) {
        j = json::object();
        j["identifier"] = x.get_identifier();
        j["kind"] = x.get_kind();
        j["scheme"] = x.get_scheme();
        j["unique"] = x.get_unique();
    }

    inline void from_json(const json & j, MonikerOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const MonikerOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, MonikerParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const MonikerParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, MonikerRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const MonikerRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, NotebookCellTextDocumentFilter& x) {
        x.set_language(get_stack_optional<std::string>(j, "language"));
        x.set_notebook(j.at("notebook").get<NotebookUnion>());
    }

    inline void to_json(json & j, const NotebookCellTextDocumentFilter & x) {
        j = json::object();
        j["language"] = x.get_language();
        j["notebook"] = x.get_notebook();
    }

    inline void from_json(const json & j, NotebookDocumentFilter& x) {
        x.set_notebook_type(get_stack_optional<std::string>(j, "notebookType"));
        x.set_pattern(get_stack_optional<std::string>(j, "pattern"));
        x.set_scheme(get_stack_optional<std::string>(j, "scheme"));
    }

    inline void to_json(json & j, const NotebookDocumentFilter & x) {
        j = json::object();
        j["notebookType"] = x.get_notebook_type();
        j["pattern"] = x.get_pattern();
        j["scheme"] = x.get_scheme();
    }

    inline void from_json(const json & j, NotebookDocumentSyncOptionsClass& x) {
        x.set_notebook_selector(j.at("notebookSelector").get<std::vector<NotebookSelector>>());
        x.set_save(get_stack_optional<bool>(j, "save"));
    }

    inline void to_json(json & j, const NotebookDocumentSyncOptionsClass & x) {
        j = json::object();
        j["notebookSelector"] = x.get_notebook_selector();
        j["save"] = x.get_save();
    }

    inline void from_json(const json & j, NotebookDocumentSyncRegistrationOptions& x) {
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_notebook_selector(j.at("notebookSelector").get<std::vector<NotebookSelector>>());
        x.set_save(get_stack_optional<bool>(j, "save"));
    }

    inline void to_json(json & j, const NotebookDocumentSyncRegistrationOptions & x) {
        j = json::object();
        j["id"] = x.get_id();
        j["notebookSelector"] = x.get_notebook_selector();
        j["save"] = x.get_save();
    }

    inline void from_json(const json & j, NotificationMessage& x) {
        x.set_jsonrpc(j.at("jsonrpc").get<std::string>());
        x.set_method(j.at("method").get<std::string>());
        x.set_params(get_stack_optional<std::variant<std::vector<nlohmann::json>, std::map<std::string, nlohmann::json>>>(j, "params"));
    }

    inline void to_json(json & j, const NotificationMessage & x) {
        j = json::object();
        j["jsonrpc"] = x.get_jsonrpc();
        j["method"] = x.get_method();
        j["params"] = x.get_params();
    }

    inline void from_json(const json & j, ParameterInformationElement& x) {
        x.set_documentation(get_stack_optional<std::variant<DocumentationMarkupContent, std::string>>(j, "documentation"));
        x.set_label(j.at("label").get<ParameterInformationLabel>());
    }

    inline void to_json(json & j, const ParameterInformationElement & x) {
        j = json::object();
        j["documentation"] = x.get_documentation();
        j["label"] = x.get_label();
    }

    inline void from_json(const json & j, PartialResultParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
    }

    inline void to_json(json & j, const PartialResultParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
    }

    inline void from_json(const json & j, PrepareRenameParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const PrepareRenameParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, PreviousResultId& x) {
        x.set_uri(j.at("uri").get<std::string>());
        x.set_value(j.at("value").get<std::string>());
    }

    inline void to_json(json & j, const PreviousResultId & x) {
        j = json::object();
        j["uri"] = x.get_uri();
        j["value"] = x.get_value();
    }

    inline void from_json(const json & j, PublishDiagnosticsParams& x) {
        x.set_diagnostics(j.at("diagnostics").get<std::vector<Diagnostic>>());
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(get_stack_optional<int64_t>(j, "version"));
    }

    inline void to_json(json & j, const PublishDiagnosticsParams & x) {
        j = json::object();
        j["diagnostics"] = x.get_diagnostics();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, ReferenceContext& x) {
        x.set_include_declaration(j.at("includeDeclaration").get<bool>());
    }

    inline void to_json(json & j, const ReferenceContext & x) {
        j = json::object();
        j["includeDeclaration"] = x.get_include_declaration();
    }

    inline void from_json(const json & j, ReferenceParams& x) {
        x.set_context(j.at("context").get<ReferenceContext>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const ReferenceParams & x) {
        j = json::object();
        j["context"] = x.get_context();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, ReferenceRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const ReferenceRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, Registration& x) {
        x.set_id(j.at("id").get<std::string>());
        x.set_method(j.at("method").get<std::string>());
        x.set_register_options(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "registerOptions"));
    }

    inline void to_json(json & j, const Registration & x) {
        j = json::object();
        j["id"] = x.get_id();
        j["method"] = x.get_method();
        j["registerOptions"] = x.get_register_options();
    }

    inline void from_json(const json & j, RegistrationParams& x) {
        x.set_registrations(j.at("registrations").get<std::vector<Registration>>());
    }

    inline void to_json(json & j, const RegistrationParams & x) {
        j = json::object();
        j["registrations"] = x.get_registrations();
    }

    inline void from_json(const json & j, RelatedFullDocumentDiagnosticReport& x) {
        x.set_items(j.at("items").get<std::vector<Diagnostic>>());
        x.set_kind(j.at("kind").get<FullDocumentDiagnosticReportKind>());
        x.set_related_documents(get_stack_optional<std::map<std::string, RelatedDocumentValue>>(j, "relatedDocuments"));
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const RelatedFullDocumentDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["relatedDocuments"] = x.get_related_documents();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, RelatedUnchangedDocumentDiagnosticReport& x) {
        x.set_kind(j.at("kind").get<RelatedUnchangedDocumentDiagnosticReportKind>());
        x.set_related_documents(get_stack_optional<std::map<std::string, RelatedDocumentValue>>(j, "relatedDocuments"));
        x.set_result_id(j.at("resultId").get<std::string>());
    }

    inline void to_json(json & j, const RelatedUnchangedDocumentDiagnosticReport & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["relatedDocuments"] = x.get_related_documents();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, RenameFileOptions& x) {
        x.set_ignore_if_exists(get_stack_optional<bool>(j, "ignoreIfExists"));
        x.set_overwrite(get_stack_optional<bool>(j, "overwrite"));
    }

    inline void to_json(json & j, const RenameFileOptions & x) {
        j = json::object();
        j["ignoreIfExists"] = x.get_ignore_if_exists();
        j["overwrite"] = x.get_overwrite();
    }

    inline void from_json(const json & j, RenameFile& x) {
        x.set_annotation_id(get_stack_optional<std::string>(j, "annotationId"));
        x.set_kind(j.at("kind").get<RenameFileKind>());
        x.set_new_uri(j.at("newUri").get<std::string>());
        x.set_old_uri(j.at("oldUri").get<std::string>());
        x.set_options(get_stack_optional<RenameFileOptions>(j, "options"));
    }

    inline void to_json(json & j, const RenameFile & x) {
        j = json::object();
        j["annotationId"] = x.get_annotation_id();
        j["kind"] = x.get_kind();
        j["newUri"] = x.get_new_uri();
        j["oldUri"] = x.get_old_uri();
        j["options"] = x.get_options();
    }

    inline void from_json(const json & j, RenameFilesParams& x) {
        x.set_files(j.at("files").get<std::vector<FileRename>>());
    }

    inline void to_json(json & j, const RenameFilesParams & x) {
        j = json::object();
        j["files"] = x.get_files();
    }

    inline void from_json(const json & j, RenameParams& x) {
        x.set_new_name(j.at("newName").get<std::string>());
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const RenameParams & x) {
        j = json::object();
        j["newName"] = x.get_new_name();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, RenameRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_prepare_provider(get_stack_optional<bool>(j, "prepareProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const RenameRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["prepareProvider"] = x.get_prepare_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, RequestMessage& x) {
        x.set_id(j.at("id").get<ProgressToken>());
        x.set_jsonrpc(j.at("jsonrpc").get<std::string>());
        x.set_method(j.at("method").get<std::string>());
        x.set_params(get_stack_optional<std::variant<std::vector<nlohmann::json>, std::map<std::string, nlohmann::json>>>(j, "params"));
    }

    inline void to_json(json & j, const RequestMessage & x) {
        j = json::object();
        j["id"] = x.get_id();
        j["jsonrpc"] = x.get_jsonrpc();
        j["method"] = x.get_method();
        j["params"] = x.get_params();
    }

    inline void from_json(const json & j, ResponseError& x) {
        x.set_code(j.at("code").get<int64_t>());
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_message(j.at("message").get<std::string>());
    }

    inline void to_json(json & j, const ResponseError & x) {
        j = json::object();
        j["code"] = x.get_code();
        j["data"] = x.get_data();
        j["message"] = x.get_message();
    }

    inline void from_json(const json & j, ResponseMessage& x) {
        x.set_error(get_stack_optional<ResponseError>(j, "error"));
        x.set_id(get_stack_optional<std::variant<int64_t, std::string>>(j, "id"));
        x.set_jsonrpc(j.at("jsonrpc").get<std::string>());
        x.set_result(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "result"));
    }

    inline void to_json(json & j, const ResponseMessage & x) {
        j = json::object();
        j["error"] = x.get_error();
        j["id"] = x.get_id();
        j["jsonrpc"] = x.get_jsonrpc();
        j["result"] = x.get_result();
    }

    inline void from_json(const json & j, SaveOptions& x) {
        x.set_include_text(get_stack_optional<bool>(j, "includeText"));
    }

    inline void to_json(json & j, const SaveOptions & x) {
        j = json::object();
        j["includeText"] = x.get_include_text();
    }

    inline void from_json(const json & j, SelectionRange& x) {
        x.set_parent(get_heap_optional<SelectionRange>(j, "parent"));
        x.set_range(j.at("range").get<PurpleRange>());
    }

    inline void to_json(json & j, const SelectionRange & x) {
        j = json::object();
        j["parent"] = x.get_parent();
        j["range"] = x.get_range();
    }

    inline void from_json(const json & j, SelectionRangeOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SelectionRangeOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, SelectionRangeParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_positions(j.at("positions").get<std::vector<Position>>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const SelectionRangeParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["positions"] = x.get_positions();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, SelectionRangeRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SelectionRangeRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, SemanticTokens& x) {
        x.set_data(j.at("data").get<std::vector<int64_t>>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const SemanticTokens & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, SemanticTokensEdit& x) {
        x.set_data(get_stack_optional<std::vector<int64_t>>(j, "data"));
        x.set_delete_count(j.at("deleteCount").get<int64_t>());
        x.set_start(j.at("start").get<int64_t>());
    }

    inline void to_json(json & j, const SemanticTokensEdit & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["deleteCount"] = x.get_delete_count();
        j["start"] = x.get_start();
    }

    inline void from_json(const json & j, SemanticTokensDelta& x) {
        x.set_edits(j.at("edits").get<std::vector<SemanticTokensEdit>>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
    }

    inline void to_json(json & j, const SemanticTokensDelta & x) {
        j = json::object();
        j["edits"] = x.get_edits();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, SemanticTokensDeltaParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_previous_result_id(j.at("previousResultId").get<std::string>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const SemanticTokensDeltaParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["previousResultId"] = x.get_previous_result_id();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, SemanticTokensDeltaPartialResult& x) {
        x.set_edits(j.at("edits").get<std::vector<SemanticTokensEdit>>());
    }

    inline void to_json(json & j, const SemanticTokensDeltaPartialResult & x) {
        j = json::object();
        j["edits"] = x.get_edits();
    }

    inline void from_json(const json & j, FullOptionClass& x) {
        x.set_delta(get_stack_optional<bool>(j, "delta"));
    }

    inline void to_json(json & j, const FullOptionClass & x) {
        j = json::object();
        j["delta"] = x.get_delta();
    }

    inline void from_json(const json & j, RangeOptionClass& x) {
    }

    inline void to_json(json & j, const RangeOptionClass & x) {
        j = json::object();
    }

    inline void from_json(const json & j, SemanticTokensOptionsClass& x) {
        x.set_full(get_stack_optional<std::variant<bool, FullOptionClass>>(j, "full"));
        x.set_legend(j.at("legend").get<SemanticTokensLegend>());
        x.set_range(get_stack_optional<std::variant<bool, RangeOptionClass>>(j, "range"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SemanticTokensOptionsClass & x) {
        j = json::object();
        j["full"] = x.get_full();
        j["legend"] = x.get_legend();
        j["range"] = x.get_range();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, SemanticTokensParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const SemanticTokensParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, SemanticTokensPartialResult& x) {
        x.set_data(j.at("data").get<std::vector<int64_t>>());
    }

    inline void to_json(json & j, const SemanticTokensPartialResult & x) {
        j = json::object();
        j["data"] = x.get_data();
    }

    inline void from_json(const json & j, SemanticTokensRangeParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const SemanticTokensRangeParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["range"] = x.get_range();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, FullRegistrationOptionsClass& x) {
        x.set_delta(get_stack_optional<bool>(j, "delta"));
    }

    inline void to_json(json & j, const FullRegistrationOptionsClass & x) {
        j = json::object();
        j["delta"] = x.get_delta();
    }

    inline void from_json(const json & j, RangeRegistrationOptionClass& x) {
    }

    inline void to_json(json & j, const RangeRegistrationOptionClass & x) {
        j = json::object();
    }

    inline void from_json(const json & j, SemanticTokensRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_full(get_stack_optional<std::variant<bool, FullRegistrationOptionsClass>>(j, "full"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_legend(j.at("legend").get<SemanticTokensLegend>());
        x.set_range(get_stack_optional<std::variant<bool, RangeRegistrationOptionClass>>(j, "range"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SemanticTokensRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["full"] = x.get_full();
        j["id"] = x.get_id();
        j["legend"] = x.get_legend();
        j["range"] = x.get_range();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, SetTraceParams& x) {
        x.set_value(j.at("value").get<TraceValue>());
    }

    inline void to_json(json & j, const SetTraceParams & x) {
        j = json::object();
        j["value"] = x.get_value();
    }

    inline void from_json(const json & j, ShowDocumentParams& x) {
        x.set_external(get_stack_optional<bool>(j, "external"));
        x.set_selection(get_stack_optional<PurpleRange>(j, "selection"));
        x.set_take_focus(get_stack_optional<bool>(j, "takeFocus"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const ShowDocumentParams & x) {
        j = json::object();
        j["external"] = x.get_external();
        j["selection"] = x.get_selection();
        j["takeFocus"] = x.get_take_focus();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, ShowDocumentResult& x) {
        x.set_success(j.at("success").get<bool>());
    }

    inline void to_json(json & j, const ShowDocumentResult & x) {
        j = json::object();
        j["success"] = x.get_success();
    }

    inline void from_json(const json & j, ShowMessageParams& x) {
        x.set_message(j.at("message").get<std::string>());
        x.set_type(j.at("type").get<double>());
    }

    inline void to_json(json & j, const ShowMessageParams & x) {
        j = json::object();
        j["message"] = x.get_message();
        j["type"] = x.get_type();
    }

    inline void from_json(const json & j, ShowMessageRequestParams& x) {
        x.set_actions(get_stack_optional<std::vector<MessageActionItemElement>>(j, "actions"));
        x.set_message(j.at("message").get<std::string>());
        x.set_type(j.at("type").get<double>());
    }

    inline void to_json(json & j, const ShowMessageRequestParams & x) {
        j = json::object();
        j["actions"] = x.get_actions();
        j["message"] = x.get_message();
        j["type"] = x.get_type();
    }

    inline void from_json(const json & j, SignatureInformationElement& x) {
        x.set_active_parameter(get_stack_optional<int64_t>(j, "activeParameter"));
        x.set_documentation(get_stack_optional<std::variant<DocumentationMarkupContent, std::string>>(j, "documentation"));
        x.set_label(j.at("label").get<std::string>());
        x.set_parameters(get_stack_optional<std::vector<ParameterInformationElement>>(j, "parameters"));
    }

    inline void to_json(json & j, const SignatureInformationElement & x) {
        j = json::object();
        j["activeParameter"] = x.get_active_parameter();
        j["documentation"] = x.get_documentation();
        j["label"] = x.get_label();
        j["parameters"] = x.get_parameters();
    }

    inline void from_json(const json & j, SignatureHelp& x) {
        x.set_active_parameter(get_stack_optional<int64_t>(j, "activeParameter"));
        x.set_active_signature(get_stack_optional<int64_t>(j, "activeSignature"));
        x.set_signatures(j.at("signatures").get<std::vector<SignatureInformationElement>>());
    }

    inline void to_json(json & j, const SignatureHelp & x) {
        j = json::object();
        j["activeParameter"] = x.get_active_parameter();
        j["activeSignature"] = x.get_active_signature();
        j["signatures"] = x.get_signatures();
    }

    inline void from_json(const json & j, SignatureHelpContext& x) {
        x.set_active_signature_help(get_stack_optional<SignatureHelp>(j, "activeSignatureHelp"));
        x.set_is_retrigger(j.at("isRetrigger").get<bool>());
        x.set_trigger_character(get_stack_optional<std::string>(j, "triggerCharacter"));
        x.set_trigger_kind(j.at("triggerKind").get<double>());
    }

    inline void to_json(json & j, const SignatureHelpContext & x) {
        j = json::object();
        j["activeSignatureHelp"] = x.get_active_signature_help();
        j["isRetrigger"] = x.get_is_retrigger();
        j["triggerCharacter"] = x.get_trigger_character();
        j["triggerKind"] = x.get_trigger_kind();
    }

    inline void from_json(const json & j, SignatureHelpParams& x) {
        x.set_context(get_stack_optional<SignatureHelpContext>(j, "context"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const SignatureHelpParams & x) {
        j = json::object();
        j["context"] = x.get_context();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, SignatureHelpRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_retrigger_characters(get_stack_optional<std::vector<std::string>>(j, "retriggerCharacters"));
        x.set_trigger_characters(get_stack_optional<std::vector<std::string>>(j, "triggerCharacters"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const SignatureHelpRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["retriggerCharacters"] = x.get_retrigger_characters();
        j["triggerCharacters"] = x.get_trigger_characters();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, StaticRegistrationOptions& x) {
        x.set_id(get_stack_optional<std::string>(j, "id"));
    }

    inline void to_json(json & j, const StaticRegistrationOptions & x) {
        j = json::object();
        j["id"] = x.get_id();
    }

    inline void from_json(const json & j, SymbolInformation& x) {
        x.set_container_name(get_stack_optional<std::string>(j, "containerName"));
        x.set_deprecated(get_stack_optional<bool>(j, "deprecated"));
        x.set_kind(j.at("kind").get<double>());
        x.set_location(j.at("location").get<LocationClass>());
        x.set_name(j.at("name").get<std::string>());
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
    }

    inline void to_json(json & j, const SymbolInformation & x) {
        j = json::object();
        j["containerName"] = x.get_container_name();
        j["deprecated"] = x.get_deprecated();
        j["kind"] = x.get_kind();
        j["location"] = x.get_location();
        j["name"] = x.get_name();
        j["tags"] = x.get_tags();
    }

    inline void from_json(const json & j, TextDocumentChangeRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_sync_kind(j.at("syncKind").get<double>());
    }

    inline void to_json(json & j, const TextDocumentChangeRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["syncKind"] = x.get_sync_kind();
    }

    inline void from_json(const json & j, TextDocumentEditClass& x) {
        x.set_edits(j.at("edits").get<std::vector<EditElement>>());
        x.set_text_document(j.at("textDocument").get<OptionalVersionedTextDocumentIdentifier>());
    }

    inline void to_json(json & j, const TextDocumentEditClass & x) {
        j = json::object();
        j["edits"] = x.get_edits();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, TextDocumentPositionParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
    }

    inline void to_json(json & j, const TextDocumentPositionParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, TextDocumentRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
    }

    inline void to_json(json & j, const TextDocumentRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
    }

    inline void from_json(const json & j, TextDocumentSaveRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_include_text(get_stack_optional<bool>(j, "includeText"));
    }

    inline void to_json(json & j, const TextDocumentSaveRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["includeText"] = x.get_include_text();
    }

    inline void from_json(const json & j, TypeDefinitionOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const TypeDefinitionOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, TypeDefinitionParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const TypeDefinitionParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, TypeDefinitionRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const TypeDefinitionRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, TypeHierarchyItem& x) {
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_detail(get_stack_optional<std::string>(j, "detail"));
        x.set_kind(j.at("kind").get<double>());
        x.set_name(j.at("name").get<std::string>());
        x.set_range(j.at("range").get<PurpleRange>());
        x.set_selection_range(j.at("selectionRange").get<PurpleRange>());
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const TypeHierarchyItem & x) {
        j = json::object();
        j["data"] = x.get_data();
        j["detail"] = x.get_detail();
        j["kind"] = x.get_kind();
        j["name"] = x.get_name();
        j["range"] = x.get_range();
        j["selectionRange"] = x.get_selection_range();
        j["tags"] = x.get_tags();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, TypeHierarchyOptionsClass& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const TypeHierarchyOptionsClass & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, TypeHierarchyPrepareParams& x) {
        x.set_position(j.at("position").get<Position>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const TypeHierarchyPrepareParams & x) {
        j = json::object();
        j["position"] = x.get_position();
        j["textDocument"] = x.get_text_document();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, TypeHierarchyRegistrationOptions& x) {
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "documentSelector"));
        x.set_id(get_stack_optional<std::string>(j, "id"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const TypeHierarchyRegistrationOptions & x) {
        j = json::object();
        j["documentSelector"] = x.get_document_selector();
        j["id"] = x.get_id();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, TypeHierarchySubtypesParams& x) {
        x.set_item(j.at("item").get<TypeHierarchyItem>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const TypeHierarchySubtypesParams & x) {
        j = json::object();
        j["item"] = x.get_item();
        j["partialResultToken"] = x.get_partial_result_token();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, TypeHierarchySupertypesParams& x) {
        x.set_item(j.at("item").get<TypeHierarchyItem>());
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const TypeHierarchySupertypesParams & x) {
        j = json::object();
        j["item"] = x.get_item();
        j["partialResultToken"] = x.get_partial_result_token();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, UnchangedDocumentDiagnosticReport& x) {
        x.set_kind(j.at("kind").get<RelatedUnchangedDocumentDiagnosticReportKind>());
        x.set_result_id(j.at("resultId").get<std::string>());
    }

    inline void to_json(json & j, const UnchangedDocumentDiagnosticReport & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
    }

    inline void from_json(const json & j, Unregistration& x) {
        x.set_id(j.at("id").get<std::string>());
        x.set_method(j.at("method").get<std::string>());
    }

    inline void to_json(json & j, const Unregistration & x) {
        j = json::object();
        j["id"] = x.get_id();
        j["method"] = x.get_method();
    }

    inline void from_json(const json & j, UnregistrationParams& x) {
        x.set_unregisterations(j.at("unregisterations").get<std::vector<Unregistration>>());
    }

    inline void to_json(json & j, const UnregistrationParams & x) {
        j = json::object();
        j["unregisterations"] = x.get_unregisterations();
    }

    inline void from_json(const json & j, WillSaveTextDocumentParams& x) {
        x.set_reason(j.at("reason").get<double>());
        x.set_text_document(j.at("textDocument").get<TextDocumentIdentifier>());
    }

    inline void to_json(json & j, const WillSaveTextDocumentParams & x) {
        j = json::object();
        j["reason"] = x.get_reason();
        j["textDocument"] = x.get_text_document();
    }

    inline void from_json(const json & j, WorkDoneProgressBegin& x) {
        x.set_cancellable(get_stack_optional<bool>(j, "cancellable"));
        x.set_kind(j.at("kind").get<WorkDoneProgressBeginKind>());
        x.set_message(get_stack_optional<std::string>(j, "message"));
        x.set_percentage(get_stack_optional<int64_t>(j, "percentage"));
        x.set_title(j.at("title").get<std::string>());
    }

    inline void to_json(json & j, const WorkDoneProgressBegin & x) {
        j = json::object();
        j["cancellable"] = x.get_cancellable();
        j["kind"] = x.get_kind();
        j["message"] = x.get_message();
        j["percentage"] = x.get_percentage();
        j["title"] = x.get_title();
    }

    inline void from_json(const json & j, WorkDoneProgressCancelParams& x) {
        x.set_token(j.at("token").get<ProgressToken>());
    }

    inline void to_json(json & j, const WorkDoneProgressCancelParams & x) {
        j = json::object();
        j["token"] = x.get_token();
    }

    inline void from_json(const json & j, WorkDoneProgressCreateParams& x) {
        x.set_token(j.at("token").get<ProgressToken>());
    }

    inline void to_json(json & j, const WorkDoneProgressCreateParams & x) {
        j = json::object();
        j["token"] = x.get_token();
    }

    inline void from_json(const json & j, WorkDoneProgressEnd& x) {
        x.set_kind(j.at("kind").get<WorkDoneProgressEndKind>());
        x.set_message(get_stack_optional<std::string>(j, "message"));
    }

    inline void to_json(json & j, const WorkDoneProgressEnd & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["message"] = x.get_message();
    }

    inline void from_json(const json & j, WorkDoneProgressOptions& x) {
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const WorkDoneProgressOptions & x) {
        j = json::object();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, WorkDoneProgressParams& x) {
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const WorkDoneProgressParams & x) {
        j = json::object();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, WorkDoneProgressReport& x) {
        x.set_cancellable(get_stack_optional<bool>(j, "cancellable"));
        x.set_kind(j.at("kind").get<WorkDoneProgressReportKind>());
        x.set_message(get_stack_optional<std::string>(j, "message"));
        x.set_percentage(get_stack_optional<int64_t>(j, "percentage"));
    }

    inline void to_json(json & j, const WorkDoneProgressReport & x) {
        j = json::object();
        j["cancellable"] = x.get_cancellable();
        j["kind"] = x.get_kind();
        j["message"] = x.get_message();
        j["percentage"] = x.get_percentage();
    }

    inline void from_json(const json & j, WorkspaceDiagnosticParams& x) {
        x.set_identifier(get_stack_optional<std::string>(j, "identifier"));
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_previous_result_ids(j.at("previousResultIds").get<std::vector<PreviousResultId>>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const WorkspaceDiagnosticParams & x) {
        j = json::object();
        j["identifier"] = x.get_identifier();
        j["partialResultToken"] = x.get_partial_result_token();
        j["previousResultIds"] = x.get_previous_result_ids();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, WorkspaceDocumentDiagnosticReport& x) {
        x.set_items(get_stack_optional<std::vector<Diagnostic>>(j, "items"));
        x.set_kind(j.at("kind").get<DocumentDiagnosticReportKind>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(get_stack_optional<int64_t>(j, "version"));
    }

    inline void to_json(json & j, const WorkspaceDocumentDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, WorkspaceDiagnosticReport& x) {
        x.set_items(j.at("items").get<std::vector<WorkspaceDocumentDiagnosticReport>>());
    }

    inline void to_json(json & j, const WorkspaceDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
    }

    inline void from_json(const json & j, WorkspaceDiagnosticReportPartialResult& x) {
        x.set_items(j.at("items").get<std::vector<WorkspaceDocumentDiagnosticReport>>());
    }

    inline void to_json(json & j, const WorkspaceDiagnosticReportPartialResult & x) {
        j = json::object();
        j["items"] = x.get_items();
    }

    inline void from_json(const json & j, WorkspaceFullDocumentDiagnosticReport& x) {
        x.set_items(j.at("items").get<std::vector<Diagnostic>>());
        x.set_kind(j.at("kind").get<FullDocumentDiagnosticReportKind>());
        x.set_result_id(get_stack_optional<std::string>(j, "resultId"));
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(get_stack_optional<int64_t>(j, "version"));
    }

    inline void to_json(json & j, const WorkspaceFullDocumentDiagnosticReport & x) {
        j = json::object();
        j["items"] = x.get_items();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, WorkspaceSymbolLocation& x) {
        x.set_range(get_stack_optional<PurpleRange>(j, "range"));
        x.set_uri(j.at("uri").get<std::string>());
    }

    inline void to_json(json & j, const WorkspaceSymbolLocation & x) {
        j = json::object();
        j["range"] = x.get_range();
        j["uri"] = x.get_uri();
    }

    inline void from_json(const json & j, WorkspaceSymbol& x) {
        x.set_container_name(get_stack_optional<std::string>(j, "containerName"));
        x.set_data(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "data"));
        x.set_kind(j.at("kind").get<double>());
        x.set_location(j.at("location").get<WorkspaceSymbolLocation>());
        x.set_name(j.at("name").get<std::string>());
        x.set_tags(get_stack_optional<std::vector<double>>(j, "tags"));
    }

    inline void to_json(json & j, const WorkspaceSymbol & x) {
        j = json::object();
        j["containerName"] = x.get_container_name();
        j["data"] = x.get_data();
        j["kind"] = x.get_kind();
        j["location"] = x.get_location();
        j["name"] = x.get_name();
        j["tags"] = x.get_tags();
    }

    inline void from_json(const json & j, WorkspaceSymbolParams& x) {
        x.set_partial_result_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "partialResultToken"));
        x.set_query(j.at("query").get<std::string>());
        x.set_work_done_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "workDoneToken"));
    }

    inline void to_json(json & j, const WorkspaceSymbolParams & x) {
        j = json::object();
        j["partialResultToken"] = x.get_partial_result_token();
        j["query"] = x.get_query();
        j["workDoneToken"] = x.get_work_done_token();
    }

    inline void from_json(const json & j, WorkspaceSymbolRegistrationOptions& x) {
        x.set_resolve_provider(get_stack_optional<bool>(j, "resolveProvider"));
        x.set_work_done_progress(get_stack_optional<bool>(j, "workDoneProgress"));
    }

    inline void to_json(json & j, const WorkspaceSymbolRegistrationOptions & x) {
        j = json::object();
        j["resolveProvider"] = x.get_resolve_provider();
        j["workDoneProgress"] = x.get_work_done_progress();
    }

    inline void from_json(const json & j, WorkspaceUnchangedDocumentDiagnosticReport& x) {
        x.set_kind(j.at("kind").get<RelatedUnchangedDocumentDiagnosticReportKind>());
        x.set_result_id(j.at("resultId").get<std::string>());
        x.set_uri(j.at("uri").get<std::string>());
        x.set_version(get_stack_optional<int64_t>(j, "version"));
    }

    inline void to_json(json & j, const WorkspaceUnchangedDocumentDiagnosticReport & x) {
        j = json::object();
        j["kind"] = x.get_kind();
        j["resultId"] = x.get_result_id();
        j["uri"] = x.get_uri();
        j["version"] = x.get_version();
    }

    inline void from_json(const json & j, ModelsClass& x) {
        x.set_annotated_text_edit(get_stack_optional<AnnotatedTextEdit>(j, "AnnotatedTextEdit"));
        x.set_apply_workspace_edit_params(get_stack_optional<ApplyWorkspaceEditParams>(j, "ApplyWorkspaceEditParams"));
        x.set_apply_workspace_edit_result(get_stack_optional<ApplyWorkspaceEditResult>(j, "ApplyWorkspaceEditResult"));
        x.set_call_hierarchy_client_capabilities(get_stack_optional<CallHierarchyClientCapabilities>(j, "CallHierarchyClientCapabilities"));
        x.set_call_hierarchy_incoming_call(get_stack_optional<CallHierarchyIncomingCall>(j, "CallHierarchyIncomingCall"));
        x.set_call_hierarchy_incoming_calls_params(get_stack_optional<CallHierarchyIncomingCallsParams>(j, "CallHierarchyIncomingCallsParams"));
        x.set_call_hierarchy_item(get_stack_optional<CallHierarchyItem>(j, "CallHierarchyItem"));
        x.set_call_hierarchy_options(get_stack_optional<CallHierarchyOptionsClass>(j, "CallHierarchyOptions"));
        x.set_call_hierarchy_outgoing_call(get_stack_optional<CallHierarchyOutgoingCall>(j, "CallHierarchyOutgoingCall"));
        x.set_call_hierarchy_outgoing_calls_params(get_stack_optional<CallHierarchyOutgoingCallsParams>(j, "CallHierarchyOutgoingCallsParams"));
        x.set_call_hierarchy_prepare_params(get_stack_optional<CallHierarchyPrepareParams>(j, "CallHierarchyPrepareParams"));
        x.set_call_hierarchy_registration_options(get_stack_optional<CallHierarchyRegistrationOptions>(j, "CallHierarchyRegistrationOptions"));
        x.set_cancel_params(get_stack_optional<CancelParams>(j, "CancelParams"));
        x.set_change_annotation(get_stack_optional<ChangeAnnotation>(j, "ChangeAnnotation"));
        x.set_change_annotation_identifier(get_stack_optional<std::string>(j, "ChangeAnnotationIdentifier"));
        x.set_client_capabilities(get_stack_optional<ClientCapabilities>(j, "ClientCapabilities"));
        x.set_code_action(get_stack_optional<CodeAction>(j, "CodeAction"));
        x.set_code_action_client_capabilities(get_stack_optional<CodeActionClientCapabilities>(j, "CodeActionClientCapabilities"));
        x.set_code_action_context(get_stack_optional<CodeActionContext>(j, "CodeActionContext"));
        x.set_code_action_kind(get_stack_optional<std::string>(j, "CodeActionKind"));
        x.set_code_action_options(get_stack_optional<CodeActionOptions>(j, "CodeActionOptions"));
        x.set_code_action_params(get_stack_optional<CodeActionParams>(j, "CodeActionParams"));
        x.set_code_action_registration_options(get_stack_optional<CodeActionRegistrationOptions>(j, "CodeActionRegistrationOptions"));
        x.set_code_action_trigger_kind(get_stack_optional<double>(j, "CodeActionTriggerKind"));
        x.set_code_description(get_stack_optional<CodeDescription>(j, "CodeDescription"));
        x.set_code_lens(get_stack_optional<CodeLens>(j, "CodeLens"));
        x.set_code_lens_client_capabilities(get_stack_optional<CodeLensClientCapabilities>(j, "CodeLensClientCapabilities"));
        x.set_code_lens_options(get_stack_optional<CodeLensOptions>(j, "CodeLensOptions"));
        x.set_code_lens_params(get_stack_optional<CodeLensParams>(j, "CodeLensParams"));
        x.set_code_lens_registration_options(get_stack_optional<CodeLensRegistrationOptions>(j, "CodeLensRegistrationOptions"));
        x.set_code_lens_workspace_client_capabilities(get_stack_optional<CodeLensWorkspaceClientCapabilities>(j, "CodeLensWorkspaceClientCapabilities"));
        x.set_color(get_stack_optional<Color>(j, "Color"));
        x.set_color_information(get_stack_optional<ColorInformation>(j, "ColorInformation"));
        x.set_color_presentation(get_stack_optional<ColorPresentation>(j, "ColorPresentation"));
        x.set_color_presentation_params(get_stack_optional<ColorPresentationParams>(j, "ColorPresentationParams"));
        x.set_command(get_stack_optional<Command>(j, "Command"));
        x.set_completion_client_capabilities(get_stack_optional<CompletionClientCapabilities>(j, "CompletionClientCapabilities"));
        x.set_completion_context(get_stack_optional<CompletionContext>(j, "CompletionContext"));
        x.set_completion_item(get_stack_optional<CompletionItem>(j, "CompletionItem"));
        x.set_completion_item_kind(get_stack_optional<double>(j, "CompletionItemKind"));
        x.set_completion_item_label_details(get_stack_optional<CompletionItemLabelDetails>(j, "CompletionItemLabelDetails"));
        x.set_completion_item_tag(get_stack_optional<double>(j, "CompletionItemTag"));
        x.set_completion_list(get_stack_optional<CompletionListClass>(j, "CompletionList"));
        x.set_completion_options(get_stack_optional<CompletionOptions>(j, "CompletionOptions"));
        x.set_completion_params(get_stack_optional<CompletionParams>(j, "CompletionParams"));
        x.set_completion_registration_options(get_stack_optional<CompletionRegistrationOptions>(j, "CompletionRegistrationOptions"));
        x.set_completion_trigger_kind(get_stack_optional<double>(j, "CompletionTriggerKind"));
        x.set_configuration_item(get_stack_optional<ConfigurationItem>(j, "ConfigurationItem"));
        x.set_configuration_params(get_stack_optional<ConfigurationParams>(j, "ConfigurationParams"));
        x.set_create_file(get_stack_optional<CreateFile>(j, "CreateFile"));
        x.set_create_file_options(get_stack_optional<CreateFileOptions>(j, "CreateFileOptions"));
        x.set_create_files_params(get_stack_optional<CreateFilesParams>(j, "CreateFilesParams"));
        x.set_decimal(get_stack_optional<double>(j, "decimal"));
        x.set_declaration_client_capabilities(get_stack_optional<DeclarationClientCapabilities>(j, "DeclarationClientCapabilities"));
        x.set_declaration_options(get_stack_optional<DeclarationOptions>(j, "DeclarationOptions"));
        x.set_declaration_params(get_stack_optional<DeclarationParams>(j, "DeclarationParams"));
        x.set_declaration_registration_options(get_stack_optional<DeclarationRegistrationOptions>(j, "DeclarationRegistrationOptions"));
        x.set_definition_client_capabilities(get_stack_optional<DefinitionClientCapabilities>(j, "DefinitionClientCapabilities"));
        x.set_definition_options(get_stack_optional<DefinitionOptions>(j, "DefinitionOptions"));
        x.set_definition_params(get_stack_optional<DefinitionParams>(j, "DefinitionParams"));
        x.set_definition_registration_options(get_stack_optional<DefinitionRegistrationOptions>(j, "DefinitionRegistrationOptions"));
        x.set_delete_file(get_stack_optional<DeleteFile>(j, "DeleteFile"));
        x.set_delete_file_options(get_stack_optional<DeleteFileOptions>(j, "DeleteFileOptions"));
        x.set_delete_files_params(get_stack_optional<DeleteFilesParams>(j, "DeleteFilesParams"));
        x.set_diagnostic(get_stack_optional<Diagnostic>(j, "Diagnostic"));
        x.set_diagnostic_client_capabilities(get_stack_optional<DiagnosticClientCapabilities>(j, "DiagnosticClientCapabilities"));
        x.set_diagnostic_options(get_stack_optional<DiagnosticOptions>(j, "DiagnosticOptions"));
        x.set_diagnostic_registration_options(get_stack_optional<DiagnosticRegistrationOptions>(j, "DiagnosticRegistrationOptions"));
        x.set_diagnostic_related_information(get_stack_optional<DiagnosticRelatedInformation>(j, "DiagnosticRelatedInformation"));
        x.set_diagnostic_server_cancellation_data(get_stack_optional<DiagnosticServerCancellationData>(j, "DiagnosticServerCancellationData"));
        x.set_diagnostic_severity(get_stack_optional<double>(j, "DiagnosticSeverity"));
        x.set_diagnostic_tag(get_stack_optional<double>(j, "DiagnosticTag"));
        x.set_diagnostic_workspace_client_capabilities(get_stack_optional<DiagnosticWorkspaceClientCapabilities>(j, "DiagnosticWorkspaceClientCapabilities"));
        x.set_did_change_configuration_client_capabilities(get_stack_optional<DidChangeConfigurationClientCapabilities>(j, "DidChangeConfigurationClientCapabilities"));
        x.set_did_change_configuration_params(get_stack_optional<DidChangeConfigurationParams>(j, "DidChangeConfigurationParams"));
        x.set_did_change_notebook_document_params(get_stack_optional<DidChangeNotebookDocumentParams>(j, "DidChangeNotebookDocumentParams"));
        x.set_did_change_text_document_params(get_stack_optional<DidChangeTextDocumentParams>(j, "DidChangeTextDocumentParams"));
        x.set_did_change_watched_files_client_capabilities(get_stack_optional<DidChangeWatchedFilesClientCapabilities>(j, "DidChangeWatchedFilesClientCapabilities"));
        x.set_did_change_watched_files_params(get_stack_optional<DidChangeWatchedFilesParams>(j, "DidChangeWatchedFilesParams"));
        x.set_did_change_watched_files_registration_options(get_stack_optional<DidChangeWatchedFilesRegistrationOptions>(j, "DidChangeWatchedFilesRegistrationOptions"));
        x.set_did_change_workspace_folders_params(get_stack_optional<DidChangeWorkspaceFoldersParams>(j, "DidChangeWorkspaceFoldersParams"));
        x.set_did_close_notebook_document_params(get_stack_optional<DidCloseNotebookDocumentParams>(j, "DidCloseNotebookDocumentParams"));
        x.set_did_close_text_document_params(get_stack_optional<DidCloseTextDocumentParams>(j, "DidCloseTextDocumentParams"));
        x.set_did_open_notebook_document_params(get_stack_optional<DidOpenNotebookDocumentParams>(j, "DidOpenNotebookDocumentParams"));
        x.set_did_open_text_document_params(get_stack_optional<DidOpenTextDocumentParams>(j, "DidOpenTextDocumentParams"));
        x.set_did_save_notebook_document_params(get_stack_optional<DidSaveNotebookDocumentParams>(j, "DidSaveNotebookDocumentParams"));
        x.set_did_save_text_document_params(get_stack_optional<DidSaveTextDocumentParams>(j, "DidSaveTextDocumentParams"));
        x.set_document_color_client_capabilities(get_stack_optional<DocumentColorClientCapabilities>(j, "DocumentColorClientCapabilities"));
        x.set_document_color_options(get_stack_optional<DocumentColorOptionsClass>(j, "DocumentColorOptions"));
        x.set_document_color_params(get_stack_optional<DocumentColorParams>(j, "DocumentColorParams"));
        x.set_document_color_registration_options(get_stack_optional<DocumentColorRegistrationOptions>(j, "DocumentColorRegistrationOptions"));
        x.set_document_diagnostic_params(get_stack_optional<DocumentDiagnosticParams>(j, "DocumentDiagnosticParams"));
        x.set_document_diagnostic_report(get_stack_optional<DocumentDiagnosticReport>(j, "DocumentDiagnosticReport"));
        x.set_document_diagnostic_report_kind(get_stack_optional<DocumentDiagnosticReportKind>(j, "DocumentDiagnosticReportKind"));
        x.set_document_diagnostic_report_partial_result(get_stack_optional<DocumentDiagnosticReportPartialResult>(j, "DocumentDiagnosticReportPartialResult"));
        x.set_document_filter(get_stack_optional<DocumentFilter>(j, "DocumentFilter"));
        x.set_document_formatting_client_capabilities(get_stack_optional<DocumentFormattingClientCapabilities>(j, "DocumentFormattingClientCapabilities"));
        x.set_document_formatting_options(get_stack_optional<DocumentFormattingOptions>(j, "DocumentFormattingOptions"));
        x.set_document_formatting_params(get_stack_optional<DocumentFormattingParams>(j, "DocumentFormattingParams"));
        x.set_document_formatting_registration_options(get_stack_optional<DocumentFormattingRegistrationOptions>(j, "DocumentFormattingRegistrationOptions"));
        x.set_document_highlight(get_stack_optional<DocumentHighlight>(j, "DocumentHighlight"));
        x.set_document_highlight_client_capabilities(get_stack_optional<DocumentHighlightClientCapabilities>(j, "DocumentHighlightClientCapabilities"));
        x.set_document_highlight_kind(get_stack_optional<double>(j, "DocumentHighlightKind"));
        x.set_document_highlight_options(get_stack_optional<DocumentHighlightOptions>(j, "DocumentHighlightOptions"));
        x.set_document_highlight_params(get_stack_optional<DocumentHighlightParams>(j, "DocumentHighlightParams"));
        x.set_document_highlight_registration_options(get_stack_optional<DocumentHighlightRegistrationOptions>(j, "DocumentHighlightRegistrationOptions"));
        x.set_document_link(get_stack_optional<DocumentLink>(j, "DocumentLink"));
        x.set_document_link_client_capabilities(get_stack_optional<DocumentLinkClientCapabilities>(j, "DocumentLinkClientCapabilities"));
        x.set_document_link_options(get_stack_optional<DocumentLinkOptions>(j, "DocumentLinkOptions"));
        x.set_document_link_params(get_stack_optional<DocumentLinkParams>(j, "DocumentLinkParams"));
        x.set_document_link_registration_options(get_stack_optional<DocumentLinkRegistrationOptions>(j, "DocumentLinkRegistrationOptions"));
        x.set_document_on_type_formatting_client_capabilities(get_stack_optional<DocumentOnTypeFormattingClientCapabilities>(j, "DocumentOnTypeFormattingClientCapabilities"));
        x.set_document_on_type_formatting_options(get_stack_optional<DocumentOnTypeFormattingOptions>(j, "DocumentOnTypeFormattingOptions"));
        x.set_document_on_type_formatting_params(get_stack_optional<DocumentOnTypeFormattingParams>(j, "DocumentOnTypeFormattingParams"));
        x.set_document_on_type_formatting_registration_options(get_stack_optional<DocumentOnTypeFormattingRegistrationOptions>(j, "DocumentOnTypeFormattingRegistrationOptions"));
        x.set_document_range_formatting_client_capabilities(get_stack_optional<DocumentRangeFormattingClientCapabilities>(j, "DocumentRangeFormattingClientCapabilities"));
        x.set_document_range_formatting_options(get_stack_optional<DocumentRangeFormattingOptions>(j, "DocumentRangeFormattingOptions"));
        x.set_document_range_formatting_params(get_stack_optional<DocumentRangeFormattingParams>(j, "DocumentRangeFormattingParams"));
        x.set_document_range_formatting_registration_options(get_stack_optional<DocumentRangeFormattingRegistrationOptions>(j, "DocumentRangeFormattingRegistrationOptions"));
        x.set_document_selector(get_stack_optional<std::vector<DocumentFilter>>(j, "DocumentSelector"));
        x.set_document_symbol(get_stack_optional<DocumentSymbol>(j, "DocumentSymbol"));
        x.set_document_symbol_client_capabilities(get_stack_optional<DocumentSymbolClientCapabilities>(j, "DocumentSymbolClientCapabilities"));
        x.set_document_symbol_options(get_stack_optional<DocumentSymbolOptions>(j, "DocumentSymbolOptions"));
        x.set_document_symbol_params(get_stack_optional<DocumentSymbolParams>(j, "DocumentSymbolParams"));
        x.set_document_symbol_registration_options(get_stack_optional<DocumentSymbolRegistrationOptions>(j, "DocumentSymbolRegistrationOptions"));
        x.set_document_uri(get_stack_optional<std::string>(j, "DocumentUri"));
        x.set_error_codes(get_stack_optional<double>(j, "ErrorCodes"));
        x.set_execute_command_client_capabilities(get_stack_optional<ExecuteCommandClientCapabilities>(j, "ExecuteCommandClientCapabilities"));
        x.set_execute_command_options(get_stack_optional<ExecuteCommandOptions>(j, "ExecuteCommandOptions"));
        x.set_execute_command_params(get_stack_optional<ExecuteCommandParams>(j, "ExecuteCommandParams"));
        x.set_execute_command_registration_options(get_stack_optional<ExecuteCommandRegistrationOptions>(j, "ExecuteCommandRegistrationOptions"));
        x.set_execution_summary(get_stack_optional<ExecutionSummary>(j, "ExecutionSummary"));
        x.set_failure_handling_kind(get_stack_optional<FailureHandlingKind>(j, "FailureHandlingKind"));
        x.set_file_change_type(get_stack_optional<double>(j, "FileChangeType"));
        x.set_file_create(get_stack_optional<FileCreate>(j, "FileCreate"));
        x.set_file_delete(get_stack_optional<FileDelete>(j, "FileDelete"));
        x.set_file_event(get_stack_optional<FileEvent>(j, "FileEvent"));
        x.set_file_operation_filter(get_stack_optional<FileOperationFilter>(j, "FileOperationFilter"));
        x.set_file_operation_pattern(get_stack_optional<FileOperationPattern>(j, "FileOperationPattern"));
        x.set_file_operation_pattern_kind(get_stack_optional<FileOperationPatternKind>(j, "FileOperationPatternKind"));
        x.set_file_operation_pattern_options(get_stack_optional<FileOperationPatternOptions>(j, "FileOperationPatternOptions"));
        x.set_file_operation_registration_options(get_stack_optional<FileOperationRegistrationOptions>(j, "FileOperationRegistrationOptions"));
        x.set_file_rename(get_stack_optional<FileRename>(j, "FileRename"));
        x.set_file_system_watcher(get_stack_optional<FileSystemWatcher>(j, "FileSystemWatcher"));
        x.set_folding_range(get_stack_optional<FoldingRangeClass>(j, "FoldingRange"));
        x.set_folding_range_client_capabilities(get_stack_optional<FoldingRangeClientCapabilities>(j, "FoldingRangeClientCapabilities"));
        x.set_folding_range_kind(get_stack_optional<std::string>(j, "FoldingRangeKind"));
        x.set_folding_range_options(get_stack_optional<FoldingRangeOptionsClass>(j, "FoldingRangeOptions"));
        x.set_folding_range_params(get_stack_optional<FoldingRangeParams>(j, "FoldingRangeParams"));
        x.set_folding_range_registration_options(get_stack_optional<FoldingRangeRegistrationOptions>(j, "FoldingRangeRegistrationOptions"));
        x.set_formatting_options(get_stack_optional<FormattingOptions>(j, "FormattingOptions"));
        x.set_full_document_diagnostic_report(get_stack_optional<FullDocumentDiagnosticReport>(j, "FullDocumentDiagnosticReport"));
        x.set_glob_pattern(get_stack_optional<std::variant<RelativePattern, std::string>>(j, "GlobPattern"));
        x.set_hover(get_stack_optional<Hover>(j, "Hover"));
        x.set_hover_client_capabilities(get_stack_optional<HoverClientCapabilities>(j, "HoverClientCapabilities"));
        x.set_hover_options(get_stack_optional<HoverOptions>(j, "HoverOptions"));
        x.set_hover_params(get_stack_optional<HoverParams>(j, "HoverParams"));
        x.set_hover_registration_options(get_stack_optional<HoverRegistrationOptions>(j, "HoverRegistrationOptions"));
        x.set_implementation_client_capabilities(get_stack_optional<ImplementationClientCapabilities>(j, "ImplementationClientCapabilities"));
        x.set_implementation_options(get_stack_optional<ImplementationOptions>(j, "ImplementationOptions"));
        x.set_implementation_params(get_stack_optional<ImplementationParams>(j, "ImplementationParams"));
        x.set_implementation_registration_options(get_stack_optional<ImplementationRegistrationOptions>(j, "ImplementationRegistrationOptions"));
        x.set_initialized_params(get_stack_optional<InitializedParams>(j, "InitializedParams"));
        x.set_initialize_error(get_stack_optional<InitializeError>(j, "InitializeError"));
        x.set_initialize_error_codes(get_stack_optional<double>(j, "InitializeErrorCodes"));
        x.set_initialize_params(get_stack_optional<InitializeParams>(j, "InitializeParams"));
        x.set_initialize_result(get_stack_optional<InitializeResult>(j, "InitializeResult"));
        x.set_inlay_hint(get_stack_optional<InlayHint>(j, "InlayHint"));
        x.set_inlay_hint_client_capabilities(get_stack_optional<InlayHintClientCapabilities>(j, "InlayHintClientCapabilities"));
        x.set_inlay_hint_kind(get_stack_optional<double>(j, "InlayHintKind"));
        x.set_inlay_hint_label_part(get_stack_optional<InlayHintLabelPart>(j, "InlayHintLabelPart"));
        x.set_inlay_hint_options(get_stack_optional<InlayHintOptionsClass>(j, "InlayHintOptions"));
        x.set_inlay_hint_params(get_stack_optional<InlayHintParams>(j, "InlayHintParams"));
        x.set_inlay_hint_registration_options(get_stack_optional<InlayHintRegistrationOptions>(j, "InlayHintRegistrationOptions"));
        x.set_inlay_hint_workspace_client_capabilities(get_stack_optional<InlayHintWorkspaceClientCapabilities>(j, "InlayHintWorkspaceClientCapabilities"));
        x.set_inline_value(get_stack_optional<InlineValue>(j, "InlineValue"));
        x.set_inline_value_client_capabilities(get_stack_optional<InlineValueClientCapabilities>(j, "InlineValueClientCapabilities"));
        x.set_inline_value_context(get_stack_optional<InlineValueContext>(j, "InlineValueContext"));
        x.set_inline_value_evaluatable_expression(get_stack_optional<InlineValueEvaluatableExpression>(j, "InlineValueEvaluatableExpression"));
        x.set_inline_value_options(get_stack_optional<InlineValueOptionsClass>(j, "InlineValueOptions"));
        x.set_inline_value_params(get_stack_optional<InlineValueParams>(j, "InlineValueParams"));
        x.set_inline_value_registration_options(get_stack_optional<InlineValueRegistrationOptions>(j, "InlineValueRegistrationOptions"));
        x.set_inline_value_text(get_stack_optional<InlineValueText>(j, "InlineValueText"));
        x.set_inline_value_variable_lookup(get_stack_optional<InlineValueVariableLookup>(j, "InlineValueVariableLookup"));
        x.set_inline_value_workspace_client_capabilities(get_stack_optional<InlineValueWorkspaceClientCapabilities>(j, "InlineValueWorkspaceClientCapabilities"));
        x.set_insert_replace_edit(get_stack_optional<InsertReplaceEdit>(j, "InsertReplaceEdit"));
        x.set_insert_text_format(get_stack_optional<double>(j, "InsertTextFormat"));
        x.set_insert_text_mode(get_stack_optional<double>(j, "InsertTextMode"));
        x.set_integer(get_stack_optional<int64_t>(j, "integer"));
        x.set_linked_editing_range_client_capabilities(get_stack_optional<LinkedEditingRangeClientCapabilities>(j, "LinkedEditingRangeClientCapabilities"));
        x.set_linked_editing_range_options(get_stack_optional<LinkedEditingRangeOptionsClass>(j, "LinkedEditingRangeOptions"));
        x.set_linked_editing_range_params(get_stack_optional<LinkedEditingRangeParams>(j, "LinkedEditingRangeParams"));
        x.set_linked_editing_range_registration_options(get_stack_optional<LinkedEditingRangeRegistrationOptions>(j, "LinkedEditingRangeRegistrationOptions"));
        x.set_linked_editing_ranges(get_stack_optional<LinkedEditingRanges>(j, "LinkedEditingRanges"));
        x.set_location(get_stack_optional<LocationClass>(j, "Location"));
        x.set_location_link(get_stack_optional<LocationLink>(j, "LocationLink"));
        x.set_log_message_params(get_stack_optional<LogMessageParams>(j, "LogMessageParams"));
        x.set_log_trace_params(get_stack_optional<LogTraceParams>(j, "LogTraceParams"));
        x.set_lsp_any(get_stack_optional<std::variant<bool, double, int64_t, std::string>>(j, "LSPAny"));
        x.set_lsp_array(get_stack_optional<std::vector<LspAny>>(j, "LSPArray"));
        x.set_lsp_object(get_stack_optional<std::map<std::string, LspAny>>(j, "LSPObject"));
        x.set_markdown_client_capabilities(get_stack_optional<MarkdownClientCapabilities>(j, "MarkdownClientCapabilities"));
        x.set_marked_string(get_stack_optional<std::variant<MarkedStringClass, std::string>>(j, "MarkedString"));
        x.set_markup_content(get_stack_optional<DocumentationMarkupContent>(j, "MarkupContent"));
        x.set_markup_kind(get_stack_optional<MarkupKind>(j, "MarkupKind"));
        x.set_message(get_stack_optional<Message>(j, "Message"));
        x.set_message_action_item(get_stack_optional<MessageActionItemElement>(j, "MessageActionItem"));
        x.set_message_type(get_stack_optional<double>(j, "MessageType"));
        x.set_moniker(get_stack_optional<Moniker>(j, "Moniker"));
        x.set_moniker_client_capabilities(get_stack_optional<MonikerClientCapabilities>(j, "MonikerClientCapabilities"));
        x.set_moniker_kind(get_stack_optional<MonikerKind>(j, "MonikerKind"));
        x.set_moniker_options(get_stack_optional<MonikerOptionsClass>(j, "MonikerOptions"));
        x.set_moniker_params(get_stack_optional<MonikerParams>(j, "MonikerParams"));
        x.set_moniker_registration_options(get_stack_optional<MonikerRegistrationOptions>(j, "MonikerRegistrationOptions"));
        x.set_notebook_cell(get_stack_optional<NotebookCell>(j, "NotebookCell"));
        x.set_notebook_cell_array_change(get_stack_optional<NotebookCellArrayChange>(j, "NotebookCellArrayChange"));
        x.set_notebook_cell_kind(get_stack_optional<double>(j, "NotebookCellKind"));
        x.set_notebook_cell_text_document_filter(get_stack_optional<NotebookCellTextDocumentFilter>(j, "NotebookCellTextDocumentFilter"));
        x.set_notebook_document(get_stack_optional<NotebookDocument>(j, "NotebookDocument"));
        x.set_notebook_document_change_event(get_stack_optional<NotebookDocumentChangeEvent>(j, "NotebookDocumentChangeEvent"));
        x.set_notebook_document_client_capabilities(get_stack_optional<NotebookDocumentClientCapabilities>(j, "NotebookDocumentClientCapabilities"));
        x.set_notebook_document_filter(get_stack_optional<NotebookDocumentFilter>(j, "NotebookDocumentFilter"));
        x.set_notebook_document_identifier(get_stack_optional<NotebookDocumentIdentifier>(j, "NotebookDocumentIdentifier"));
        x.set_notebook_document_sync_client_capabilities(get_stack_optional<NotebookDocumentSyncClientCapabilities>(j, "NotebookDocumentSyncClientCapabilities"));
        x.set_notebook_document_sync_options(get_stack_optional<NotebookDocumentSyncOptionsClass>(j, "NotebookDocumentSyncOptions"));
        x.set_notebook_document_sync_registration_options(get_stack_optional<NotebookDocumentSyncRegistrationOptions>(j, "NotebookDocumentSyncRegistrationOptions"));
        x.set_notification_message(get_stack_optional<NotificationMessage>(j, "NotificationMessage"));
        x.set_optional_versioned_text_document_identifier(get_stack_optional<OptionalVersionedTextDocumentIdentifier>(j, "OptionalVersionedTextDocumentIdentifier"));
        x.set_parameter_information(get_stack_optional<ParameterInformationElement>(j, "ParameterInformation"));
        x.set_partial_result_params(get_stack_optional<PartialResultParams>(j, "PartialResultParams"));
        x.set_pattern(get_stack_optional<std::string>(j, "Pattern"));
        x.set_position(get_stack_optional<Position>(j, "Position"));
        x.set_position_encoding_kind(get_stack_optional<std::string>(j, "PositionEncodingKind"));
        x.set_prepare_rename_params(get_stack_optional<PrepareRenameParams>(j, "PrepareRenameParams"));
        x.set_prepare_support_default_behavior(get_stack_optional<double>(j, "PrepareSupportDefaultBehavior"));
        x.set_previous_result_id(get_stack_optional<PreviousResultId>(j, "PreviousResultId"));
        x.set_progress_token(get_stack_optional<std::variant<int64_t, std::string>>(j, "ProgressToken"));
        x.set_publish_diagnostics_client_capabilities(get_stack_optional<PublishDiagnosticsClientCapabilities>(j, "PublishDiagnosticsClientCapabilities"));
        x.set_publish_diagnostics_params(get_stack_optional<PublishDiagnosticsParams>(j, "PublishDiagnosticsParams"));
        x.set_range(get_stack_optional<PurpleRange>(j, "Range"));
        x.set_reference_client_capabilities(get_stack_optional<ReferenceClientCapabilities>(j, "ReferenceClientCapabilities"));
        x.set_reference_context(get_stack_optional<ReferenceContext>(j, "ReferenceContext"));
        x.set_reference_options(get_stack_optional<ReferenceOptions>(j, "ReferenceOptions"));
        x.set_reference_params(get_stack_optional<ReferenceParams>(j, "ReferenceParams"));
        x.set_reference_registration_options(get_stack_optional<ReferenceRegistrationOptions>(j, "ReferenceRegistrationOptions"));
        x.set_registration(get_stack_optional<Registration>(j, "Registration"));
        x.set_registration_params(get_stack_optional<RegistrationParams>(j, "RegistrationParams"));
        x.set_regular_expressions_client_capabilities(get_stack_optional<RegularExpressionsClientCapabilities>(j, "RegularExpressionsClientCapabilities"));
        x.set_related_full_document_diagnostic_report(get_stack_optional<RelatedFullDocumentDiagnosticReport>(j, "RelatedFullDocumentDiagnosticReport"));
        x.set_related_unchanged_document_diagnostic_report(get_stack_optional<RelatedUnchangedDocumentDiagnosticReport>(j, "RelatedUnchangedDocumentDiagnosticReport"));
        x.set_relative_pattern(get_stack_optional<RelativePattern>(j, "RelativePattern"));
        x.set_rename_client_capabilities(get_stack_optional<RenameClientCapabilities>(j, "RenameClientCapabilities"));
        x.set_rename_file(get_stack_optional<RenameFile>(j, "RenameFile"));
        x.set_rename_file_options(get_stack_optional<RenameFileOptions>(j, "RenameFileOptions"));
        x.set_rename_files_params(get_stack_optional<RenameFilesParams>(j, "RenameFilesParams"));
        x.set_rename_options(get_stack_optional<RenameOptions>(j, "RenameOptions"));
        x.set_rename_params(get_stack_optional<RenameParams>(j, "RenameParams"));
        x.set_rename_registration_options(get_stack_optional<RenameRegistrationOptions>(j, "RenameRegistrationOptions"));
        x.set_request_message(get_stack_optional<RequestMessage>(j, "RequestMessage"));
        x.set_resource_operation_kind(get_stack_optional<ResourceOperationKind>(j, "ResourceOperationKind"));
        x.set_response_error(get_stack_optional<ResponseError>(j, "ResponseError"));
        x.set_response_message(get_stack_optional<ResponseMessage>(j, "ResponseMessage"));
        x.set_save_options(get_stack_optional<SaveOptions>(j, "SaveOptions"));
        x.set_selection_range(get_heap_optional<SelectionRange>(j, "SelectionRange"));
        x.set_selection_range_client_capabilities(get_stack_optional<SelectionRangeClientCapabilities>(j, "SelectionRangeClientCapabilities"));
        x.set_selection_range_options(get_stack_optional<SelectionRangeOptionsClass>(j, "SelectionRangeOptions"));
        x.set_selection_range_params(get_stack_optional<SelectionRangeParams>(j, "SelectionRangeParams"));
        x.set_selection_range_registration_options(get_stack_optional<SelectionRangeRegistrationOptions>(j, "SelectionRangeRegistrationOptions"));
        x.set_semantic_token_modifiers(get_stack_optional<SemanticTokenModifiers>(j, "SemanticTokenModifiers"));
        x.set_semantic_tokens(get_stack_optional<SemanticTokens>(j, "SemanticTokens"));
        x.set_semantic_tokens_client_capabilities(get_stack_optional<SemanticTokensClientCapabilities>(j, "SemanticTokensClientCapabilities"));
        x.set_semantic_tokens_delta(get_stack_optional<SemanticTokensDelta>(j, "SemanticTokensDelta"));
        x.set_semantic_tokens_delta_params(get_stack_optional<SemanticTokensDeltaParams>(j, "SemanticTokensDeltaParams"));
        x.set_semantic_tokens_delta_partial_result(get_stack_optional<SemanticTokensDeltaPartialResult>(j, "SemanticTokensDeltaPartialResult"));
        x.set_semantic_tokens_edit(get_stack_optional<SemanticTokensEdit>(j, "SemanticTokensEdit"));
        x.set_semantic_tokens_legend(get_stack_optional<SemanticTokensLegend>(j, "SemanticTokensLegend"));
        x.set_semantic_tokens_options(get_stack_optional<SemanticTokensOptionsClass>(j, "SemanticTokensOptions"));
        x.set_semantic_tokens_params(get_stack_optional<SemanticTokensParams>(j, "SemanticTokensParams"));
        x.set_semantic_tokens_partial_result(get_stack_optional<SemanticTokensPartialResult>(j, "SemanticTokensPartialResult"));
        x.set_semantic_tokens_range_params(get_stack_optional<SemanticTokensRangeParams>(j, "SemanticTokensRangeParams"));
        x.set_semantic_tokens_registration_options(get_stack_optional<SemanticTokensRegistrationOptions>(j, "SemanticTokensRegistrationOptions"));
        x.set_semantic_tokens_workspace_client_capabilities(get_stack_optional<SemanticTokensWorkspaceClientCapabilities>(j, "SemanticTokensWorkspaceClientCapabilities"));
        x.set_semantic_token_types(get_stack_optional<SemanticTokenTypes>(j, "SemanticTokenTypes"));
        x.set_server_capabilities(get_stack_optional<ServerCapabilities>(j, "ServerCapabilities"));
        x.set_set_trace_params(get_stack_optional<SetTraceParams>(j, "SetTraceParams"));
        x.set_show_document_client_capabilities(get_stack_optional<ShowDocumentClientCapabilities>(j, "ShowDocumentClientCapabilities"));
        x.set_show_document_params(get_stack_optional<ShowDocumentParams>(j, "ShowDocumentParams"));
        x.set_show_document_result(get_stack_optional<ShowDocumentResult>(j, "ShowDocumentResult"));
        x.set_show_message_params(get_stack_optional<ShowMessageParams>(j, "ShowMessageParams"));
        x.set_show_message_request_client_capabilities(get_stack_optional<ShowMessageRequestClientCapabilities>(j, "ShowMessageRequestClientCapabilities"));
        x.set_show_message_request_params(get_stack_optional<ShowMessageRequestParams>(j, "ShowMessageRequestParams"));
        x.set_signature_help(get_stack_optional<SignatureHelp>(j, "SignatureHelp"));
        x.set_signature_help_client_capabilities(get_stack_optional<SignatureHelpClientCapabilities>(j, "SignatureHelpClientCapabilities"));
        x.set_signature_help_context(get_stack_optional<SignatureHelpContext>(j, "SignatureHelpContext"));
        x.set_signature_help_options(get_stack_optional<SignatureHelpOptions>(j, "SignatureHelpOptions"));
        x.set_signature_help_params(get_stack_optional<SignatureHelpParams>(j, "SignatureHelpParams"));
        x.set_signature_help_registration_options(get_stack_optional<SignatureHelpRegistrationOptions>(j, "SignatureHelpRegistrationOptions"));
        x.set_signature_help_trigger_kind(get_stack_optional<double>(j, "SignatureHelpTriggerKind"));
        x.set_signature_information(get_stack_optional<SignatureInformationElement>(j, "SignatureInformation"));
        x.set_static_registration_options(get_stack_optional<StaticRegistrationOptions>(j, "StaticRegistrationOptions"));
        x.set_symbol_information(get_stack_optional<SymbolInformation>(j, "SymbolInformation"));
        x.set_symbol_kind(get_stack_optional<double>(j, "SymbolKind"));
        x.set_symbol_tag(get_stack_optional<double>(j, "SymbolTag"));
        x.set_text_document_change_registration_options(get_stack_optional<TextDocumentChangeRegistrationOptions>(j, "TextDocumentChangeRegistrationOptions"));
        x.set_text_document_client_capabilities(get_stack_optional<TextDocumentClientCapabilities>(j, "TextDocumentClientCapabilities"));
        x.set_text_document_content_change_event(get_stack_optional<TextDocumentContentChangeEvent>(j, "TextDocumentContentChangeEvent"));
        x.set_text_document_edit(get_stack_optional<TextDocumentEditClass>(j, "TextDocumentEdit"));
        x.set_text_document_identifier(get_stack_optional<TextDocumentIdentifier>(j, "TextDocumentIdentifier"));
        x.set_text_document_item(get_stack_optional<TextDocumentItem>(j, "TextDocumentItem"));
        x.set_text_document_position_params(get_stack_optional<TextDocumentPositionParams>(j, "TextDocumentPositionParams"));
        x.set_text_document_registration_options(get_stack_optional<TextDocumentRegistrationOptions>(j, "TextDocumentRegistrationOptions"));
        x.set_text_document_save_reason(get_stack_optional<double>(j, "TextDocumentSaveReason"));
        x.set_text_document_save_registration_options(get_stack_optional<TextDocumentSaveRegistrationOptions>(j, "TextDocumentSaveRegistrationOptions"));
        x.set_text_document_sync_client_capabilities(get_stack_optional<TextDocumentSyncClientCapabilities>(j, "TextDocumentSyncClientCapabilities"));
        x.set_text_document_sync_kind(get_stack_optional<double>(j, "TextDocumentSyncKind"));
        x.set_text_document_sync_options(get_stack_optional<TextDocumentSyncOptions>(j, "TextDocumentSyncOptions"));
        x.set_text_edit(get_stack_optional<TextEdit>(j, "TextEdit"));
        x.set_token_format(get_stack_optional<TokenFormat>(j, "TokenFormat"));
        x.set_trace_value(get_stack_optional<TraceValue>(j, "TraceValue"));
        x.set_type_definition_client_capabilities(get_stack_optional<TypeDefinitionClientCapabilities>(j, "TypeDefinitionClientCapabilities"));
        x.set_type_definition_options(get_stack_optional<TypeDefinitionOptions>(j, "TypeDefinitionOptions"));
        x.set_type_definition_params(get_stack_optional<TypeDefinitionParams>(j, "TypeDefinitionParams"));
        x.set_type_definition_registration_options(get_stack_optional<TypeDefinitionRegistrationOptions>(j, "TypeDefinitionRegistrationOptions"));
        x.set_type_hierarchy_client_capabilities(get_stack_optional<TypeHierarchyClientCapabilities>(j, "TypeHierarchyClientCapabilities"));
        x.set_type_hierarchy_item(get_stack_optional<TypeHierarchyItem>(j, "TypeHierarchyItem"));
        x.set_type_hierarchy_options(get_stack_optional<TypeHierarchyOptionsClass>(j, "TypeHierarchyOptions"));
        x.set_type_hierarchy_prepare_params(get_stack_optional<TypeHierarchyPrepareParams>(j, "TypeHierarchyPrepareParams"));
        x.set_type_hierarchy_registration_options(get_stack_optional<TypeHierarchyRegistrationOptions>(j, "TypeHierarchyRegistrationOptions"));
        x.set_type_hierarchy_subtypes_params(get_stack_optional<TypeHierarchySubtypesParams>(j, "TypeHierarchySubtypesParams"));
        x.set_type_hierarchy_supertypes_params(get_stack_optional<TypeHierarchySupertypesParams>(j, "TypeHierarchySupertypesParams"));
        x.set_uinteger(get_stack_optional<int64_t>(j, "uinteger"));
        x.set_unchanged_document_diagnostic_report(get_stack_optional<UnchangedDocumentDiagnosticReport>(j, "UnchangedDocumentDiagnosticReport"));
        x.set_uniqueness_level(get_stack_optional<UniquenessLevel>(j, "UniquenessLevel"));
        x.set_unregistration(get_stack_optional<Unregistration>(j, "Unregistration"));
        x.set_unregistration_params(get_stack_optional<UnregistrationParams>(j, "UnregistrationParams"));
        x.set_uri(get_stack_optional<std::string>(j, "URI"));
        x.set_versioned_notebook_document_identifier(get_stack_optional<VersionedNotebookDocumentIdentifier>(j, "VersionedNotebookDocumentIdentifier"));
        x.set_versioned_text_document_identifier(get_stack_optional<VersionedTextDocumentIdentifier>(j, "VersionedTextDocumentIdentifier"));
        x.set_watch_kind(get_stack_optional<int64_t>(j, "WatchKind"));
        x.set_will_save_text_document_params(get_stack_optional<WillSaveTextDocumentParams>(j, "WillSaveTextDocumentParams"));
        x.set_work_done_progress_begin(get_stack_optional<WorkDoneProgressBegin>(j, "WorkDoneProgressBegin"));
        x.set_work_done_progress_cancel_params(get_stack_optional<WorkDoneProgressCancelParams>(j, "WorkDoneProgressCancelParams"));
        x.set_work_done_progress_create_params(get_stack_optional<WorkDoneProgressCreateParams>(j, "WorkDoneProgressCreateParams"));
        x.set_work_done_progress_end(get_stack_optional<WorkDoneProgressEnd>(j, "WorkDoneProgressEnd"));
        x.set_work_done_progress_options(get_stack_optional<WorkDoneProgressOptions>(j, "WorkDoneProgressOptions"));
        x.set_work_done_progress_params(get_stack_optional<WorkDoneProgressParams>(j, "WorkDoneProgressParams"));
        x.set_work_done_progress_report(get_stack_optional<WorkDoneProgressReport>(j, "WorkDoneProgressReport"));
        x.set_workspace_diagnostic_params(get_stack_optional<WorkspaceDiagnosticParams>(j, "WorkspaceDiagnosticParams"));
        x.set_workspace_diagnostic_report(get_stack_optional<WorkspaceDiagnosticReport>(j, "WorkspaceDiagnosticReport"));
        x.set_workspace_diagnostic_report_partial_result(get_stack_optional<WorkspaceDiagnosticReportPartialResult>(j, "WorkspaceDiagnosticReportPartialResult"));
        x.set_workspace_document_diagnostic_report(get_stack_optional<WorkspaceDocumentDiagnosticReport>(j, "WorkspaceDocumentDiagnosticReport"));
        x.set_workspace_edit(get_stack_optional<WorkspaceEdit>(j, "WorkspaceEdit"));
        x.set_workspace_edit_client_capabilities(get_stack_optional<WorkspaceEditClientCapabilities>(j, "WorkspaceEditClientCapabilities"));
        x.set_workspace_folder(get_stack_optional<WorkspaceFolder>(j, "WorkspaceFolder"));
        x.set_workspace_folders_change_event(get_stack_optional<WorkspaceFoldersChangeEvent>(j, "WorkspaceFoldersChangeEvent"));
        x.set_workspace_folders_server_capabilities(get_stack_optional<WorkspaceFoldersServerCapabilities>(j, "WorkspaceFoldersServerCapabilities"));
        x.set_workspace_full_document_diagnostic_report(get_stack_optional<WorkspaceFullDocumentDiagnosticReport>(j, "WorkspaceFullDocumentDiagnosticReport"));
        x.set_workspace_symbol(get_stack_optional<WorkspaceSymbol>(j, "WorkspaceSymbol"));
        x.set_workspace_symbol_client_capabilities(get_stack_optional<WorkspaceSymbolClientCapabilities>(j, "WorkspaceSymbolClientCapabilities"));
        x.set_workspace_symbol_options(get_stack_optional<WorkspaceSymbolOptions>(j, "WorkspaceSymbolOptions"));
        x.set_workspace_symbol_params(get_stack_optional<WorkspaceSymbolParams>(j, "WorkspaceSymbolParams"));
        x.set_workspace_symbol_registration_options(get_stack_optional<WorkspaceSymbolRegistrationOptions>(j, "WorkspaceSymbolRegistrationOptions"));
        x.set_workspace_unchanged_document_diagnostic_report(get_stack_optional<WorkspaceUnchangedDocumentDiagnosticReport>(j, "WorkspaceUnchangedDocumentDiagnosticReport"));
    }

    inline void to_json(json & j, const ModelsClass & x) {
        j = json::object();
        j["AnnotatedTextEdit"] = x.get_annotated_text_edit();
        j["ApplyWorkspaceEditParams"] = x.get_apply_workspace_edit_params();
        j["ApplyWorkspaceEditResult"] = x.get_apply_workspace_edit_result();
        j["CallHierarchyClientCapabilities"] = x.get_call_hierarchy_client_capabilities();
        j["CallHierarchyIncomingCall"] = x.get_call_hierarchy_incoming_call();
        j["CallHierarchyIncomingCallsParams"] = x.get_call_hierarchy_incoming_calls_params();
        j["CallHierarchyItem"] = x.get_call_hierarchy_item();
        j["CallHierarchyOptions"] = x.get_call_hierarchy_options();
        j["CallHierarchyOutgoingCall"] = x.get_call_hierarchy_outgoing_call();
        j["CallHierarchyOutgoingCallsParams"] = x.get_call_hierarchy_outgoing_calls_params();
        j["CallHierarchyPrepareParams"] = x.get_call_hierarchy_prepare_params();
        j["CallHierarchyRegistrationOptions"] = x.get_call_hierarchy_registration_options();
        j["CancelParams"] = x.get_cancel_params();
        j["ChangeAnnotation"] = x.get_change_annotation();
        j["ChangeAnnotationIdentifier"] = x.get_change_annotation_identifier();
        j["ClientCapabilities"] = x.get_client_capabilities();
        j["CodeAction"] = x.get_code_action();
        j["CodeActionClientCapabilities"] = x.get_code_action_client_capabilities();
        j["CodeActionContext"] = x.get_code_action_context();
        j["CodeActionKind"] = x.get_code_action_kind();
        j["CodeActionOptions"] = x.get_code_action_options();
        j["CodeActionParams"] = x.get_code_action_params();
        j["CodeActionRegistrationOptions"] = x.get_code_action_registration_options();
        j["CodeActionTriggerKind"] = x.get_code_action_trigger_kind();
        j["CodeDescription"] = x.get_code_description();
        j["CodeLens"] = x.get_code_lens();
        j["CodeLensClientCapabilities"] = x.get_code_lens_client_capabilities();
        j["CodeLensOptions"] = x.get_code_lens_options();
        j["CodeLensParams"] = x.get_code_lens_params();
        j["CodeLensRegistrationOptions"] = x.get_code_lens_registration_options();
        j["CodeLensWorkspaceClientCapabilities"] = x.get_code_lens_workspace_client_capabilities();
        j["Color"] = x.get_color();
        j["ColorInformation"] = x.get_color_information();
        j["ColorPresentation"] = x.get_color_presentation();
        j["ColorPresentationParams"] = x.get_color_presentation_params();
        j["Command"] = x.get_command();
        j["CompletionClientCapabilities"] = x.get_completion_client_capabilities();
        j["CompletionContext"] = x.get_completion_context();
        j["CompletionItem"] = x.get_completion_item();
        j["CompletionItemKind"] = x.get_completion_item_kind();
        j["CompletionItemLabelDetails"] = x.get_completion_item_label_details();
        j["CompletionItemTag"] = x.get_completion_item_tag();
        j["CompletionList"] = x.get_completion_list();
        j["CompletionOptions"] = x.get_completion_options();
        j["CompletionParams"] = x.get_completion_params();
        j["CompletionRegistrationOptions"] = x.get_completion_registration_options();
        j["CompletionTriggerKind"] = x.get_completion_trigger_kind();
        j["ConfigurationItem"] = x.get_configuration_item();
        j["ConfigurationParams"] = x.get_configuration_params();
        j["CreateFile"] = x.get_create_file();
        j["CreateFileOptions"] = x.get_create_file_options();
        j["CreateFilesParams"] = x.get_create_files_params();
        j["decimal"] = x.get_decimal();
        j["DeclarationClientCapabilities"] = x.get_declaration_client_capabilities();
        j["DeclarationOptions"] = x.get_declaration_options();
        j["DeclarationParams"] = x.get_declaration_params();
        j["DeclarationRegistrationOptions"] = x.get_declaration_registration_options();
        j["DefinitionClientCapabilities"] = x.get_definition_client_capabilities();
        j["DefinitionOptions"] = x.get_definition_options();
        j["DefinitionParams"] = x.get_definition_params();
        j["DefinitionRegistrationOptions"] = x.get_definition_registration_options();
        j["DeleteFile"] = x.get_delete_file();
        j["DeleteFileOptions"] = x.get_delete_file_options();
        j["DeleteFilesParams"] = x.get_delete_files_params();
        j["Diagnostic"] = x.get_diagnostic();
        j["DiagnosticClientCapabilities"] = x.get_diagnostic_client_capabilities();
        j["DiagnosticOptions"] = x.get_diagnostic_options();
        j["DiagnosticRegistrationOptions"] = x.get_diagnostic_registration_options();
        j["DiagnosticRelatedInformation"] = x.get_diagnostic_related_information();
        j["DiagnosticServerCancellationData"] = x.get_diagnostic_server_cancellation_data();
        j["DiagnosticSeverity"] = x.get_diagnostic_severity();
        j["DiagnosticTag"] = x.get_diagnostic_tag();
        j["DiagnosticWorkspaceClientCapabilities"] = x.get_diagnostic_workspace_client_capabilities();
        j["DidChangeConfigurationClientCapabilities"] = x.get_did_change_configuration_client_capabilities();
        j["DidChangeConfigurationParams"] = x.get_did_change_configuration_params();
        j["DidChangeNotebookDocumentParams"] = x.get_did_change_notebook_document_params();
        j["DidChangeTextDocumentParams"] = x.get_did_change_text_document_params();
        j["DidChangeWatchedFilesClientCapabilities"] = x.get_did_change_watched_files_client_capabilities();
        j["DidChangeWatchedFilesParams"] = x.get_did_change_watched_files_params();
        j["DidChangeWatchedFilesRegistrationOptions"] = x.get_did_change_watched_files_registration_options();
        j["DidChangeWorkspaceFoldersParams"] = x.get_did_change_workspace_folders_params();
        j["DidCloseNotebookDocumentParams"] = x.get_did_close_notebook_document_params();
        j["DidCloseTextDocumentParams"] = x.get_did_close_text_document_params();
        j["DidOpenNotebookDocumentParams"] = x.get_did_open_notebook_document_params();
        j["DidOpenTextDocumentParams"] = x.get_did_open_text_document_params();
        j["DidSaveNotebookDocumentParams"] = x.get_did_save_notebook_document_params();
        j["DidSaveTextDocumentParams"] = x.get_did_save_text_document_params();
        j["DocumentColorClientCapabilities"] = x.get_document_color_client_capabilities();
        j["DocumentColorOptions"] = x.get_document_color_options();
        j["DocumentColorParams"] = x.get_document_color_params();
        j["DocumentColorRegistrationOptions"] = x.get_document_color_registration_options();
        j["DocumentDiagnosticParams"] = x.get_document_diagnostic_params();
        j["DocumentDiagnosticReport"] = x.get_document_diagnostic_report();
        j["DocumentDiagnosticReportKind"] = x.get_document_diagnostic_report_kind();
        j["DocumentDiagnosticReportPartialResult"] = x.get_document_diagnostic_report_partial_result();
        j["DocumentFilter"] = x.get_document_filter();
        j["DocumentFormattingClientCapabilities"] = x.get_document_formatting_client_capabilities();
        j["DocumentFormattingOptions"] = x.get_document_formatting_options();
        j["DocumentFormattingParams"] = x.get_document_formatting_params();
        j["DocumentFormattingRegistrationOptions"] = x.get_document_formatting_registration_options();
        j["DocumentHighlight"] = x.get_document_highlight();
        j["DocumentHighlightClientCapabilities"] = x.get_document_highlight_client_capabilities();
        j["DocumentHighlightKind"] = x.get_document_highlight_kind();
        j["DocumentHighlightOptions"] = x.get_document_highlight_options();
        j["DocumentHighlightParams"] = x.get_document_highlight_params();
        j["DocumentHighlightRegistrationOptions"] = x.get_document_highlight_registration_options();
        j["DocumentLink"] = x.get_document_link();
        j["DocumentLinkClientCapabilities"] = x.get_document_link_client_capabilities();
        j["DocumentLinkOptions"] = x.get_document_link_options();
        j["DocumentLinkParams"] = x.get_document_link_params();
        j["DocumentLinkRegistrationOptions"] = x.get_document_link_registration_options();
        j["DocumentOnTypeFormattingClientCapabilities"] = x.get_document_on_type_formatting_client_capabilities();
        j["DocumentOnTypeFormattingOptions"] = x.get_document_on_type_formatting_options();
        j["DocumentOnTypeFormattingParams"] = x.get_document_on_type_formatting_params();
        j["DocumentOnTypeFormattingRegistrationOptions"] = x.get_document_on_type_formatting_registration_options();
        j["DocumentRangeFormattingClientCapabilities"] = x.get_document_range_formatting_client_capabilities();
        j["DocumentRangeFormattingOptions"] = x.get_document_range_formatting_options();
        j["DocumentRangeFormattingParams"] = x.get_document_range_formatting_params();
        j["DocumentRangeFormattingRegistrationOptions"] = x.get_document_range_formatting_registration_options();
        j["DocumentSelector"] = x.get_document_selector();
        j["DocumentSymbol"] = x.get_document_symbol();
        j["DocumentSymbolClientCapabilities"] = x.get_document_symbol_client_capabilities();
        j["DocumentSymbolOptions"] = x.get_document_symbol_options();
        j["DocumentSymbolParams"] = x.get_document_symbol_params();
        j["DocumentSymbolRegistrationOptions"] = x.get_document_symbol_registration_options();
        j["DocumentUri"] = x.get_document_uri();
        j["ErrorCodes"] = x.get_error_codes();
        j["ExecuteCommandClientCapabilities"] = x.get_execute_command_client_capabilities();
        j["ExecuteCommandOptions"] = x.get_execute_command_options();
        j["ExecuteCommandParams"] = x.get_execute_command_params();
        j["ExecuteCommandRegistrationOptions"] = x.get_execute_command_registration_options();
        j["ExecutionSummary"] = x.get_execution_summary();
        j["FailureHandlingKind"] = x.get_failure_handling_kind();
        j["FileChangeType"] = x.get_file_change_type();
        j["FileCreate"] = x.get_file_create();
        j["FileDelete"] = x.get_file_delete();
        j["FileEvent"] = x.get_file_event();
        j["FileOperationFilter"] = x.get_file_operation_filter();
        j["FileOperationPattern"] = x.get_file_operation_pattern();
        j["FileOperationPatternKind"] = x.get_file_operation_pattern_kind();
        j["FileOperationPatternOptions"] = x.get_file_operation_pattern_options();
        j["FileOperationRegistrationOptions"] = x.get_file_operation_registration_options();
        j["FileRename"] = x.get_file_rename();
        j["FileSystemWatcher"] = x.get_file_system_watcher();
        j["FoldingRange"] = x.get_folding_range();
        j["FoldingRangeClientCapabilities"] = x.get_folding_range_client_capabilities();
        j["FoldingRangeKind"] = x.get_folding_range_kind();
        j["FoldingRangeOptions"] = x.get_folding_range_options();
        j["FoldingRangeParams"] = x.get_folding_range_params();
        j["FoldingRangeRegistrationOptions"] = x.get_folding_range_registration_options();
        j["FormattingOptions"] = x.get_formatting_options();
        j["FullDocumentDiagnosticReport"] = x.get_full_document_diagnostic_report();
        j["GlobPattern"] = x.get_glob_pattern();
        j["Hover"] = x.get_hover();
        j["HoverClientCapabilities"] = x.get_hover_client_capabilities();
        j["HoverOptions"] = x.get_hover_options();
        j["HoverParams"] = x.get_hover_params();
        j["HoverRegistrationOptions"] = x.get_hover_registration_options();
        j["ImplementationClientCapabilities"] = x.get_implementation_client_capabilities();
        j["ImplementationOptions"] = x.get_implementation_options();
        j["ImplementationParams"] = x.get_implementation_params();
        j["ImplementationRegistrationOptions"] = x.get_implementation_registration_options();
        j["InitializedParams"] = x.get_initialized_params();
        j["InitializeError"] = x.get_initialize_error();
        j["InitializeErrorCodes"] = x.get_initialize_error_codes();
        j["InitializeParams"] = x.get_initialize_params();
        j["InitializeResult"] = x.get_initialize_result();
        j["InlayHint"] = x.get_inlay_hint();
        j["InlayHintClientCapabilities"] = x.get_inlay_hint_client_capabilities();
        j["InlayHintKind"] = x.get_inlay_hint_kind();
        j["InlayHintLabelPart"] = x.get_inlay_hint_label_part();
        j["InlayHintOptions"] = x.get_inlay_hint_options();
        j["InlayHintParams"] = x.get_inlay_hint_params();
        j["InlayHintRegistrationOptions"] = x.get_inlay_hint_registration_options();
        j["InlayHintWorkspaceClientCapabilities"] = x.get_inlay_hint_workspace_client_capabilities();
        j["InlineValue"] = x.get_inline_value();
        j["InlineValueClientCapabilities"] = x.get_inline_value_client_capabilities();
        j["InlineValueContext"] = x.get_inline_value_context();
        j["InlineValueEvaluatableExpression"] = x.get_inline_value_evaluatable_expression();
        j["InlineValueOptions"] = x.get_inline_value_options();
        j["InlineValueParams"] = x.get_inline_value_params();
        j["InlineValueRegistrationOptions"] = x.get_inline_value_registration_options();
        j["InlineValueText"] = x.get_inline_value_text();
        j["InlineValueVariableLookup"] = x.get_inline_value_variable_lookup();
        j["InlineValueWorkspaceClientCapabilities"] = x.get_inline_value_workspace_client_capabilities();
        j["InsertReplaceEdit"] = x.get_insert_replace_edit();
        j["InsertTextFormat"] = x.get_insert_text_format();
        j["InsertTextMode"] = x.get_insert_text_mode();
        j["integer"] = x.get_integer();
        j["LinkedEditingRangeClientCapabilities"] = x.get_linked_editing_range_client_capabilities();
        j["LinkedEditingRangeOptions"] = x.get_linked_editing_range_options();
        j["LinkedEditingRangeParams"] = x.get_linked_editing_range_params();
        j["LinkedEditingRangeRegistrationOptions"] = x.get_linked_editing_range_registration_options();
        j["LinkedEditingRanges"] = x.get_linked_editing_ranges();
        j["Location"] = x.get_location();
        j["LocationLink"] = x.get_location_link();
        j["LogMessageParams"] = x.get_log_message_params();
        j["LogTraceParams"] = x.get_log_trace_params();
        j["LSPAny"] = x.get_lsp_any();
        j["LSPArray"] = x.get_lsp_array();
        j["LSPObject"] = x.get_lsp_object();
        j["MarkdownClientCapabilities"] = x.get_markdown_client_capabilities();
        j["MarkedString"] = x.get_marked_string();
        j["MarkupContent"] = x.get_markup_content();
        j["MarkupKind"] = x.get_markup_kind();
        j["Message"] = x.get_message();
        j["MessageActionItem"] = x.get_message_action_item();
        j["MessageType"] = x.get_message_type();
        j["Moniker"] = x.get_moniker();
        j["MonikerClientCapabilities"] = x.get_moniker_client_capabilities();
        j["MonikerKind"] = x.get_moniker_kind();
        j["MonikerOptions"] = x.get_moniker_options();
        j["MonikerParams"] = x.get_moniker_params();
        j["MonikerRegistrationOptions"] = x.get_moniker_registration_options();
        j["NotebookCell"] = x.get_notebook_cell();
        j["NotebookCellArrayChange"] = x.get_notebook_cell_array_change();
        j["NotebookCellKind"] = x.get_notebook_cell_kind();
        j["NotebookCellTextDocumentFilter"] = x.get_notebook_cell_text_document_filter();
        j["NotebookDocument"] = x.get_notebook_document();
        j["NotebookDocumentChangeEvent"] = x.get_notebook_document_change_event();
        j["NotebookDocumentClientCapabilities"] = x.get_notebook_document_client_capabilities();
        j["NotebookDocumentFilter"] = x.get_notebook_document_filter();
        j["NotebookDocumentIdentifier"] = x.get_notebook_document_identifier();
        j["NotebookDocumentSyncClientCapabilities"] = x.get_notebook_document_sync_client_capabilities();
        j["NotebookDocumentSyncOptions"] = x.get_notebook_document_sync_options();
        j["NotebookDocumentSyncRegistrationOptions"] = x.get_notebook_document_sync_registration_options();
        j["NotificationMessage"] = x.get_notification_message();
        j["OptionalVersionedTextDocumentIdentifier"] = x.get_optional_versioned_text_document_identifier();
        j["ParameterInformation"] = x.get_parameter_information();
        j["PartialResultParams"] = x.get_partial_result_params();
        j["Pattern"] = x.get_pattern();
        j["Position"] = x.get_position();
        j["PositionEncodingKind"] = x.get_position_encoding_kind();
        j["PrepareRenameParams"] = x.get_prepare_rename_params();
        j["PrepareSupportDefaultBehavior"] = x.get_prepare_support_default_behavior();
        j["PreviousResultId"] = x.get_previous_result_id();
        j["ProgressToken"] = x.get_progress_token();
        j["PublishDiagnosticsClientCapabilities"] = x.get_publish_diagnostics_client_capabilities();
        j["PublishDiagnosticsParams"] = x.get_publish_diagnostics_params();
        j["Range"] = x.get_range();
        j["ReferenceClientCapabilities"] = x.get_reference_client_capabilities();
        j["ReferenceContext"] = x.get_reference_context();
        j["ReferenceOptions"] = x.get_reference_options();
        j["ReferenceParams"] = x.get_reference_params();
        j["ReferenceRegistrationOptions"] = x.get_reference_registration_options();
        j["Registration"] = x.get_registration();
        j["RegistrationParams"] = x.get_registration_params();
        j["RegularExpressionsClientCapabilities"] = x.get_regular_expressions_client_capabilities();
        j["RelatedFullDocumentDiagnosticReport"] = x.get_related_full_document_diagnostic_report();
        j["RelatedUnchangedDocumentDiagnosticReport"] = x.get_related_unchanged_document_diagnostic_report();
        j["RelativePattern"] = x.get_relative_pattern();
        j["RenameClientCapabilities"] = x.get_rename_client_capabilities();
        j["RenameFile"] = x.get_rename_file();
        j["RenameFileOptions"] = x.get_rename_file_options();
        j["RenameFilesParams"] = x.get_rename_files_params();
        j["RenameOptions"] = x.get_rename_options();
        j["RenameParams"] = x.get_rename_params();
        j["RenameRegistrationOptions"] = x.get_rename_registration_options();
        j["RequestMessage"] = x.get_request_message();
        j["ResourceOperationKind"] = x.get_resource_operation_kind();
        j["ResponseError"] = x.get_response_error();
        j["ResponseMessage"] = x.get_response_message();
        j["SaveOptions"] = x.get_save_options();
        j["SelectionRange"] = x.get_selection_range();
        j["SelectionRangeClientCapabilities"] = x.get_selection_range_client_capabilities();
        j["SelectionRangeOptions"] = x.get_selection_range_options();
        j["SelectionRangeParams"] = x.get_selection_range_params();
        j["SelectionRangeRegistrationOptions"] = x.get_selection_range_registration_options();
        j["SemanticTokenModifiers"] = x.get_semantic_token_modifiers();
        j["SemanticTokens"] = x.get_semantic_tokens();
        j["SemanticTokensClientCapabilities"] = x.get_semantic_tokens_client_capabilities();
        j["SemanticTokensDelta"] = x.get_semantic_tokens_delta();
        j["SemanticTokensDeltaParams"] = x.get_semantic_tokens_delta_params();
        j["SemanticTokensDeltaPartialResult"] = x.get_semantic_tokens_delta_partial_result();
        j["SemanticTokensEdit"] = x.get_semantic_tokens_edit();
        j["SemanticTokensLegend"] = x.get_semantic_tokens_legend();
        j["SemanticTokensOptions"] = x.get_semantic_tokens_options();
        j["SemanticTokensParams"] = x.get_semantic_tokens_params();
        j["SemanticTokensPartialResult"] = x.get_semantic_tokens_partial_result();
        j["SemanticTokensRangeParams"] = x.get_semantic_tokens_range_params();
        j["SemanticTokensRegistrationOptions"] = x.get_semantic_tokens_registration_options();
        j["SemanticTokensWorkspaceClientCapabilities"] = x.get_semantic_tokens_workspace_client_capabilities();
        j["SemanticTokenTypes"] = x.get_semantic_token_types();
        j["ServerCapabilities"] = x.get_server_capabilities();
        j["SetTraceParams"] = x.get_set_trace_params();
        j["ShowDocumentClientCapabilities"] = x.get_show_document_client_capabilities();
        j["ShowDocumentParams"] = x.get_show_document_params();
        j["ShowDocumentResult"] = x.get_show_document_result();
        j["ShowMessageParams"] = x.get_show_message_params();
        j["ShowMessageRequestClientCapabilities"] = x.get_show_message_request_client_capabilities();
        j["ShowMessageRequestParams"] = x.get_show_message_request_params();
        j["SignatureHelp"] = x.get_signature_help();
        j["SignatureHelpClientCapabilities"] = x.get_signature_help_client_capabilities();
        j["SignatureHelpContext"] = x.get_signature_help_context();
        j["SignatureHelpOptions"] = x.get_signature_help_options();
        j["SignatureHelpParams"] = x.get_signature_help_params();
        j["SignatureHelpRegistrationOptions"] = x.get_signature_help_registration_options();
        j["SignatureHelpTriggerKind"] = x.get_signature_help_trigger_kind();
        j["SignatureInformation"] = x.get_signature_information();
        j["StaticRegistrationOptions"] = x.get_static_registration_options();
        j["SymbolInformation"] = x.get_symbol_information();
        j["SymbolKind"] = x.get_symbol_kind();
        j["SymbolTag"] = x.get_symbol_tag();
        j["TextDocumentChangeRegistrationOptions"] = x.get_text_document_change_registration_options();
        j["TextDocumentClientCapabilities"] = x.get_text_document_client_capabilities();
        j["TextDocumentContentChangeEvent"] = x.get_text_document_content_change_event();
        j["TextDocumentEdit"] = x.get_text_document_edit();
        j["TextDocumentIdentifier"] = x.get_text_document_identifier();
        j["TextDocumentItem"] = x.get_text_document_item();
        j["TextDocumentPositionParams"] = x.get_text_document_position_params();
        j["TextDocumentRegistrationOptions"] = x.get_text_document_registration_options();
        j["TextDocumentSaveReason"] = x.get_text_document_save_reason();
        j["TextDocumentSaveRegistrationOptions"] = x.get_text_document_save_registration_options();
        j["TextDocumentSyncClientCapabilities"] = x.get_text_document_sync_client_capabilities();
        j["TextDocumentSyncKind"] = x.get_text_document_sync_kind();
        j["TextDocumentSyncOptions"] = x.get_text_document_sync_options();
        j["TextEdit"] = x.get_text_edit();
        j["TokenFormat"] = x.get_token_format();
        j["TraceValue"] = x.get_trace_value();
        j["TypeDefinitionClientCapabilities"] = x.get_type_definition_client_capabilities();
        j["TypeDefinitionOptions"] = x.get_type_definition_options();
        j["TypeDefinitionParams"] = x.get_type_definition_params();
        j["TypeDefinitionRegistrationOptions"] = x.get_type_definition_registration_options();
        j["TypeHierarchyClientCapabilities"] = x.get_type_hierarchy_client_capabilities();
        j["TypeHierarchyItem"] = x.get_type_hierarchy_item();
        j["TypeHierarchyOptions"] = x.get_type_hierarchy_options();
        j["TypeHierarchyPrepareParams"] = x.get_type_hierarchy_prepare_params();
        j["TypeHierarchyRegistrationOptions"] = x.get_type_hierarchy_registration_options();
        j["TypeHierarchySubtypesParams"] = x.get_type_hierarchy_subtypes_params();
        j["TypeHierarchySupertypesParams"] = x.get_type_hierarchy_supertypes_params();
        j["uinteger"] = x.get_uinteger();
        j["UnchangedDocumentDiagnosticReport"] = x.get_unchanged_document_diagnostic_report();
        j["UniquenessLevel"] = x.get_uniqueness_level();
        j["Unregistration"] = x.get_unregistration();
        j["UnregistrationParams"] = x.get_unregistration_params();
        j["URI"] = x.get_uri();
        j["VersionedNotebookDocumentIdentifier"] = x.get_versioned_notebook_document_identifier();
        j["VersionedTextDocumentIdentifier"] = x.get_versioned_text_document_identifier();
        j["WatchKind"] = x.get_watch_kind();
        j["WillSaveTextDocumentParams"] = x.get_will_save_text_document_params();
        j["WorkDoneProgressBegin"] = x.get_work_done_progress_begin();
        j["WorkDoneProgressCancelParams"] = x.get_work_done_progress_cancel_params();
        j["WorkDoneProgressCreateParams"] = x.get_work_done_progress_create_params();
        j["WorkDoneProgressEnd"] = x.get_work_done_progress_end();
        j["WorkDoneProgressOptions"] = x.get_work_done_progress_options();
        j["WorkDoneProgressParams"] = x.get_work_done_progress_params();
        j["WorkDoneProgressReport"] = x.get_work_done_progress_report();
        j["WorkspaceDiagnosticParams"] = x.get_workspace_diagnostic_params();
        j["WorkspaceDiagnosticReport"] = x.get_workspace_diagnostic_report();
        j["WorkspaceDiagnosticReportPartialResult"] = x.get_workspace_diagnostic_report_partial_result();
        j["WorkspaceDocumentDiagnosticReport"] = x.get_workspace_document_diagnostic_report();
        j["WorkspaceEdit"] = x.get_workspace_edit();
        j["WorkspaceEditClientCapabilities"] = x.get_workspace_edit_client_capabilities();
        j["WorkspaceFolder"] = x.get_workspace_folder();
        j["WorkspaceFoldersChangeEvent"] = x.get_workspace_folders_change_event();
        j["WorkspaceFoldersServerCapabilities"] = x.get_workspace_folders_server_capabilities();
        j["WorkspaceFullDocumentDiagnosticReport"] = x.get_workspace_full_document_diagnostic_report();
        j["WorkspaceSymbol"] = x.get_workspace_symbol();
        j["WorkspaceSymbolClientCapabilities"] = x.get_workspace_symbol_client_capabilities();
        j["WorkspaceSymbolOptions"] = x.get_workspace_symbol_options();
        j["WorkspaceSymbolParams"] = x.get_workspace_symbol_params();
        j["WorkspaceSymbolRegistrationOptions"] = x.get_workspace_symbol_registration_options();
        j["WorkspaceUnchangedDocumentDiagnosticReport"] = x.get_workspace_unchanged_document_diagnostic_report();
    }

    inline void from_json(const json & j, ResourceOperationKind & x) {
        if (j == "create") x = ResourceOperationKind::CREATE;
        else if (j == "delete") x = ResourceOperationKind::DELETE;
        else if (j == "rename") x = ResourceOperationKind::RENAME;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const ResourceOperationKind & x) {
        switch (x) {
            case ResourceOperationKind::CREATE: j = "create"; break;
            case ResourceOperationKind::DELETE: j = "delete"; break;
            case ResourceOperationKind::RENAME: j = "rename"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, MarkupKind & x) {
        if (j == "markdown") x = MarkupKind::MARKDOWN;
        else if (j == "plaintext") x = MarkupKind::PLAINTEXT;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const MarkupKind & x) {
        switch (x) {
            case MarkupKind::MARKDOWN: j = "markdown"; break;
            case MarkupKind::PLAINTEXT: j = "plaintext"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, TokenFormat & x) {
        if (j == "relative") x = TokenFormat::RELATIVE;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const TokenFormat & x) {
        switch (x) {
            case TokenFormat::RELATIVE: j = "relative"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, FailureHandlingKind & x) {
        if (j == "abort") x = FailureHandlingKind::ABORT;
        else if (j == "textOnlyTransactional") x = FailureHandlingKind::TEXT_ONLY_TRANSACTIONAL;
        else if (j == "transactional") x = FailureHandlingKind::TRANSACTIONAL;
        else if (j == "undo") x = FailureHandlingKind::UNDO;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const FailureHandlingKind & x) {
        switch (x) {
            case FailureHandlingKind::ABORT: j = "abort"; break;
            case FailureHandlingKind::TEXT_ONLY_TRANSACTIONAL: j = "textOnlyTransactional"; break;
            case FailureHandlingKind::TRANSACTIONAL: j = "transactional"; break;
            case FailureHandlingKind::UNDO: j = "undo"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, CreateFileKind & x) {
        if (j == "create") x = CreateFileKind::CREATE;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const CreateFileKind & x) {
        switch (x) {
            case CreateFileKind::CREATE: j = "create"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, DeleteFileKind & x) {
        if (j == "delete") x = DeleteFileKind::DELETE;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const DeleteFileKind & x) {
        switch (x) {
            case DeleteFileKind::DELETE: j = "delete"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, DocumentDiagnosticReportKind & x) {
        if (j == "full") x = DocumentDiagnosticReportKind::FULL;
        else if (j == "unchanged") x = DocumentDiagnosticReportKind::UNCHANGED;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const DocumentDiagnosticReportKind & x) {
        switch (x) {
            case DocumentDiagnosticReportKind::FULL: j = "full"; break;
            case DocumentDiagnosticReportKind::UNCHANGED: j = "unchanged"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, FileOperationPatternKind & x) {
        if (j == "file") x = FileOperationPatternKind::FILE;
        else if (j == "folder") x = FileOperationPatternKind::FOLDER;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const FileOperationPatternKind & x) {
        switch (x) {
            case FileOperationPatternKind::FILE: j = "file"; break;
            case FileOperationPatternKind::FOLDER: j = "folder"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, FullDocumentDiagnosticReportKind & x) {
        if (j == "full") x = FullDocumentDiagnosticReportKind::FULL;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const FullDocumentDiagnosticReportKind & x) {
        switch (x) {
            case FullDocumentDiagnosticReportKind::FULL: j = "full"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, TraceValue & x) {
        if (j == "messages") x = TraceValue::MESSAGES;
        else if (j == "off") x = TraceValue::OFF;
        else if (j == "verbose") x = TraceValue::VERBOSE;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const TraceValue & x) {
        switch (x) {
            case TraceValue::MESSAGES: j = "messages"; break;
            case TraceValue::OFF: j = "off"; break;
            case TraceValue::VERBOSE: j = "verbose"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, MonikerKind & x) {
        if (j == "export") x = MonikerKind::EXPORT;
        else if (j == "import") x = MonikerKind::IMPORT;
        else if (j == "local") x = MonikerKind::LOCAL;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const MonikerKind & x) {
        switch (x) {
            case MonikerKind::EXPORT: j = "export"; break;
            case MonikerKind::IMPORT: j = "import"; break;
            case MonikerKind::LOCAL: j = "local"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, UniquenessLevel & x) {
        if (j == "document") x = UniquenessLevel::DOCUMENT;
        else if (j == "global") x = UniquenessLevel::GLOBAL;
        else if (j == "group") x = UniquenessLevel::GROUP;
        else if (j == "project") x = UniquenessLevel::PROJECT;
        else if (j == "scheme") x = UniquenessLevel::SCHEME;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const UniquenessLevel & x) {
        switch (x) {
            case UniquenessLevel::DOCUMENT: j = "document"; break;
            case UniquenessLevel::GLOBAL: j = "global"; break;
            case UniquenessLevel::GROUP: j = "group"; break;
            case UniquenessLevel::PROJECT: j = "project"; break;
            case UniquenessLevel::SCHEME: j = "scheme"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, RelatedUnchangedDocumentDiagnosticReportKind & x) {
        if (j == "unchanged") x = RelatedUnchangedDocumentDiagnosticReportKind::UNCHANGED;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const RelatedUnchangedDocumentDiagnosticReportKind & x) {
        switch (x) {
            case RelatedUnchangedDocumentDiagnosticReportKind::UNCHANGED: j = "unchanged"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, RenameFileKind & x) {
        if (j == "rename") x = RenameFileKind::RENAME;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const RenameFileKind & x) {
        switch (x) {
            case RenameFileKind::RENAME: j = "rename"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, SemanticTokenModifiers & x) {
        if (j == "abstract") x = SemanticTokenModifiers::ABSTRACT;
        else if (j == "async") x = SemanticTokenModifiers::ASYNC;
        else if (j == "declaration") x = SemanticTokenModifiers::DECLARATION;
        else if (j == "defaultLibrary") x = SemanticTokenModifiers::DEFAULT_LIBRARY;
        else if (j == "definition") x = SemanticTokenModifiers::DEFINITION;
        else if (j == "deprecated") x = SemanticTokenModifiers::DEPRECATED;
        else if (j == "documentation") x = SemanticTokenModifiers::DOCUMENTATION;
        else if (j == "modification") x = SemanticTokenModifiers::MODIFICATION;
        else if (j == "readonly") x = SemanticTokenModifiers::READONLY;
        else if (j == "static") x = SemanticTokenModifiers::STATIC;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const SemanticTokenModifiers & x) {
        switch (x) {
            case SemanticTokenModifiers::ABSTRACT: j = "abstract"; break;
            case SemanticTokenModifiers::ASYNC: j = "async"; break;
            case SemanticTokenModifiers::DECLARATION: j = "declaration"; break;
            case SemanticTokenModifiers::DEFAULT_LIBRARY: j = "defaultLibrary"; break;
            case SemanticTokenModifiers::DEFINITION: j = "definition"; break;
            case SemanticTokenModifiers::DEPRECATED: j = "deprecated"; break;
            case SemanticTokenModifiers::DOCUMENTATION: j = "documentation"; break;
            case SemanticTokenModifiers::MODIFICATION: j = "modification"; break;
            case SemanticTokenModifiers::READONLY: j = "readonly"; break;
            case SemanticTokenModifiers::STATIC: j = "static"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, SemanticTokenTypes & x) {
        static std::unordered_map<std::string, SemanticTokenTypes> enumValues {
            {"class", SemanticTokenTypes::CLASS},
            {"comment", SemanticTokenTypes::COMMENT},
            {"decorator", SemanticTokenTypes::DECORATOR},
            {"enum", SemanticTokenTypes::ENUM},
            {"enumMember", SemanticTokenTypes::ENUM_MEMBER},
            {"event", SemanticTokenTypes::EVENT},
            {"function", SemanticTokenTypes::FUNCTION},
            {"interface", SemanticTokenTypes::INTERFACE},
            {"keyword", SemanticTokenTypes::KEYWORD},
            {"macro", SemanticTokenTypes::MACRO},
            {"method", SemanticTokenTypes::METHOD},
            {"modifier", SemanticTokenTypes::MODIFIER},
            {"namespace", SemanticTokenTypes::NAMESPACE},
            {"number", SemanticTokenTypes::NUMBER},
            {"operator", SemanticTokenTypes::OPERATOR},
            {"parameter", SemanticTokenTypes::PARAMETER},
            {"property", SemanticTokenTypes::PROPERTY},
            {"regexp", SemanticTokenTypes::REGEXP},
            {"string", SemanticTokenTypes::STRING},
            {"struct", SemanticTokenTypes::STRUCT},
            {"type", SemanticTokenTypes::TYPE},
            {"typeParameter", SemanticTokenTypes::TYPE_PARAMETER},
            {"variable", SemanticTokenTypes::VARIABLE},
        };
        auto iter = enumValues.find(j.get<std::string>());
        if (iter != enumValues.end()) {
            x = iter->second;
        }
    }

    inline void to_json(json & j, const SemanticTokenTypes & x) {
        switch (x) {
            case SemanticTokenTypes::CLASS: j = "class"; break;
            case SemanticTokenTypes::COMMENT: j = "comment"; break;
            case SemanticTokenTypes::DECORATOR: j = "decorator"; break;
            case SemanticTokenTypes::ENUM: j = "enum"; break;
            case SemanticTokenTypes::ENUM_MEMBER: j = "enumMember"; break;
            case SemanticTokenTypes::EVENT: j = "event"; break;
            case SemanticTokenTypes::FUNCTION: j = "function"; break;
            case SemanticTokenTypes::INTERFACE: j = "interface"; break;
            case SemanticTokenTypes::KEYWORD: j = "keyword"; break;
            case SemanticTokenTypes::MACRO: j = "macro"; break;
            case SemanticTokenTypes::METHOD: j = "method"; break;
            case SemanticTokenTypes::MODIFIER: j = "modifier"; break;
            case SemanticTokenTypes::NAMESPACE: j = "namespace"; break;
            case SemanticTokenTypes::NUMBER: j = "number"; break;
            case SemanticTokenTypes::OPERATOR: j = "operator"; break;
            case SemanticTokenTypes::PARAMETER: j = "parameter"; break;
            case SemanticTokenTypes::PROPERTY: j = "property"; break;
            case SemanticTokenTypes::REGEXP: j = "regexp"; break;
            case SemanticTokenTypes::STRING: j = "string"; break;
            case SemanticTokenTypes::STRUCT: j = "struct"; break;
            case SemanticTokenTypes::TYPE: j = "type"; break;
            case SemanticTokenTypes::TYPE_PARAMETER: j = "typeParameter"; break;
            case SemanticTokenTypes::VARIABLE: j = "variable"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, WorkDoneProgressBeginKind & x) {
        if (j == "begin") x = WorkDoneProgressBeginKind::BEGIN;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const WorkDoneProgressBeginKind & x) {
        switch (x) {
            case WorkDoneProgressBeginKind::BEGIN: j = "begin"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, WorkDoneProgressEndKind & x) {
        if (j == "end") x = WorkDoneProgressEndKind::END;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const WorkDoneProgressEndKind & x) {
        switch (x) {
            case WorkDoneProgressEndKind::END: j = "end"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }

    inline void from_json(const json & j, WorkDoneProgressReportKind & x) {
        if (j == "report") x = WorkDoneProgressReportKind::REPORT;
        else { throw std::runtime_error("Input JSON does not conform to schema!"); }
    }

    inline void to_json(json & j, const WorkDoneProgressReportKind & x) {
        switch (x) {
            case WorkDoneProgressReportKind::REPORT: j = "report"; break;
            default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
        }
    }
}
namespace nlohmann {
    inline void adl_serializer<std::variant<bool, double, int64_t, std::string>>::from_json(const json & j, std::variant<bool, double, int64_t, std::string> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_number_integer())
            x = j.get<int64_t>();
        else if (j.is_number())
            x = j.get<double>();
        else if (j.is_string())
            x = j.get<std::string>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, double, int64_t, std::string>>::to_json(json & j, const std::variant<bool, double, int64_t, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<double>(x);
                break;
            case 2:
                j = std::get<int64_t>(x);
                break;
            case 3:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<int64_t, std::string>>::from_json(const json & j, std::variant<int64_t, std::string> & x) {
        if (j.is_number_integer())
            x = j.get<int64_t>();
        else if (j.is_string())
            x = j.get<std::string>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<int64_t, std::string>>::to_json(json & j, const std::variant<int64_t, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<int64_t>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::FullCapabilityClass>>::from_json(const json & j, std::variant<bool, lsps::FullCapabilityClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::FullCapabilityClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::FullCapabilityClass>>::to_json(json & j, const std::variant<bool, lsps::FullCapabilityClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::FullCapabilityClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeCapabilityClass>>::from_json(const json & j, std::variant<bool, lsps::RangeCapabilityClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::RangeCapabilityClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeCapabilityClass>>::to_json(json & j, const std::variant<bool, lsps::RangeCapabilityClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::RangeCapabilityClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::DocumentationMarkupContent, std::string>>::from_json(const json & j, std::variant<lsps::DocumentationMarkupContent, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::DocumentationMarkupContent>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::DocumentationMarkupContent, std::string>>::to_json(json & j, const std::variant<lsps::DocumentationMarkupContent, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::DocumentationMarkupContent>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::WorkspaceFolder, std::string>>::from_json(const json & j, std::variant<lsps::WorkspaceFolder, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::WorkspaceFolder>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::WorkspaceFolder, std::string>>::to_json(json & j, const std::variant<lsps::WorkspaceFolder, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::WorkspaceFolder>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::RelativePattern, std::string>>::from_json(const json & j, std::variant<lsps::RelativePattern, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::RelativePattern>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::RelativePattern, std::string>>::to_json(json & j, const std::variant<lsps::RelativePattern, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::RelativePattern>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::MarkedStringClass, std::string>>::from_json(const json & j, std::variant<lsps::MarkedStringClass, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::MarkedStringClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::MarkedStringClass, std::string>>::to_json(json & j, const std::variant<lsps::MarkedStringClass, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::MarkedStringClass>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string>>::from_json(const json & j, std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::ContentsMarkupContent>();
        else if (j.is_array())
            x = j.get<std::vector<lsps::MarkedString>>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string>>::to_json(json & j, const std::variant<std::vector<lsps::MarkedString>, lsps::ContentsMarkupContent, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<std::vector<lsps::MarkedString>>(x);
                break;
            case 1:
                j = std::get<lsps::ContentsMarkupContent>(x);
                break;
            case 2:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::CallHierarchyOptions>>::from_json(const json & j, std::variant<bool, lsps::CallHierarchyOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::CallHierarchyOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::CallHierarchyOptions>>::to_json(json & j, const std::variant<bool, lsps::CallHierarchyOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::CallHierarchyOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::CodeActionOptions>>::from_json(const json & j, std::variant<bool, lsps::CodeActionOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::CodeActionOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::CodeActionOptions>>::to_json(json & j, const std::variant<bool, lsps::CodeActionOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::CodeActionOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentColorOptions>>::from_json(const json & j, std::variant<bool, lsps::DocumentColorOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DocumentColorOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentColorOptions>>::to_json(json & j, const std::variant<bool, lsps::DocumentColorOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DocumentColorOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DeclarationRationOptions>>::from_json(const json & j, std::variant<bool, lsps::DeclarationRationOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DeclarationRationOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DeclarationRationOptions>>::to_json(json & j, const std::variant<bool, lsps::DeclarationRationOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DeclarationRationOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DefinitionOptions>>::from_json(const json & j, std::variant<bool, lsps::DefinitionOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DefinitionOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DefinitionOptions>>::to_json(json & j, const std::variant<bool, lsps::DefinitionOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DefinitionOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentFormattingOptions>>::from_json(const json & j, std::variant<bool, lsps::DocumentFormattingOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DocumentFormattingOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentFormattingOptions>>::to_json(json & j, const std::variant<bool, lsps::DocumentFormattingOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DocumentFormattingOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentHighlightOptions>>::from_json(const json & j, std::variant<bool, lsps::DocumentHighlightOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DocumentHighlightOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentHighlightOptions>>::to_json(json & j, const std::variant<bool, lsps::DocumentHighlightOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DocumentHighlightOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentRangeFormattingOptions>>::from_json(const json & j, std::variant<bool, lsps::DocumentRangeFormattingOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DocumentRangeFormattingOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentRangeFormattingOptions>>::to_json(json & j, const std::variant<bool, lsps::DocumentRangeFormattingOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DocumentRangeFormattingOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentSymbolOptions>>::from_json(const json & j, std::variant<bool, lsps::DocumentSymbolOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::DocumentSymbolOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::DocumentSymbolOptions>>::to_json(json & j, const std::variant<bool, lsps::DocumentSymbolOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::DocumentSymbolOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::FoldingRangeOptions>>::from_json(const json & j, std::variant<bool, lsps::FoldingRangeOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::FoldingRangeOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::FoldingRangeOptions>>::to_json(json & j, const std::variant<bool, lsps::FoldingRangeOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::FoldingRangeOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::HoverOptions>>::from_json(const json & j, std::variant<bool, lsps::HoverOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::HoverOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::HoverOptions>>::to_json(json & j, const std::variant<bool, lsps::HoverOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::HoverOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::ImplementationAtionOptions>>::from_json(const json & j, std::variant<bool, lsps::ImplementationAtionOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::ImplementationAtionOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::ImplementationAtionOptions>>::to_json(json & j, const std::variant<bool, lsps::ImplementationAtionOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::ImplementationAtionOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::InlayHintOptions>>::from_json(const json & j, std::variant<bool, lsps::InlayHintOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::InlayHintOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::InlayHintOptions>>::to_json(json & j, const std::variant<bool, lsps::InlayHintOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::InlayHintOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::InlineValueOptions>>::from_json(const json & j, std::variant<bool, lsps::InlineValueOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::InlineValueOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::InlineValueOptions>>::to_json(json & j, const std::variant<bool, lsps::InlineValueOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::InlineValueOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::LinkedEditingRangeOptions>>::from_json(const json & j, std::variant<bool, lsps::LinkedEditingRangeOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::LinkedEditingRangeOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::LinkedEditingRangeOptions>>::to_json(json & j, const std::variant<bool, lsps::LinkedEditingRangeOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::LinkedEditingRangeOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::MonikerOptions>>::from_json(const json & j, std::variant<bool, lsps::MonikerOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::MonikerOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::MonikerOptions>>::to_json(json & j, const std::variant<bool, lsps::MonikerOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::MonikerOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::NotebookClass, std::string>>::from_json(const json & j, std::variant<lsps::NotebookClass, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::NotebookClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::NotebookClass, std::string>>::to_json(json & j, const std::variant<lsps::NotebookClass, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::NotebookClass>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::ReferenceOptions>>::from_json(const json & j, std::variant<bool, lsps::ReferenceOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::ReferenceOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::ReferenceOptions>>::to_json(json & j, const std::variant<bool, lsps::ReferenceOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::ReferenceOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::RenameOptions>>::from_json(const json & j, std::variant<bool, lsps::RenameOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::RenameOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::RenameOptions>>::to_json(json & j, const std::variant<bool, lsps::RenameOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::RenameOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::SelectionRangeOptions>>::from_json(const json & j, std::variant<bool, lsps::SelectionRangeOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::SelectionRangeOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::SelectionRangeOptions>>::to_json(json & j, const std::variant<bool, lsps::SelectionRangeOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::SelectionRangeOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::FullClass>>::from_json(const json & j, std::variant<bool, lsps::FullClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::FullClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::FullClass>>::to_json(json & j, const std::variant<bool, lsps::FullClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::FullClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeClass>>::from_json(const json & j, std::variant<bool, lsps::RangeClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::RangeClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeClass>>::to_json(json & j, const std::variant<bool, lsps::RangeClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::RangeClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<lsps::TextDocumentSyncOptions, double>>::from_json(const json & j, std::variant<lsps::TextDocumentSyncOptions, double> & x) {
        if (j.is_number())
            x = j.get<double>();
        else if (j.is_object())
            x = j.get<lsps::TextDocumentSyncOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<lsps::TextDocumentSyncOptions, double>>::to_json(json & j, const std::variant<lsps::TextDocumentSyncOptions, double> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<lsps::TextDocumentSyncOptions>(x);
                break;
            case 1:
                j = std::get<double>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::TypeDefinitionTionOptions>>::from_json(const json & j, std::variant<bool, lsps::TypeDefinitionTionOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::TypeDefinitionTionOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::TypeDefinitionTionOptions>>::to_json(json & j, const std::variant<bool, lsps::TypeDefinitionTionOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::TypeDefinitionTionOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::TypeHierarchyOptions>>::from_json(const json & j, std::variant<bool, lsps::TypeHierarchyOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::TypeHierarchyOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::TypeHierarchyOptions>>::to_json(json & j, const std::variant<bool, lsps::TypeHierarchyOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::TypeHierarchyOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, std::string>>::from_json(const json & j, std::variant<bool, std::string> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_string())
            x = j.get<std::string>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, std::string>>::to_json(json & j, const std::variant<bool, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::WorkspaceSymbolOptions>>::from_json(const json & j, std::variant<bool, lsps::WorkspaceSymbolOptions> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::WorkspaceSymbolOptions>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::WorkspaceSymbolOptions>>::to_json(json & j, const std::variant<bool, lsps::WorkspaceSymbolOptions> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::WorkspaceSymbolOptions>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<std::vector<lsps::InlayHintLabelPart>, std::string>>::from_json(const json & j, std::variant<std::vector<lsps::InlayHintLabelPart>, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_array())
            x = j.get<std::vector<lsps::InlayHintLabelPart>>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<std::vector<lsps::InlayHintLabelPart>, std::string>>::to_json(json & j, const std::variant<std::vector<lsps::InlayHintLabelPart>, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<std::vector<lsps::InlayHintLabelPart>>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<std::vector<json>, std::map<std::string, json>>>::from_json(const json & j, std::variant<std::vector<json>, std::map<std::string, json>> & x) {
        if (j.is_object())
            x = j.get<std::map<std::string, json>>();
        else if (j.is_array())
            x = j.get<std::vector<json>>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<std::vector<json>, std::map<std::string, json>>>::to_json(json & j, const std::variant<std::vector<json>, std::map<std::string, json>> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<std::vector<json>>(x);
                break;
            case 1:
                j = std::get<std::map<std::string, json>>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<std::vector<int64_t>, std::string>>::from_json(const json & j, std::variant<std::vector<int64_t>, std::string> & x) {
        if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_array())
            x = j.get<std::vector<int64_t>>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<std::vector<int64_t>, std::string>>::to_json(json & j, const std::variant<std::vector<int64_t>, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<std::vector<int64_t>>(x);
                break;
            case 1:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::FullOptionClass>>::from_json(const json & j, std::variant<bool, lsps::FullOptionClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::FullOptionClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::FullOptionClass>>::to_json(json & j, const std::variant<bool, lsps::FullOptionClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::FullOptionClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeOptionClass>>::from_json(const json & j, std::variant<bool, lsps::RangeOptionClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::RangeOptionClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeOptionClass>>::to_json(json & j, const std::variant<bool, lsps::RangeOptionClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::RangeOptionClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::FullRegistrationOptionsClass>>::from_json(const json & j, std::variant<bool, lsps::FullRegistrationOptionsClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::FullRegistrationOptionsClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::FullRegistrationOptionsClass>>::to_json(json & j, const std::variant<bool, lsps::FullRegistrationOptionsClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::FullRegistrationOptionsClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeRegistrationOptionClass>>::from_json(const json & j, std::variant<bool, lsps::RangeRegistrationOptionClass> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_object())
            x = j.get<lsps::RangeRegistrationOptionClass>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<bool, lsps::RangeRegistrationOptionClass>>::to_json(json & j, const std::variant<bool, lsps::RangeRegistrationOptionClass> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<bool>(x);
                break;
            case 1:
                j = std::get<lsps::RangeRegistrationOptionClass>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }

    inline void adl_serializer<std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string>>::from_json(const json & j, std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string> & x) {
        if (j.is_boolean())
            x = j.get<bool>();
        else if (j.is_number_integer())
            x = j.get<int64_t>();
        else if (j.is_number())
            x = j.get<double>();
        else if (j.is_string())
            x = j.get<std::string>();
        else if (j.is_object())
            x = j.get<lsps::ModelsClass>();
        else if (j.is_array())
            x = j.get<std::vector<json>>();
        else throw std::runtime_error("Could not deserialise!");
    }

    inline void adl_serializer<std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string>>::to_json(json & j, const std::variant<std::vector<json>, bool, lsps::ModelsClass, double, int64_t, std::string> & x) {
        switch (x.index()) {
            case 0:
                j = std::get<std::vector<json>>(x);
                break;
            case 1:
                j = std::get<bool>(x);
                break;
            case 2:
                j = std::get<lsps::ModelsClass>(x);
                break;
            case 3:
                j = std::get<double>(x);
                break;
            case 4:
                j = std::get<int64_t>(x);
                break;
            case 5:
                j = std::get<std::string>(x);
                break;
            default: throw std::runtime_error("Input JSON does not conform to schema!");
        }
    }
}
