//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ParameterInformation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Client capabilities specific to parameter information.
     */

    using nlohmann::json;

    /**
     * Client capabilities specific to parameter information.
     */
    class ParameterInformation {
        public:
        ParameterInformation() = default;
        virtual ~ParameterInformation() = default;

        private:
        std::optional<bool> label_offset_support;

        public:
        /**
         * The client supports processing label offsets instead of a simple label string.
         */
        std::optional<bool> get_label_offset_support() const { return label_offset_support; }
        void set_label_offset_support(std::optional<bool> value) { this->label_offset_support = value; }
    };
}
}
