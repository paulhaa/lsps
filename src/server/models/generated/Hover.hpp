//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Hover.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ContentsUnion.hpp"
#include "ContentsMarkupContent.hpp"
#include "MarkedString.hpp"
#include "MarkedStringClass.hpp"
#include "PurpleRange.hpp"

namespace lsps {
    /**
     * The result of a hover request.
     */

    using nlohmann::json;

    /**
     * The result of a hover request.
     */
    class Hover {
        public:
        Hover() = default;
        virtual ~Hover() = default;

        private:
        ContentsUnion contents;
        std::optional<PurpleRange> range;

        public:
        /**
         * The hover's content
         */
        const ContentsUnion & get_contents() const { return contents; }
        ContentsUnion & get_mutable_contents() { return contents; }
        void set_contents(const ContentsUnion & value) { this->contents = value; }

        /**
         * An optional range is a range inside a text document that is used to visualize a hover,
         * e.g. by changing the background color.
         */
        std::optional<PurpleRange> get_range() const { return range; }
        void set_range(std::optional<PurpleRange> value) { this->range = value; }
    };
}
