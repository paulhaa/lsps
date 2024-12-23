//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LogMessageParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class LogMessageParams {
        public:
        LogMessageParams() = default;
        virtual ~LogMessageParams() = default;

        private:
        std::string message;
        double type;

        public:
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
