//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentChangeEvent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Cells.hpp"
#include "LspAny.hpp"

namespace lsps {
    /**
     * The actual changes to the notebook document.
     *
     * The change describes single state change to the notebook document. So it moves a notebook
     * document, its cells and its cell text document contents from state S to S'.
     *
     * To mirror the content of a notebook using change events use the following approach:
     * - start with the same initial content
     * - apply the 'notebookDocument/didChange' notifications in the order   you receive them.
     *
     * A change event for a notebook document.
     */

    using nlohmann::json;

    /**
     * The actual changes to the notebook document.
     *
     * The change describes single state change to the notebook document. So it moves a notebook
     * document, its cells and its cell text document contents from state S to S'.
     *
     * To mirror the content of a notebook using change events use the following approach:
     * - start with the same initial content
     * - apply the 'notebookDocument/didChange' notifications in the order   you receive them.
     *
     * A change event for a notebook document.
     */
    class NotebookDocumentChangeEvent {
        public:
        NotebookDocumentChangeEvent() = default;
        virtual ~NotebookDocumentChangeEvent() = default;

        private:
        std::optional<Cells> cells;
        std::optional<std::map<std::string, LspAny>> metadata;

        public:
        /**
         * Changes to cells
         */
        std::optional<Cells> get_cells() const { return cells; }
        void set_cells(std::optional<Cells> value) { this->cells = value; }

        /**
         * The changed meta data if any.
         */
        std::optional<std::map<std::string, LspAny>> get_metadata() const { return metadata; }
        void set_metadata(std::optional<std::map<std::string, LspAny>> value) { this->metadata = value; }
    };
}
