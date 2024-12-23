//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValue.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * Inline value information can be provided by different means:
     * - directly as a text value (class InlineValueText).
     * - as a name to use for a variable lookup (class InlineValueVariableLookup)
     * - as an evaluatable expression (class InlineValueEvaluatableExpression) The InlineValue
     * types combines all inline value types into one type.
     *
     * Provide inline value as text.
     *
     * Provide inline value through a variable lookup.
     *
     * If only a range is specified, the variable name will be extracted from the underlying
     * document.
     *
     * An optional variable name can be used to override the extracted name.
     *
     * Provide an inline value through an expression evaluation.
     *
     * If only a range is specified, the expression will be extracted from the underlying
     * document.
     *
     * An optional expression can be used to override the extracted expression.
     */

    using nlohmann::json;

    /**
     * Inline value information can be provided by different means:
     * - directly as a text value (class InlineValueText).
     * - as a name to use for a variable lookup (class InlineValueVariableLookup)
     * - as an evaluatable expression (class InlineValueEvaluatableExpression) The InlineValue
     * types combines all inline value types into one type.
     *
     * Provide inline value as text.
     *
     * Provide inline value through a variable lookup.
     *
     * If only a range is specified, the variable name will be extracted from the underlying
     * document.
     *
     * An optional variable name can be used to override the extracted name.
     *
     * Provide an inline value through an expression evaluation.
     *
     * If only a range is specified, the expression will be extracted from the underlying
     * document.
     *
     * An optional expression can be used to override the extracted expression.
     */
    class InlineValue {
        public:
        InlineValue() = default;
        virtual ~InlineValue() = default;

        private:
        PurpleRange range;
        std::optional<std::string> text;
        std::optional<bool> case_sensitive_lookup;
        std::optional<std::string> variable_name;
        std::optional<std::string> expression;

        public:
        /**
         * The document range for which the inline value applies.
         *
         * The document range for which the inline value applies. The range is used to extract the
         * variable name from the underlying document.
         *
         * The document range for which the inline value applies. The range is used to extract the
         * evaluatable expression from the underlying document.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The text of the inline value.
         */
        std::optional<std::string> get_text() const { return text; }
        void set_text(std::optional<std::string> value) { this->text = value; }

        /**
         * How to perform the lookup.
         */
        std::optional<bool> get_case_sensitive_lookup() const { return case_sensitive_lookup; }
        void set_case_sensitive_lookup(std::optional<bool> value) { this->case_sensitive_lookup = value; }

        /**
         * If specified the name of the variable to look up.
         */
        std::optional<std::string> get_variable_name() const { return variable_name; }
        void set_variable_name(std::optional<std::string> value) { this->variable_name = value; }

        /**
         * If specified the expression overrides the extracted expression.
         */
        std::optional<std::string> get_expression() const { return expression; }
        void set_expression(std::optional<std::string> value) { this->expression = value; }
    };
}
