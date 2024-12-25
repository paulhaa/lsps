//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SelectionRange.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * The parent selection range containing this range. Therefore `parent.range` must contain
     * `this.range`.
     */

    using nlohmann::json;

    /**
     * The parent selection range containing this range. Therefore `parent.range` must contain
     * `this.range`.
     */
    class SelectionRange {
        public:
        SelectionRange() = default;
        virtual ~SelectionRange() = default;

        private:
        std::shared_ptr<SelectionRange> parent;
        PurpleRange range;

        public:
        /**
         * The parent selection range containing this range. Therefore `parent.range` must contain
         * `this.range`.
         */
        std::shared_ptr<SelectionRange> get_parent() const { return parent; }
        void set_parent(std::shared_ptr<SelectionRange> value) { this->parent = value; }

        /**
         * The [range](#Range) of this selection range.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
}
