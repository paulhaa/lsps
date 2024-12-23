//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ColorInformation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Color.hpp"
#include "PurpleRange.hpp"

namespace lsps {
    using nlohmann::json;

    class ColorInformation {
        public:
        ColorInformation() = default;
        virtual ~ColorInformation() = default;

        private:
        Color color;
        PurpleRange range;

        public:
        /**
         * The actual color value for this color range.
         */
        const Color & get_color() const { return color; }
        Color & get_mutable_color() { return color; }
        void set_color(const Color & value) { this->color = value; }

        /**
         * The range in the document where this color appears.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
