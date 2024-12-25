//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocument.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookCell.hpp"
#include "LspAny.hpp"

namespace lsps {
namespace models {
    /**
     * The notebook document that got opened.
     *
     * A notebook document.
     */

    using nlohmann::json;

    /**
     * The notebook document that got opened.
     *
     * A notebook document.
     */
    class NotebookDocument {
        public:
        NotebookDocument() = default;
        virtual ~NotebookDocument() = default;

        private:
        std::vector<NotebookCell> cells;
        std::optional<std::map<std::string, LspAny>> metadata;
        std::string notebook_type;
        std::string uri;
        int64_t version;

        public:
        /**
         * The cells of a notebook.
         */
        const std::vector<NotebookCell> & get_cells() const { return cells; }
        std::vector<NotebookCell> & get_mutable_cells() { return cells; }
        void set_cells(const std::vector<NotebookCell> & value) { this->cells = value; }

        /**
         * Additional metadata stored with the notebook document.
         */
        std::optional<std::map<std::string, LspAny>> get_metadata() const { return metadata; }
        void set_metadata(std::optional<std::map<std::string, LspAny>> value) { this->metadata = value; }

        /**
         * The type of the notebook.
         */
        const std::string & get_notebook_type() const { return notebook_type; }
        std::string & get_mutable_notebook_type() { return notebook_type; }
        void set_notebook_type(const std::string & value) { this->notebook_type = value; }

        /**
         * The notebook document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number of this document (it will increase after each change, including
         * undo/redo).
         */
        const int64_t & get_version() const { return version; }
        int64_t & get_mutable_version() { return version; }
        void set_version(const int64_t & value) { this->version = value; }
    };
}
}
