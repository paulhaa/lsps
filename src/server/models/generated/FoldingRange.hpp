//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FoldingRange.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Specific options for the folding range.
     */

    using nlohmann::json;

    /**
     * Specific options for the folding range.
     */
    class FoldingRange {
        public:
        FoldingRange() = default;
        virtual ~FoldingRange() = default;

        private:
        std::optional<bool> collapsed_text;

        public:
        /**
         * If set, the client signals that it supports setting collapsedText on folding ranges to
         * display custom labels instead of the default text.
         */
        std::optional<bool> get_collapsed_text() const { return collapsed_text; }
        void set_collapsed_text(std::optional<bool> value) { this->collapsed_text = value; }
    };
}
