//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookCellArrayChange.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookCell.hpp"

namespace lsps {
    /**
     * The change to the cell array.
     *
     * A change describing how to move a `NotebookCell` array from state S to S'.
     */

    using nlohmann::json;

    /**
     * The change to the cell array.
     *
     * A change describing how to move a `NotebookCell` array from state S to S'.
     */
    class NotebookCellArrayChange {
        public:
        NotebookCellArrayChange() = default;
        virtual ~NotebookCellArrayChange() = default;

        private:
        std::optional<std::vector<NotebookCell>> cells;
        int64_t delete_count;
        int64_t start;

        public:
        /**
         * The new cells, if any
         */
        std::optional<std::vector<NotebookCell>> get_cells() const { return cells; }
        void set_cells(std::optional<std::vector<NotebookCell>> value) { this->cells = value; }

        /**
         * The deleted cells
         */
        const int64_t & get_delete_count() const { return delete_count; }
        int64_t & get_mutable_delete_count() { return delete_count; }
        void set_delete_count(const int64_t & value) { this->delete_count = value; }

        /**
         * The start offset of the cell that changed.
         */
        const int64_t & get_start() const { return start; }
        int64_t & get_mutable_start() { return start; }
        void set_start(const int64_t & value) { this->start = value; }
    };
}
