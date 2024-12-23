//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidCloseNotebookDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentIdentifier.hpp"
#include "NotebookDocumentIdentifier.hpp"

namespace lsps {
    /**
     * The params sent in a close notebook document notification.
     */

    using nlohmann::json;

    /**
     * The params sent in a close notebook document notification.
     */
    class DidCloseNotebookDocumentParams {
        public:
        DidCloseNotebookDocumentParams() = default;
        virtual ~DidCloseNotebookDocumentParams() = default;

        private:
        std::vector<TextDocumentIdentifier> cell_text_documents;
        NotebookDocumentIdentifier notebook_document;

        public:
        /**
         * The text documents that represent the content of a notebook cell that got closed.
         */
        const std::vector<TextDocumentIdentifier> & get_cell_text_documents() const { return cell_text_documents; }
        std::vector<TextDocumentIdentifier> & get_mutable_cell_text_documents() { return cell_text_documents; }
        void set_cell_text_documents(const std::vector<TextDocumentIdentifier> & value) { this->cell_text_documents = value; }

        /**
         * The notebook document that got closed.
         */
        const NotebookDocumentIdentifier & get_notebook_document() const { return notebook_document; }
        NotebookDocumentIdentifier & get_mutable_notebook_document() { return notebook_document; }
        void set_notebook_document(const NotebookDocumentIdentifier & value) { this->notebook_document = value; }
    };
}
