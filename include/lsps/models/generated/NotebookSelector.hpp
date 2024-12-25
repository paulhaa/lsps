//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookSelector.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Cell.hpp"
#include "NotebookUnion.hpp"
#include "NotebookClass.hpp"

namespace lsps {
namespace models {
    /**
     * The notebooks to be synced
     */

    using nlohmann::json;

    /**
     * The notebooks to be synced
     */
    class NotebookSelector {
        public:
        NotebookSelector() = default;
        virtual ~NotebookSelector() = default;

        private:
        std::optional<std::vector<Cell>> cells;
        std::optional<NotebookUnion> notebook;

        public:
        /**
         * The cells of the matching notebook to be synced.
         */
        std::optional<std::vector<Cell>> get_cells() const { return cells; }
        void set_cells(std::optional<std::vector<Cell>> value) { this->cells = value; }

        /**
         * The notebook to be synced. If a string value is provided it matches against the notebook
         * type. '*' matches every notebook.
         */
        std::optional<NotebookUnion> get_notebook() const { return notebook; }
        void set_notebook(std::optional<NotebookUnion> value) { this->notebook = value; }
    };
}
}
