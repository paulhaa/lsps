//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ChangeAnnotationSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Whether the client in general supports change annotations on text edits, create file,
     * rename file and delete file changes.
     */

    using nlohmann::json;

    /**
     * Whether the client in general supports change annotations on text edits, create file,
     * rename file and delete file changes.
     */
    class ChangeAnnotationSupport {
        public:
        ChangeAnnotationSupport() = default;
        virtual ~ChangeAnnotationSupport() = default;

        private:
        std::optional<bool> groups_on_label;

        public:
        /**
         * Whether the client groups edits with equal labels into tree nodes, for instance all edits
         * labelled with "Changes in Strings" would be a tree node.
         */
        std::optional<bool> get_groups_on_label() const { return groups_on_label; }
        void set_groups_on_label(std::optional<bool> value) { this->groups_on_label = value; }
    };
}
}
