//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LogTraceParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class LogTraceParams {
        public:
        LogTraceParams() = default;
        virtual ~LogTraceParams() = default;

        private:
        std::string message;
        std::optional<std::string> verbose;

        public:
        /**
         * The message to be logged.
         */
        const std::string & get_message() const { return message; }
        std::string & get_mutable_message() { return message; }
        void set_message(const std::string & value) { this->message = value; }

        /**
         * Additional information that can be computed if the `trace` configuration is set to
         * `'verbose'`
         */
        std::optional<std::string> get_verbose() const { return verbose; }
        void set_verbose(std::optional<std::string> value) { this->verbose = value; }
    };
}
}
