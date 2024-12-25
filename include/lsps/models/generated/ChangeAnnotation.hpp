//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ChangeAnnotation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Additional information that describes document changes.
     */

    using nlohmann::json;

    /**
     * Additional information that describes document changes.
     */
    class ChangeAnnotation {
        public:
        ChangeAnnotation() = default;
        virtual ~ChangeAnnotation() = default;

        private:
        std::optional<std::string> description;
        std::string label;
        std::optional<bool> needs_confirmation;

        public:
        /**
         * A human-readable string which is rendered less prominent in the user interface.
         */
        std::optional<std::string> get_description() const { return description; }
        void set_description(std::optional<std::string> value) { this->description = value; }

        /**
         * A human-readable string describing the actual change. The string is rendered prominent in
         * the user interface.
         */
        const std::string & get_label() const { return label; }
        std::string & get_mutable_label() { return label; }
        void set_label(const std::string & value) { this->label = value; }

        /**
         * A flag which indicates that user confirmation is needed before applying the change.
         */
        std::optional<bool> get_needs_confirmation() const { return needs_confirmation; }
        void set_needs_confirmation(std::optional<bool> value) { this->needs_confirmation = value; }
    };
}
}
