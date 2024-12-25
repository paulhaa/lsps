//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeNotebookDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookDocumentChangeEvent.hpp"
#include "VersionedNotebookDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    /**
     * The params sent in a change notebook document notification.
     */

    using nlohmann::json;

    /**
     * The params sent in a change notebook document notification.
     */
    class DidChangeNotebookDocumentParams {
        public:
        DidChangeNotebookDocumentParams() = default;
        virtual ~DidChangeNotebookDocumentParams() = default;

        private:
        NotebookDocumentChangeEvent change;
        VersionedNotebookDocumentIdentifier notebook_document;

        public:
        /**
         * The actual changes to the notebook document.
         *
         * The change describes single state change to the notebook document. So it moves a notebook
         * document, its cells and its cell text document contents from state S to S'.
         *
         * To mirror the content of a notebook using change events use the following approach:
         * - start with the same initial content
         * - apply the 'notebookDocument/didChange' notifications in the order   you receive them.
         */
        const NotebookDocumentChangeEvent & get_change() const { return change; }
        NotebookDocumentChangeEvent & get_mutable_change() { return change; }
        void set_change(const NotebookDocumentChangeEvent & value) { this->change = value; }

        /**
         * The notebook document that did change. The version number points to the version after all
         * provided changes have been applied.
         */
        const VersionedNotebookDocumentIdentifier & get_notebook_document() const { return notebook_document; }
        VersionedNotebookDocumentIdentifier & get_mutable_notebook_document() { return notebook_document; }
        void set_notebook_document(const VersionedNotebookDocumentIdentifier & value) { this->notebook_document = value; }
    };
}
}
