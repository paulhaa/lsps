//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class NotebookClass {
        public:
        NotebookClass() = default;
        virtual ~NotebookClass() = default;

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
}
