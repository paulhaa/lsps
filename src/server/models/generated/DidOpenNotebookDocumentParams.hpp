//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidOpenNotebookDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentItem.hpp"
#include "NotebookDocument.hpp"

namespace lsps {
namespace models {
    /**
     * The params sent in an open notebook document notification.
     */

    using nlohmann::json;

    /**
     * The params sent in an open notebook document notification.
     */
    class DidOpenNotebookDocumentParams {
        public:
        DidOpenNotebookDocumentParams() = default;
        virtual ~DidOpenNotebookDocumentParams() = default;

        private:
        std::vector<TextDocumentItem> cell_text_documents;
        NotebookDocument notebook_document;

        public:
        /**
         * The text documents that represent the content of a notebook cell.
         */
        const std::vector<TextDocumentItem> & get_cell_text_documents() const { return cell_text_documents; }
        std::vector<TextDocumentItem> & get_mutable_cell_text_documents() { return cell_text_documents; }
        void set_cell_text_documents(const std::vector<TextDocumentItem> & value) { this->cell_text_documents = value; }

        /**
         * The notebook document that got opened.
         */
        const NotebookDocument & get_notebook_document() const { return notebook_document; }
        NotebookDocument & get_mutable_notebook_document() { return notebook_document; }
        void set_notebook_document(const NotebookDocument & value) { this->notebook_document = value; }
    };
}
}
