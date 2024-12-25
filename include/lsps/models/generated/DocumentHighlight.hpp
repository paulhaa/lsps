//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentHighlight.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * A document highlight is a range inside a text document which deserves special attention.
     * Usually a document highlight is visualized by changing the background color of its range.
     */

    using nlohmann::json;

    /**
     * A document highlight is a range inside a text document which deserves special attention.
     * Usually a document highlight is visualized by changing the background color of its range.
     */
    class DocumentHighlight {
        public:
        DocumentHighlight() = default;
        virtual ~DocumentHighlight() = default;

        private:
        std::optional<double> kind;
        PurpleRange range;

        public:
        /**
         * The highlight kind, default is DocumentHighlightKind.Text.
         */
        std::optional<double> get_kind() const { return kind; }
        void set_kind(std::optional<double> value) { this->kind = value; }

        /**
         * The range this highlight applies to.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
}
