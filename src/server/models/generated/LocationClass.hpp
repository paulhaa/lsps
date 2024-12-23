//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LocationClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
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
    class LocationClass {
        public:
        LocationClass() = default;
        virtual ~LocationClass() = default;

        private:
        PurpleRange range;
        std::string uri;

        public:
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
