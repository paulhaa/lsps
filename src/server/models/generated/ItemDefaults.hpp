//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ItemDefaults.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "EditRangeClass.hpp"

namespace lsps {
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

    using nlohmann::json;

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
    class ItemDefaults {
        public:
        ItemDefaults() = default;
        virtual ~ItemDefaults() = default;

        private:
        std::optional<std::vector<std::string>> commit_characters;
        LspAny data;
        std::optional<EditRangeClass> edit_range;
        std::optional<double> insert_text_format;
        std::optional<double> insert_text_mode;

        public:
        /**
         * A default commit character set.
         */
        std::optional<std::vector<std::string>> get_commit_characters() const { return commit_characters; }
        void set_commit_characters(std::optional<std::vector<std::string>> value) { this->commit_characters = value; }

        /**
         * A default data value.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * A default edit range
         */
        std::optional<EditRangeClass> get_edit_range() const { return edit_range; }
        void set_edit_range(std::optional<EditRangeClass> value) { this->edit_range = value; }

        /**
         * A default insert text format
         */
        std::optional<double> get_insert_text_format() const { return insert_text_format; }
        void set_insert_text_format(std::optional<double> value) { this->insert_text_format = value; }

        /**
         * A default insert text mode
         */
        std::optional<double> get_insert_text_mode() const { return insert_text_mode; }
        void set_insert_text_mode(std::optional<double> value) { this->insert_text_mode = value; }
    };
}
