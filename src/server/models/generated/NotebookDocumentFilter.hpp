//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentFilter.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * A notebook document filter denotes a notebook document by different properties.
     */

    using nlohmann::json;

    /**
     * A notebook document filter denotes a notebook document by different properties.
     */
    class NotebookDocumentFilter {
        public:
        NotebookDocumentFilter() = default;
        virtual ~NotebookDocumentFilter() = default;

        private:
        std::optional<std::string> notebook_type;
        std::optional<std::string> pattern;
        std::optional<std::string> scheme;

        public:
        /**
         * The type of the enclosing notebook.
         */
        std::optional<std::string> get_notebook_type() const { return notebook_type; }
        void set_notebook_type(std::optional<std::string> value) { this->notebook_type = value; }

        /**
         * A glob pattern.
         */
        std::optional<std::string> get_pattern() const { return pattern; }
        void set_pattern(std::optional<std::string> value) { this->pattern = value; }

        /**
         * A Uri scheme, like `file` or `untitled`.
         */
        std::optional<std::string> get_scheme() const { return scheme; }
        void set_scheme(std::optional<std::string> value) { this->scheme = value; }
    };
}
