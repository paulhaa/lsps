//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InsertReplaceEdit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * A special text edit to provide an insert and a replace operation.
     */

    using nlohmann::json;

    /**
     * A special text edit to provide an insert and a replace operation.
     */
    class InsertReplaceEdit {
        public:
        InsertReplaceEdit() = default;
        virtual ~InsertReplaceEdit() = default;

        private:
        PurpleRange insert;
        std::string new_text;
        PurpleRange replace;

        public:
        /**
         * The range if the insert is requested
         */
        const PurpleRange & get_insert() const { return insert; }
        PurpleRange & get_mutable_insert() { return insert; }
        void set_insert(const PurpleRange & value) { this->insert = value; }

        /**
         * The string to be inserted.
         */
        const std::string & get_new_text() const { return new_text; }
        std::string & get_mutable_new_text() { return new_text; }
        void set_new_text(const std::string & value) { this->new_text = value; }

        /**
         * The range if the replace is requested.
         */
        const PurpleRange & get_replace() const { return replace; }
        PurpleRange & get_mutable_replace() { return replace; }
        void set_replace(const PurpleRange & value) { this->replace = value; }
    };
}
}
