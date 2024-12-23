//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Structure.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookCellArrayChange.hpp"
#include "TextDocumentIdentifier.hpp"
#include "TextDocumentItem.hpp"

namespace lsps {
    /**
     * Changes to the cell structure to add or remove cells.
     */

    using nlohmann::json;

    /**
     * Changes to the cell structure to add or remove cells.
     */
    class Structure {
        public:
        Structure() = default;
        virtual ~Structure() = default;

        private:
        NotebookCellArrayChange array;
        std::optional<std::vector<TextDocumentIdentifier>> did_close;
        std::optional<std::vector<TextDocumentItem>> did_open;

        public:
        /**
         * The change to the cell array.
         */
        const NotebookCellArrayChange & get_array() const { return array; }
        NotebookCellArrayChange & get_mutable_array() { return array; }
        void set_array(const NotebookCellArrayChange & value) { this->array = value; }

        /**
         * Additional closed cell text documents.
         */
        std::optional<std::vector<TextDocumentIdentifier>> get_did_close() const { return did_close; }
        void set_did_close(std::optional<std::vector<TextDocumentIdentifier>> value) { this->did_close = value; }

        /**
         * Additional opened cell text documents.
         */
        std::optional<std::vector<TextDocumentItem>> get_did_open() const { return did_open; }
        void set_did_open(std::optional<std::vector<TextDocumentItem>> value) { this->did_open = value; }
    };
}
