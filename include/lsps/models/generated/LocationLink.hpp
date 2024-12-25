//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LocationLink.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class LocationLink {
        public:
        LocationLink() = default;
        virtual ~LocationLink() = default;

        private:
        std::optional<PurpleRange> origin_selection_range;
        PurpleRange target_range;
        PurpleRange target_selection_range;
        std::string target_uri;

        public:
        /**
         * Span of the origin of this link.
         *
         * Used as the underlined span for mouse interaction. Defaults to the word range at the
         * mouse position.
         */
        std::optional<PurpleRange> get_origin_selection_range() const { return origin_selection_range; }
        void set_origin_selection_range(std::optional<PurpleRange> value) { this->origin_selection_range = value; }

        /**
         * The full target range of this link. If the target for example is a symbol then target
         * range is the range enclosing this symbol not including leading/trailing whitespace but
         * everything else like comments. This information is typically used to highlight the range
         * in the editor.
         */
        const PurpleRange & get_target_range() const { return target_range; }
        PurpleRange & get_mutable_target_range() { return target_range; }
        void set_target_range(const PurpleRange & value) { this->target_range = value; }

        /**
         * The range that should be selected and revealed when this link is being followed, e.g the
         * name of a function. Must be contained by the `targetRange`. See also
         * `DocumentSymbol#range`
         */
        const PurpleRange & get_target_selection_range() const { return target_selection_range; }
        PurpleRange & get_mutable_target_selection_range() { return target_selection_range; }
        void set_target_selection_range(const PurpleRange & value) { this->target_selection_range = value; }

        /**
         * The target resource identifier of this link.
         */
        const std::string & get_target_uri() const { return target_uri; }
        std::string & get_mutable_target_uri() { return target_uri; }
        void set_target_uri(const std::string & value) { this->target_uri = value; }
    };
}
}
