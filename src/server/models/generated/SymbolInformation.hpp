//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SymbolInformation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LocationClass.hpp"

namespace lsps {
    /**
     * Represents information about programming constructs like variables, classes, interfaces
     * etc.
     */

    using nlohmann::json;

    /**
     * Represents information about programming constructs like variables, classes, interfaces
     * etc.
     */
    class SymbolInformation {
        public:
        SymbolInformation() = default;
        virtual ~SymbolInformation() = default;

        private:
        std::optional<std::string> container_name;
        std::optional<bool> deprecated;
        double kind;
        LocationClass location;
        std::string name;
        std::optional<std::vector<double>> tags;

        public:
        /**
         * The name of the symbol containing this symbol. This information is for user interface
         * purposes (e.g. to render a qualifier in the user interface if necessary). It can't be
         * used to re-infer a hierarchy for the document symbols.
         */
        std::optional<std::string> get_container_name() const { return container_name; }
        void set_container_name(std::optional<std::string> value) { this->container_name = value; }

        /**
         * Indicates if this symbol is deprecated.
         */
        std::optional<bool> get_deprecated() const { return deprecated; }
        void set_deprecated(std::optional<bool> value) { this->deprecated = value; }

        /**
         * The kind of this symbol.
         */
        const double & get_kind() const { return kind; }
        double & get_mutable_kind() { return kind; }
        void set_kind(const double & value) { this->kind = value; }

        /**
         * The location of this symbol. The location's range is used by a tool to reveal the
         * location in the editor. If the symbol is selected in the tool the range's start
         * information is used to position the cursor. So the range usually spans more then the
         * actual symbol's name and does normally include things like visibility modifiers.
         *
         * The range doesn't have to denote a node range in the sense of an abstract syntax tree. It
         * can therefore not be used to re-construct a hierarchy of the symbols.
         */
        const LocationClass & get_location() const { return location; }
        LocationClass & get_mutable_location() { return location; }
        void set_location(const LocationClass & value) { this->location = value; }

        /**
         * The name of this symbol.
         */
        const std::string & get_name() const { return name; }
        std::string & get_mutable_name() { return name; }
        void set_name(const std::string & value) { this->name = value; }

        /**
         * Tags for this symbol.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }
    };
}
