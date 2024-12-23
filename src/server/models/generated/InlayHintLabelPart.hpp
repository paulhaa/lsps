//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintLabelPart.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Command.hpp"
#include "LocationClass.hpp"
#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"

namespace lsps {
    /**
     * An inlay hint label part allows for interactive and composite labels of inlay hints.
     */

    using nlohmann::json;

    /**
     * An inlay hint label part allows for interactive and composite labels of inlay hints.
     */
    class InlayHintLabelPart {
        public:
        InlayHintLabelPart() = default;
        virtual ~InlayHintLabelPart() = default;

        private:
        std::optional<Command> command;
        std::optional<LocationClass> location;
        std::optional<Documentation> tooltip;
        std::string value;

        public:
        /**
         * An optional command for this label part.
         *
         * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
         * property late using the resolve request.
         */
        std::optional<Command> get_command() const { return command; }
        void set_command(std::optional<Command> value) { this->command = value; }

        /**
         * An optional source code location that represents this label part.
         *
         * The editor will use this location for the hover and for code navigation features: This
         * part will become a clickable link that resolves to the definition of the symbol at the
         * given location (not necessarily the location itself), it shows the hover that shows at
         * the given location, and it shows a context menu with further code navigation commands.
         *
         * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
         * property late using the resolve request.
         */
        std::optional<LocationClass> get_location() const { return location; }
        void set_location(std::optional<LocationClass> value) { this->location = value; }

        /**
         * The tooltip text when you hover over this label part. Depending on the client capability
         * `inlayHint.resolveSupport` clients might resolve this property late using the resolve
         * request.
         */
        std::optional<Documentation> get_tooltip() const { return tooltip; }
        void set_tooltip(std::optional<Documentation> value) { this->tooltip = value; }

        /**
         * The value of this label part.
         */
        const std::string & get_value() const { return value; }
        std::string & get_mutable_value() { return value; }
        void set_value(const std::string & value) { this->value = value; }
    };
}
