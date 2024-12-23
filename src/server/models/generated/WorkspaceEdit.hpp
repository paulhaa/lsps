//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceEdit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ChangeAnnotation.hpp"
#include "TextEdit.hpp"
#include "TextDocumentEdit.hpp"

namespace lsps {
    /**
     * The edits to apply.
     *
     * The workspace edit this code action performs.
     */

    using nlohmann::json;

    /**
     * The edits to apply.
     *
     * The workspace edit this code action performs.
     */
    class WorkspaceEdit {
        public:
        WorkspaceEdit() = default;
        virtual ~WorkspaceEdit() = default;

        private:
        std::optional<std::map<std::string, ChangeAnnotation>> change_annotations;
        std::optional<std::map<std::string, std::vector<TextEdit>>> changes;
        std::optional<std::vector<TextDocumentEdit>> document_changes;

        public:
        /**
         * A map of change annotations that can be referenced in `AnnotatedTextEdit`s or create,
         * rename and delete file / folder operations.
         *
         * Whether clients honor this property depends on the client capability
         * `workspace.changeAnnotationSupport`.
         */
        std::optional<std::map<std::string, ChangeAnnotation>> get_change_annotations() const { return change_annotations; }
        void set_change_annotations(std::optional<std::map<std::string, ChangeAnnotation>> value) { this->change_annotations = value; }

        /**
         * Holds changes to existing resources.
         */
        std::optional<std::map<std::string, std::vector<TextEdit>>> get_changes() const { return changes; }
        void set_changes(std::optional<std::map<std::string, std::vector<TextEdit>>> value) { this->changes = value; }

        /**
         * Depending on the client capability `workspace.workspaceEdit.resourceOperations` document
         * changes are either an array of `TextDocumentEdit`s to express changes to n different text
         * documents where each text document edit addresses a specific version of a text document.
         * Or it can contain above `TextDocumentEdit`s mixed with create, rename and delete file /
         * folder operations.
         *
         * Whether a client supports versioned document edits is expressed via
         * `workspace.workspaceEdit.documentChanges` client capability.
         *
         * If a client neither supports `documentChanges` nor
         * `workspace.workspaceEdit.resourceOperations` then only plain `TextEdit`s using the
         * `changes` property are supported.
         */
        std::optional<std::vector<TextDocumentEdit>> get_document_changes() const { return document_changes; }
        void set_document_changes(std::optional<std::vector<TextDocumentEdit>> value) { this->document_changes = value; }
    };
}
