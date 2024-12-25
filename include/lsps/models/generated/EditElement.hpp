//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     EditElement.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     *
     * A special text edit with an additional change annotation.
     */

    using nlohmann::json;

    /**
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     *
     * A special text edit with an additional change annotation.
     */
    class EditElement {
        public:
        EditElement() = default;
        virtual ~EditElement() = default;

        private:
        std::string new_text;
        PurpleRange range;
        std::optional<std::string> annotation_id;

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

        /**
         * The actual annotation identifier.
         */
        std::optional<std::string> get_annotation_id() const { return annotation_id; }
        void set_annotation_id(std::optional<std::string> value) { this->annotation_id = value; }
    };
}
}
