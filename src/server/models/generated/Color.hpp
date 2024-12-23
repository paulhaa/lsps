//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Color.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Represents a color in RGBA space.
     *
     * The actual color value for this color range.
     *
     * The color information to request presentations for.
     */

    using nlohmann::json;

    /**
     * Represents a color in RGBA space.
     *
     * The actual color value for this color range.
     *
     * The color information to request presentations for.
     */
    class Color {
        public:
        Color() = default;
        virtual ~Color() = default;

        private:
        double alpha;
        double blue;
        double green;
        double red;

        public:
        /**
         * The alpha component of this color in the range [0-1].
         */
        const double & get_alpha() const { return alpha; }
        double & get_mutable_alpha() { return alpha; }
        void set_alpha(const double & value) { this->alpha = value; }

        /**
         * The blue component of this color in the range [0-1].
         */
        const double & get_blue() const { return blue; }
        double & get_mutable_blue() { return blue; }
        void set_blue(const double & value) { this->blue = value; }

        /**
         * The green component of this color in the range [0-1].
         */
        const double & get_green() const { return green; }
        double & get_mutable_green() { return green; }
        void set_green(const double & value) { this->green = value; }

        /**
         * The red component of this color in the range [0-1].
         */
        const double & get_red() const { return red; }
        double & get_mutable_red() { return red; }
        void set_red(const double & value) { this->red = value; }
    };
}
