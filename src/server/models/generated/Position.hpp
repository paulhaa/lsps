//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Position.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The range's end position.
     *
     * The range's start position.
     *
     * The position inside the text document.
     *
     * The position around which the on type formatting should happen. This is not necessarily
     * the exact position where the character denoted by the property `ch` got typed.
     *
     * The position of this hint.
     *
     * If multiple hints have the same position, they will be shown in the order they appear in
     * the response.
     */

    using nlohmann::json;

    /**
     * The range's end position.
     *
     * The range's start position.
     *
     * The position inside the text document.
     *
     * The position around which the on type formatting should happen. This is not necessarily
     * the exact position where the character denoted by the property `ch` got typed.
     *
     * The position of this hint.
     *
     * If multiple hints have the same position, they will be shown in the order they appear in
     * the response.
     */
    class Position {
        public:
        Position() = default;
        virtual ~Position() = default;

        private:
        int64_t character;
        int64_t line;

        public:
        /**
         * Character offset on a line in a document (zero-based). The meaning of this offset is
         * determined by the negotiated `PositionEncodingKind`.
         *
         * If the character value is greater than the line length it defaults back to the line
         * length.
         */
        const int64_t & get_character() const { return character; }
        int64_t & get_mutable_character() { return character; }
        void set_character(const int64_t & value) { this->character = value; }

        /**
         * Line position in a document (zero-based).
         */
        const int64_t & get_line() const { return line; }
        int64_t & get_mutable_line() { return line; }
        void set_line(const int64_t & value) { this->line = value; }
    };
}
}
