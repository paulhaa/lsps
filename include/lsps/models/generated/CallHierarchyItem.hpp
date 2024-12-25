//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CallHierarchyItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * The item that makes the call.
     *
     * The item that is called.
     */

    using nlohmann::json;

    /**
     * The item that makes the call.
     *
     * The item that is called.
     */
    class CallHierarchyItem {
        public:
        CallHierarchyItem() = default;
        virtual ~CallHierarchyItem() = default;

        private:
        LspAny data;
        std::optional<std::string> detail;
        double kind;
        std::string name;
        PurpleRange range;
        PurpleRange selection_range;
        std::optional<std::vector<double>> tags;
        std::string uri;

        public:
        /**
         * A data entry field that is preserved between a call hierarchy prepare and incoming calls
         * or outgoing calls requests.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * More detail for this item, e.g. the signature of a function.
         */
        std::optional<std::string> get_detail() const { return detail; }
        void set_detail(std::optional<std::string> value) { this->detail = value; }

        /**
         * The kind of this item.
         */
        const double & get_kind() const { return kind; }
        double & get_mutable_kind() { return kind; }
        void set_kind(const double & value) { this->kind = value; }

        /**
         * The name of this item.
         */
        const std::string & get_name() const { return name; }
        std::string & get_mutable_name() { return name; }
        void set_name(const std::string & value) { this->name = value; }

        /**
         * The range enclosing this symbol not including leading/trailing whitespace but everything
         * else, e.g. comments and code.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The range that should be selected and revealed when this symbol is being picked, e.g. the
         * name of a function. Must be contained by the [`range`](#CallHierarchyItem.range).
         */
        const PurpleRange & get_selection_range() const { return selection_range; }
        PurpleRange & get_mutable_selection_range() { return selection_range; }
        void set_selection_range(const PurpleRange & value) { this->selection_range = value; }

        /**
         * Tags for this item.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }

        /**
         * The resource identifier of this item.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
}
