//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolLocation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * The location of this symbol. Whether a server is allowed to return a location without a
     * range depends on the client capability `workspace.symbol.resolveSupport`.
     *
     * See also `SymbolInformation.location`.
     *
     * The location of this related diagnostic information.
     *
     * An optional source code location that represents this label part.
     *
     * The editor will use this location for the hover and for code navigation features: This
     * part will become a clickable link that resolves to the definition of the symbol at the
     * given location (not necessarily the location itself), it shows the hover that shows at
     * the given location, and it shows a context menu with further code navigation commands.
     *
     * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
     * property late using the resolve request.
     *
     * The location of this symbol. The location's range is used by a tool to reveal the
     * location in the editor. If the symbol is selected in the tool the range's start
     * information is used to position the cursor. So the range usually spans more then the
     * actual symbol's name and does normally include things like visibility modifiers.
     *
     * The range doesn't have to denote a node range in the sense of an abstract syntax tree. It
     * can therefore not be used to re-construct a hierarchy of the symbols.
     */

    using nlohmann::json;

    /**
     * The location of this symbol. Whether a server is allowed to return a location without a
     * range depends on the client capability `workspace.symbol.resolveSupport`.
     *
     * See also `SymbolInformation.location`.
     *
     * The location of this related diagnostic information.
     *
     * An optional source code location that represents this label part.
     *
     * The editor will use this location for the hover and for code navigation features: This
     * part will become a clickable link that resolves to the definition of the symbol at the
     * given location (not necessarily the location itself), it shows the hover that shows at
     * the given location, and it shows a context menu with further code navigation commands.
     *
     * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
     * property late using the resolve request.
     *
     * The location of this symbol. The location's range is used by a tool to reveal the
     * location in the editor. If the symbol is selected in the tool the range's start
     * information is used to position the cursor. So the range usually spans more then the
     * actual symbol's name and does normally include things like visibility modifiers.
     *
     * The range doesn't have to denote a node range in the sense of an abstract syntax tree. It
     * can therefore not be used to re-construct a hierarchy of the symbols.
     */
    class WorkspaceSymbolLocation {
        public:
        WorkspaceSymbolLocation() = default;
        virtual ~WorkspaceSymbolLocation() = default;

        private:
        std::optional<PurpleRange> range;
        std::string uri;

        public:
        std::optional<PurpleRange> get_range() const { return range; }
        void set_range(std::optional<PurpleRange> value) { this->range = value; }

        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
