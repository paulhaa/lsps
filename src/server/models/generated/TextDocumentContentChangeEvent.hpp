//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentContentChangeEvent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * An event describing a change to a text document. If only a text is provided it is
     * considered to be the full content of the document.
     */

    using nlohmann::json;

    /**
     * An event describing a change to a text document. If only a text is provided it is
     * considered to be the full content of the document.
     */
    class TextDocumentContentChangeEvent {
        public:
        TextDocumentContentChangeEvent() = default;
        virtual ~TextDocumentContentChangeEvent() = default;

        private:
        std::optional<PurpleRange> range;
        std::optional<int64_t> range_length;
        std::string text;

        public:
        /**
         * The range of the document that changed.
         */
        std::optional<PurpleRange> get_range() const { return range; }
        void set_range(std::optional<PurpleRange> value) { this->range = value; }

        /**
         * The optional length of the range that got replaced.
         */
        std::optional<int64_t> get_range_length() const { return range_length; }
        void set_range_length(std::optional<int64_t> value) { this->range_length = value; }

        /**
         * The new text for the provided range.
         *
         * The new text of the whole document.
         */
        const std::string & get_text() const { return text; }
        std::string & get_mutable_text() { return text; }
        void set_text(const std::string & value) { this->text = value; }
    };
}
