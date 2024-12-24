//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SaveOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SaveOptions {
        public:
        SaveOptions() = default;
        virtual ~SaveOptions() = default;

        private:
        std::optional<bool> include_text;

        public:
        /**
         * The client is supposed to include the content on save.
         */
        std::optional<bool> get_include_text() const { return include_text; }
        void set_include_text(std::optional<bool> value) { this->include_text = value; }
    };
}
}
