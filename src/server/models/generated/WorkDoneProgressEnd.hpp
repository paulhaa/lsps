//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressEnd.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    enum class WorkDoneProgressEndKind : int;
}

namespace lsps {
    using nlohmann::json;

    class WorkDoneProgressEnd {
        public:
        WorkDoneProgressEnd() = default;
        virtual ~WorkDoneProgressEnd() = default;

        private:
        WorkDoneProgressEndKind kind;
        std::optional<std::string> message;

        public:
        const WorkDoneProgressEndKind & get_kind() const { return kind; }
        WorkDoneProgressEndKind & get_mutable_kind() { return kind; }
        void set_kind(const WorkDoneProgressEndKind & value) { this->kind = value; }

        /**
         * Optional, a final message indicating to for example indicate the outcome of the operation.
         */
        std::optional<std::string> get_message() const { return message; }
        void set_message(std::optional<std::string> value) { this->message = value; }
    };
}
