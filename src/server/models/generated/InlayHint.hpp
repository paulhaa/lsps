//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHint.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "InlayHintLabel.hpp"
#include "InlayHintLabelPart.hpp"
#include "Position.hpp"
#include "TextEdit.hpp"
#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"

namespace lsps {
namespace models {
    /**
     * Inlay hint information.
     */

    using nlohmann::json;

    /**
     * Inlay hint information.
     */
    class InlayHint {
        public:
        InlayHint() = default;
        virtual ~InlayHint() = default;

        private:
        LspAny data;
        std::optional<double> kind;
        InlayHintLabel label;
        std::optional<bool> padding_left;
        std::optional<bool> padding_right;
        Position position;
        std::optional<std::vector<TextEdit>> text_edits;
        std::optional<Documentation> tooltip;

        public:
        /**
         * A data entry field that is preserved on an inlay hint between a `textDocument/inlayHint`
         * and a `inlayHint/resolve` request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The kind of this hint. Can be omitted in which case the client should fall back to a
         * reasonable default.
         */
        std::optional<double> get_kind() const { return kind; }
        void set_kind(std::optional<double> value) { this->kind = value; }

        /**
         * The label of this hint. A human readable string or an array of InlayHintLabelPart label
         * parts.
         *
         * *Note* that neither the string nor the label part can be empty.
         */
        const InlayHintLabel & get_label() const { return label; }
        InlayHintLabel & get_mutable_label() { return label; }
        void set_label(const InlayHintLabel & value) { this->label = value; }

        /**
         * Render padding before the hint.
         *
         * Note: Padding should use the editor's background color, not the background color of the
         * hint itself. That means padding can be used to visually align/separate an inlay hint.
         */
        std::optional<bool> get_padding_left() const { return padding_left; }
        void set_padding_left(std::optional<bool> value) { this->padding_left = value; }

        /**
         * Render padding after the hint.
         *
         * Note: Padding should use the editor's background color, not the background color of the
         * hint itself. That means padding can be used to visually align/separate an inlay hint.
         */
        std::optional<bool> get_padding_right() const { return padding_right; }
        void set_padding_right(std::optional<bool> value) { this->padding_right = value; }

        /**
         * The position of this hint.
         *
         * If multiple hints have the same position, they will be shown in the order they appear in
         * the response.
         */
        const Position & get_position() const { return position; }
        Position & get_mutable_position() { return position; }
        void set_position(const Position & value) { this->position = value; }

        /**
         * Optional text edits that are performed when accepting this inlay hint.
         *
         * *Note* that edits are expected to change the document so that the inlay hint (or its
         * nearest variant) is now part of the document and the inlay hint itself is now obsolete.
         *
         * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
         * property late using the resolve request.
         */
        std::optional<std::vector<TextEdit>> get_text_edits() const { return text_edits; }
        void set_text_edits(std::optional<std::vector<TextEdit>> value) { this->text_edits = value; }

        /**
         * The tooltip text when you hover over this item.
         *
         * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
         * property late using the resolve request.
         */
        std::optional<Documentation> get_tooltip() const { return tooltip; }
        void set_tooltip(std::optional<Documentation> value) { this->tooltip = value; }
    };
}
}
