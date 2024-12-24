//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ShowMessageRequestParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "MessageActionItemElement.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ShowMessageRequestParams {
        public:
        ShowMessageRequestParams() = default;
        virtual ~ShowMessageRequestParams() = default;

        private:
        std::optional<std::vector<MessageActionItemElement>> actions;
        std::string message;
        double type;

        public:
        /**
         * The message action items to present.
         */
        std::optional<std::vector<MessageActionItemElement>> get_actions() const { return actions; }
        void set_actions(std::optional<std::vector<MessageActionItemElement>> value) { this->actions = value; }

        /**
         * The actual message
         */
        const std::string & get_message() const { return message; }
        std::string & get_mutable_message() { return message; }
        void set_message(const std::string & value) { this->message = value; }

        /**
         * The message type. See  {@link  MessageType }
         */
        const double & get_type() const { return type; }
        double & get_mutable_type() { return type; }
        void set_type(const double & value) { this->type = value; }
    };
}
}
