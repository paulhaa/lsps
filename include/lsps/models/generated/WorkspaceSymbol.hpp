//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbol.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "WorkspaceSymbolLocation.hpp"

namespace lsps {
namespace models {
    /**
     * A special workspace symbol that supports locations without a range
     */

    using nlohmann::json;

    /**
     * A special workspace symbol that supports locations without a range
     */
    class WorkspaceSymbol {
        public:
        WorkspaceSymbol() = default;
        virtual ~WorkspaceSymbol() = default;

        private:
        std::optional<std::string> container_name;
        LspAny data;
        double kind;
        WorkspaceSymbolLocation location;
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
         * A data entry field that is preserved on a workspace symbol between a workspace symbol
         * request and a workspace symbol resolve request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The kind of this symbol.
         */
        const double & get_kind() const { return kind; }
        double & get_mutable_kind() { return kind; }
        void set_kind(const double & value) { this->kind = value; }

        /**
         * The location of this symbol. Whether a server is allowed to return a location without a
         * range depends on the client capability `workspace.symbol.resolveSupport`.
         *
         * See also `SymbolInformation.location`.
         */
        const WorkspaceSymbolLocation & get_location() const { return location; }
        WorkspaceSymbolLocation & get_mutable_location() { return location; }
        void set_location(const WorkspaceSymbolLocation & value) { this->location = value; }

        /**
         * The name of this symbol.
         */
        const std::string & get_name() const { return name; }
        std::string & get_mutable_name() { return name; }
        void set_name(const std::string & value) { this->name = value; }

        /**
         * Tags for this completion item.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }
    };
}
}
