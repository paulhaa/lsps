//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentSymbol.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * Represents programming constructs like variables, classes, interfaces etc. that appear in
     * a document. Document symbols can be hierarchical and they have two ranges: one that
     * encloses its definition and one that points to its most interesting range, e.g. the range
     * of an identifier.
     */

    using nlohmann::json;

    /**
     * Represents programming constructs like variables, classes, interfaces etc. that appear in
     * a document. Document symbols can be hierarchical and they have two ranges: one that
     * encloses its definition and one that points to its most interesting range, e.g. the range
     * of an identifier.
     */
    class DocumentSymbol {
        public:
        DocumentSymbol() = default;
        virtual ~DocumentSymbol() = default;

        private:
        std::optional<std::vector<DocumentSymbol>> children;
        std::optional<bool> deprecated;
        std::optional<std::string> detail;
        double kind;
        std::string name;
        PurpleRange range;
        PurpleRange selection_range;
        std::optional<std::vector<double>> tags;

        public:
        /**
         * Children of this symbol, e.g. properties of a class.
         */
        std::optional<std::vector<DocumentSymbol>> get_children() const { return children; }
        void set_children(std::optional<std::vector<DocumentSymbol>> value) { this->children = value; }

        /**
         * Indicates if this symbol is deprecated.
         */
        std::optional<bool> get_deprecated() const { return deprecated; }
        void set_deprecated(std::optional<bool> value) { this->deprecated = value; }

        /**
         * More detail for this symbol, e.g the signature of a function.
         */
        std::optional<std::string> get_detail() const { return detail; }
        void set_detail(std::optional<std::string> value) { this->detail = value; }

        /**
         * The kind of this symbol.
         */
        const double & get_kind() const { return kind; }
        double & get_mutable_kind() { return kind; }
        void set_kind(const double & value) { this->kind = value; }

        /**
         * The name of this symbol. Will be displayed in the user interface and therefore must not
         * be an empty string or a string only consisting of white spaces.
         */
        const std::string & get_name() const { return name; }
        std::string & get_mutable_name() { return name; }
        void set_name(const std::string & value) { this->name = value; }

        /**
         * The range enclosing this symbol not including leading/trailing whitespace but everything
         * else like comments. This information is typically used to determine if the clients cursor
         * is inside the symbol to reveal in the symbol in the UI.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The range that should be selected and revealed when this symbol is being picked, e.g. the
         * name of a function. Must be contained by the `range`.
         */
        const PurpleRange & get_selection_range() const { return selection_range; }
        PurpleRange & get_mutable_selection_range() { return selection_range; }
        void set_selection_range(const PurpleRange & value) { this->selection_range = value; }

        /**
         * Tags for this document symbol.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }
    };
}
