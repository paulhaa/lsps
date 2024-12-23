//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionListClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ItemDefaults.hpp"
#include "CompletionItem.hpp"

namespace lsps {
    /**
     * Represents a collection of [completion items](#CompletionItem) to be presented in the
     * editor.
     */

    using nlohmann::json;

    /**
     * Represents a collection of [completion items](#CompletionItem) to be presented in the
     * editor.
     */
    class CompletionListClass {
        public:
        CompletionListClass() = default;
        virtual ~CompletionListClass() = default;

        private:
        bool is_incomplete;
        std::optional<ItemDefaults> item_defaults;
        std::vector<CompletionItem> items;

        public:
        /**
         * This list is not complete. Further typing should result in recomputing this list.
         *
         * Recomputed lists have all their items replaced (not appended) in the incomplete
         * completion sessions.
         */
        const bool & get_is_incomplete() const { return is_incomplete; }
        bool & get_mutable_is_incomplete() { return is_incomplete; }
        void set_is_incomplete(const bool & value) { this->is_incomplete = value; }

        /**
         * In many cases the items of an actual completion result share the same value for
         * properties like `commitCharacters` or the range of a text edit. A completion list can
         * therefore define item defaults which will be used if a completion item itself doesn't
         * specify the value.
         *
         * If a completion list specifies a default value and a completion item also specifies a
         * corresponding value the one from the item is used.
         *
         * Servers are only allowed to return default values if the client signals support for this
         * via the `completionList.itemDefaults` capability.
         */
        std::optional<ItemDefaults> get_item_defaults() const { return item_defaults; }
        void set_item_defaults(std::optional<ItemDefaults> value) { this->item_defaults = value; }

        /**
         * The completion items.
         */
        const std::vector<CompletionItem> & get_items() const { return items; }
        std::vector<CompletionItem> & get_mutable_items() { return items; }
        void set_items(const std::vector<CompletionItem> & value) { this->items = value; }
    };
}
