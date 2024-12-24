//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentEdit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "EditElement.hpp"
#include "OptionalVersionedTextDocumentIdentifier.hpp"
#include "EFileOptions.hpp"

namespace lsps {
namespace models {
    enum class ResourceOperationKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * Create file operation
     *
     * Rename file operation
     *
     * Delete file operation
     */

    using nlohmann::json;

    /**
     * Create file operation
     *
     * Rename file operation
     *
     * Delete file operation
     */
    class TextDocumentEdit {
        public:
        TextDocumentEdit() = default;
        virtual ~TextDocumentEdit() = default;

        private:
        std::optional<std::vector<EditElement>> edits;
        std::optional<OptionalVersionedTextDocumentIdentifier> text_document;
        std::optional<std::string> annotation_id;
        std::optional<ResourceOperationKind> kind;
        std::optional<EFileOptions> options;
        std::optional<std::string> uri;
        std::optional<std::string> new_uri;
        std::optional<std::string> old_uri;

        public:
        /**
         * The edits to be applied.
         */
        std::optional<std::vector<EditElement>> get_edits() const { return edits; }
        void set_edits(std::optional<std::vector<EditElement>> value) { this->edits = value; }

        /**
         * The text document to change.
         */
        std::optional<OptionalVersionedTextDocumentIdentifier> get_text_document() const { return text_document; }
        void set_text_document(std::optional<OptionalVersionedTextDocumentIdentifier> value) { this->text_document = value; }

        /**
         * An optional annotation identifier describing the operation.
         */
        std::optional<std::string> get_annotation_id() const { return annotation_id; }
        void set_annotation_id(std::optional<std::string> value) { this->annotation_id = value; }

        /**
         * A create
         *
         * A rename
         *
         * A delete
         */
        std::optional<ResourceOperationKind> get_kind() const { return kind; }
        void set_kind(std::optional<ResourceOperationKind> value) { this->kind = value; }

        /**
         * Additional options
         *
         * Rename options.
         *
         * Delete options.
         */
        std::optional<EFileOptions> get_options() const { return options; }
        void set_options(std::optional<EFileOptions> value) { this->options = value; }

        /**
         * The resource to create.
         *
         * The file to delete.
         */
        std::optional<std::string> get_uri() const { return uri; }
        void set_uri(std::optional<std::string> value) { this->uri = value; }

        /**
         * The new location.
         */
        std::optional<std::string> get_new_uri() const { return new_uri; }
        void set_new_uri(std::optional<std::string> value) { this->new_uri = value; }

        /**
         * The old (existing) location.
         */
        std::optional<std::string> get_old_uri() const { return old_uri; }
        void set_old_uri(std::optional<std::string> value) { this->old_uri = value; }
    };
}
}
