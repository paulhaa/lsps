//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Cells.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookCell.hpp"
#include "Structure.hpp"
#include "TextContent.hpp"

namespace lsps {
namespace models {
    /**
     * Changes to cells
     */

    using nlohmann::json;

    /**
     * Changes to cells
     */
    class Cells {
        public:
        Cells() = default;
        virtual ~Cells() = default;

        private:
        std::optional<std::vector<NotebookCell>> data;
        std::optional<Structure> structure;
        std::optional<std::vector<TextContent>> text_content;

        public:
        /**
         * Changes to notebook cells properties like its kind, execution summary or metadata.
         */
        std::optional<std::vector<NotebookCell>> get_data() const { return data; }
        void set_data(std::optional<std::vector<NotebookCell>> value) { this->data = value; }

        /**
         * Changes to the cell structure to add or remove cells.
         */
        std::optional<Structure> get_structure() const { return structure; }
        void set_structure(std::optional<Structure> value) { this->structure = value; }

        /**
         * Changes to the text content of notebook cells.
         */
        std::optional<std::vector<TextContent>> get_text_content() const { return text_content; }
        void set_text_content(std::optional<std::vector<TextContent>> value) { this->text_content = value; }
    };
}
}
