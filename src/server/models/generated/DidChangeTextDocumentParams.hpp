//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeTextDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentContentChangeEvent.hpp"
#include "VersionedTextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class DidChangeTextDocumentParams {
        public:
        DidChangeTextDocumentParams() = default;
        virtual ~DidChangeTextDocumentParams() = default;

        private:
        std::vector<TextDocumentContentChangeEvent> content_changes;
        VersionedTextDocumentIdentifier text_document;

        public:
        /**
         * The actual content changes. The content changes describe single state changes to the
         * document. So if there are two content changes c1 (at array index 0) and c2 (at array
         * index 1) for a document in state S then c1 moves the document from S to S' and c2 from S'
         * to S''. So c1 is computed on the state S and c2 is computed on the state S'.
         *
         * To mirror the content of a document using change events use the following approach:
         * - start with the same initial content
         * - apply the 'textDocument/didChange' notifications in the order you   receive them.
         * - apply the `TextDocumentContentChangeEvent`s in a single notification   in the order you
         * receive them.
         */
        const std::vector<TextDocumentContentChangeEvent> & get_content_changes() const { return content_changes; }
        std::vector<TextDocumentContentChangeEvent> & get_mutable_content_changes() { return content_changes; }
        void set_content_changes(const std::vector<TextDocumentContentChangeEvent> & value) { this->content_changes = value; }

        /**
         * The document that did change. The version number points to the version after all provided
         * content changes have been applied.
         */
        const VersionedTextDocumentIdentifier & get_text_document() const { return text_document; }
        VersionedTextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const VersionedTextDocumentIdentifier & value) { this->text_document = value; }
    };
}
}
