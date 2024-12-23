//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookCellTextDocumentFilter.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookUnion.hpp"
#include "NotebookClass.hpp"

namespace lsps {
    /**
     * A notebook cell text document filter denotes a cell text document by different properties.
     */

    using nlohmann::json;

    /**
     * A notebook cell text document filter denotes a cell text document by different properties.
     */
    class NotebookCellTextDocumentFilter {
        public:
        NotebookCellTextDocumentFilter() = default;
        virtual ~NotebookCellTextDocumentFilter() = default;

        private:
        std::optional<std::string> language;
        NotebookUnion notebook;

        public:
        /**
         * A language id like `python`.
         *
         * Will be matched against the language id of the notebook cell document. '*' matches every
         * language.
         */
        std::optional<std::string> get_language() const { return language; }
        void set_language(std::optional<std::string> value) { this->language = value; }

        /**
         * A filter that matches against the notebook containing the notebook cell. If a string
         * value is provided it matches against the notebook type. '*' matches every notebook.
         */
        const NotebookUnion & get_notebook() const { return notebook; }
        NotebookUnion & get_mutable_notebook() { return notebook; }
        void set_notebook(const NotebookUnion & value) { this->notebook = value; }
    };
}
