//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidSaveNotebookDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    /**
     * The params sent in a save notebook document notification.
     */

    using nlohmann::json;

    /**
     * The params sent in a save notebook document notification.
     */
    class DidSaveNotebookDocumentParams {
        public:
        DidSaveNotebookDocumentParams() = default;
        virtual ~DidSaveNotebookDocumentParams() = default;

        private:
        NotebookDocumentIdentifier notebook_document;

        public:
        /**
         * The notebook document that got saved.
         */
        const NotebookDocumentIdentifier & get_notebook_document() const { return notebook_document; }
        NotebookDocumentIdentifier & get_mutable_notebook_document() { return notebook_document; }
        void set_notebook_document(const NotebookDocumentIdentifier & value) { this->notebook_document = value; }
    };
}
}
