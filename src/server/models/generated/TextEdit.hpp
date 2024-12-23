//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextEdit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     */

    using nlohmann::json;

    /**
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     */
    class TextEdit {
        public:
        TextEdit() = default;
        virtual ~TextEdit() = default;

        private:
        std::string new_text;
        PurpleRange range;

        public:
        /**
         * The string to be inserted. For delete operations use an empty string.
         */
        const std::string & get_new_text() const { return new_text; }
        std::string & get_mutable_new_text() { return new_text; }
        void set_new_text(const std::string & value) { this->new_text = value; }

        /**
         * The range of the text document to be manipulated. To insert text into a document create a
         * range where start === end.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
