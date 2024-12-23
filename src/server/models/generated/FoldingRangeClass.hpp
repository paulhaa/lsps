//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FoldingRangeClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Represents a folding range. To be valid, start and end line must be bigger than zero and
     * smaller than the number of lines in the document. Clients are free to ignore invalid
     * ranges.
     */

    using nlohmann::json;

    /**
     * Represents a folding range. To be valid, start and end line must be bigger than zero and
     * smaller than the number of lines in the document. Clients are free to ignore invalid
     * ranges.
     */
    class FoldingRangeClass {
        public:
        FoldingRangeClass() = default;
        virtual ~FoldingRangeClass() = default;

        private:
        std::optional<std::string> collapsed_text;
        std::optional<int64_t> end_character;
        int64_t end_line;
        std::optional<std::string> kind;
        std::optional<int64_t> start_character;
        int64_t start_line;

        public:
        /**
         * The text that the client should show when the specified range is collapsed. If not
         * defined or not supported by the client, a default will be chosen by the client.
         */
        std::optional<std::string> get_collapsed_text() const { return collapsed_text; }
        void set_collapsed_text(std::optional<std::string> value) { this->collapsed_text = value; }

        /**
         * The zero-based character offset before the folded range ends. If not defined, defaults to
         * the length of the end line.
         */
        std::optional<int64_t> get_end_character() const { return end_character; }
        void set_end_character(std::optional<int64_t> value) { this->end_character = value; }

        /**
         * The zero-based end line of the range to fold. The folded area ends with the line's last
         * character. To be valid, the end must be zero or larger and smaller than the number of
         * lines in the document.
         */
        const int64_t & get_end_line() const { return end_line; }
        int64_t & get_mutable_end_line() { return end_line; }
        void set_end_line(const int64_t & value) { this->end_line = value; }

        /**
         * Describes the kind of the folding range such as `comment` or `region`. The kind is used
         * to categorize folding ranges and used by commands like 'Fold all comments'. See
         * [FoldingRangeKind](#FoldingRangeKind) for an enumeration of standardized kinds.
         */
        std::optional<std::string> get_kind() const { return kind; }
        void set_kind(std::optional<std::string> value) { this->kind = value; }

        /**
         * The zero-based character offset from where the folded range starts. If not defined,
         * defaults to the length of the start line.
         */
        std::optional<int64_t> get_start_character() const { return start_character; }
        void set_start_character(std::optional<int64_t> value) { this->start_character = value; }

        /**
         * The zero-based start line of the range to fold. The folded area starts after the line's
         * last character. To be valid, the end must be zero or larger and smaller than the number
         * of lines in the document.
         */
        const int64_t & get_start_line() const { return start_line; }
        int64_t & get_mutable_start_line() { return start_line; }
        void set_start_line(const int64_t & value) { this->start_line = value; }
    };
}
