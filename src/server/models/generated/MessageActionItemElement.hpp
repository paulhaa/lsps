//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MessageActionItemElement.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class MessageActionItemElement {
        public:
        MessageActionItemElement() = default;
        virtual ~MessageActionItemElement() = default;

        private:
        std::string title;

        public:
        /**
         * A short title like 'Retry', 'Open Log' etc.
         */
        const std::string & get_title() const { return title; }
        std::string & get_mutable_title() { return title; }
        void set_title(const std::string & value) { this->title = value; }
    };
}
