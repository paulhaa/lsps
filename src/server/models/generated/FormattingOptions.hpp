//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FormattingOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The format options.
     *
     * Value-object describing what options formatting should use.
     *
     * The formatting options.
     *
     * The format options
     */

    using nlohmann::json;

    /**
     * The format options.
     *
     * Value-object describing what options formatting should use.
     *
     * The formatting options.
     *
     * The format options
     */
    class FormattingOptions {
        public:
        FormattingOptions() = default;
        virtual ~FormattingOptions() = default;

        private:
        std::optional<bool> insert_final_newline;
        bool insert_spaces;
        int64_t tab_size;
        std::optional<bool> trim_final_newlines;
        std::optional<bool> trim_trailing_whitespace;

        public:
        /**
         * Insert a newline character at the end of the file if one does not exist.
         */
        std::optional<bool> get_insert_final_newline() const { return insert_final_newline; }
        void set_insert_final_newline(std::optional<bool> value) { this->insert_final_newline = value; }

        /**
         * Prefer spaces over tabs.
         */
        const bool & get_insert_spaces() const { return insert_spaces; }
        bool & get_mutable_insert_spaces() { return insert_spaces; }
        void set_insert_spaces(const bool & value) { this->insert_spaces = value; }

        /**
         * Size of a tab in spaces.
         */
        const int64_t & get_tab_size() const { return tab_size; }
        int64_t & get_mutable_tab_size() { return tab_size; }
        void set_tab_size(const int64_t & value) { this->tab_size = value; }

        /**
         * Trim all newlines after the final newline at the end of the file.
         */
        std::optional<bool> get_trim_final_newlines() const { return trim_final_newlines; }
        void set_trim_final_newlines(std::optional<bool> value) { this->trim_final_newlines = value; }

        /**
         * Trim trailing whitespace on a line.
         */
        std::optional<bool> get_trim_trailing_whitespace() const { return trim_trailing_whitespace; }
        void set_trim_trailing_whitespace(std::optional<bool> value) { this->trim_trailing_whitespace = value; }
    };
}
