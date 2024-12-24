//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceEditClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ChangeAnnotationSupport.hpp"

namespace lsps {
namespace models {
    enum class FailureHandlingKind : int;
    enum class ResourceOperationKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * Capabilities specific to `WorkspaceEdit`s
     */

    using nlohmann::json;

    /**
     * Capabilities specific to `WorkspaceEdit`s
     */
    class WorkspaceEditClientCapabilities {
        public:
        WorkspaceEditClientCapabilities() = default;
        virtual ~WorkspaceEditClientCapabilities() = default;

        private:
        std::optional<ChangeAnnotationSupport> change_annotation_support;
        std::optional<bool> document_changes;
        std::optional<FailureHandlingKind> failure_handling;
        std::optional<bool> normalizes_line_endings;
        std::optional<std::vector<ResourceOperationKind>> resource_operations;

        public:
        /**
         * Whether the client in general supports change annotations on text edits, create file,
         * rename file and delete file changes.
         */
        std::optional<ChangeAnnotationSupport> get_change_annotation_support() const { return change_annotation_support; }
        void set_change_annotation_support(std::optional<ChangeAnnotationSupport> value) { this->change_annotation_support = value; }

        /**
         * The client supports versioned document changes in `WorkspaceEdit`s
         */
        std::optional<bool> get_document_changes() const { return document_changes; }
        void set_document_changes(std::optional<bool> value) { this->document_changes = value; }

        /**
         * The failure handling strategy of a client if applying the workspace edit fails.
         */
        std::optional<FailureHandlingKind> get_failure_handling() const { return failure_handling; }
        void set_failure_handling(std::optional<FailureHandlingKind> value) { this->failure_handling = value; }

        /**
         * Whether the client normalizes line endings to the client specific setting. If set to
         * `true` the client will normalize line ending characters in a workspace edit to the client
         * specific new line character(s).
         */
        std::optional<bool> get_normalizes_line_endings() const { return normalizes_line_endings; }
        void set_normalizes_line_endings(std::optional<bool> value) { this->normalizes_line_endings = value; }

        /**
         * The resource operations the client supports. Clients should at least support 'create',
         * 'rename' and 'delete' files and folders.
         */
        std::optional<std::vector<ResourceOperationKind>> get_resource_operations() const { return resource_operations; }
        void set_resource_operations(std::optional<std::vector<ResourceOperationKind>> value) { this->resource_operations = value; }
    };
}
}
