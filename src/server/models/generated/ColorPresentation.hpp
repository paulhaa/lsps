//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ColorPresentation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextEdit.hpp"

namespace lsps {
    using nlohmann::json;

    class ColorPresentation {
        public:
        ColorPresentation() = default;
        virtual ~ColorPresentation() = default;

        private:
        std::optional<std::vector<TextEdit>> additional_text_edits;
        std::string label;
        std::optional<TextEdit> text_edit;

        public:
        /**
         * An optional array of additional [text edits](#TextEdit) that are applied when selecting
         * this color presentation. Edits must not overlap with the main
         * [edit](#ColorPresentation.textEdit) nor with themselves.
         */
        std::optional<std::vector<TextEdit>> get_additional_text_edits() const { return additional_text_edits; }
        void set_additional_text_edits(std::optional<std::vector<TextEdit>> value) { this->additional_text_edits = value; }

        /**
         * The label of this color presentation. It will be shown on the color picker header. By
         * default this is also the text that is inserted when selecting this color presentation.
         */
        const std::string & get_label() const { return label; }
        std::string & get_mutable_label() { return label; }
        void set_label(const std::string & value) { this->label = value; }

        /**
         * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
         * the color. When omitted the [label](#ColorPresentation.label) is used.
         */
        std::optional<TextEdit> get_text_edit() const { return text_edit; }
        void set_text_edit(std::optional<TextEdit> value) { this->text_edit = value; }
    };
}
