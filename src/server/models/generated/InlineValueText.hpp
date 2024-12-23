//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueText.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * Provide inline value as text.
     */

    using nlohmann::json;

    /**
     * Provide inline value as text.
     */
    class InlineValueText {
        public:
        InlineValueText() = default;
        virtual ~InlineValueText() = default;

        private:
        PurpleRange range;
        std::string text;

        public:
        /**
         * The document range for which the inline value applies.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The text of the inline value.
         */
        const std::string & get_text() const { return text; }
        std::string & get_mutable_text() { return text; }
        void set_text(const std::string & value) { this->text = value; }
    };
}
