//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InsertTextModeSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The client supports the `insertTextMode` property on a completion item to override the
     * whitespace handling mode as defined by the client (see `insertTextMode`).
     */

    using nlohmann::json;

    /**
     * The client supports the `insertTextMode` property on a completion item to override the
     * whitespace handling mode as defined by the client (see `insertTextMode`).
     */
    class InsertTextModeSupport {
        public:
        InsertTextModeSupport() = default;
        virtual ~InsertTextModeSupport() = default;

        private:
        std::vector<double> value_set;

        public:
        const std::vector<double> & get_value_set() const { return value_set; }
        std::vector<double> & get_mutable_value_set() { return value_set; }
        void set_value_set(const std::vector<double> & value) { this->value_set = value; }
    };
}
