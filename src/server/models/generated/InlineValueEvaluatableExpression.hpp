//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueEvaluatableExpression.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * Provide an inline value through an expression evaluation.
     *
     * If only a range is specified, the expression will be extracted from the underlying
     * document.
     *
     * An optional expression can be used to override the extracted expression.
     */

    using nlohmann::json;

    /**
     * Provide an inline value through an expression evaluation.
     *
     * If only a range is specified, the expression will be extracted from the underlying
     * document.
     *
     * An optional expression can be used to override the extracted expression.
     */
    class InlineValueEvaluatableExpression {
        public:
        InlineValueEvaluatableExpression() = default;
        virtual ~InlineValueEvaluatableExpression() = default;

        private:
        std::optional<std::string> expression;
        PurpleRange range;

        public:
        /**
         * If specified the expression overrides the extracted expression.
         */
        std::optional<std::string> get_expression() const { return expression; }
        void set_expression(std::optional<std::string> value) { this->expression = value; }

        /**
         * The document range for which the inline value applies. The range is used to extract the
         * evaluatable expression from the underlying document.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
