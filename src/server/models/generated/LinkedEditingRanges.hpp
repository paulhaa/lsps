//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LinkedEditingRanges.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    using nlohmann::json;

    class LinkedEditingRanges {
        public:
        LinkedEditingRanges() = default;
        virtual ~LinkedEditingRanges() = default;

        private:
        std::vector<PurpleRange> ranges;
        std::optional<std::string> word_pattern;

        public:
        /**
         * A list of ranges that can be renamed together. The ranges must have identical length and
         * contain identical text content. The ranges cannot overlap.
         */
        const std::vector<PurpleRange> & get_ranges() const { return ranges; }
        std::vector<PurpleRange> & get_mutable_ranges() { return ranges; }
        void set_ranges(const std::vector<PurpleRange> & value) { this->ranges = value; }

        /**
         * An optional word pattern (regular expression) that describes valid contents for the given
         * ranges. If no pattern is provided, the client configuration's word pattern will be used.
         */
        std::optional<std::string> get_word_pattern() const { return word_pattern; }
        void set_word_pattern(std::optional<std::string> value) { this->word_pattern = value; }
    };
}
