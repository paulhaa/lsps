//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ExecuteCommandParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ExecuteCommandParams {
        public:
        ExecuteCommandParams() = default;
        virtual ~ExecuteCommandParams() = default;

        private:
        std::optional<std::vector<LspAny>> arguments;
        std::string command;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * Arguments that the command should be invoked with.
         */
        std::optional<std::vector<LspAny>> get_arguments() const { return arguments; }
        void set_arguments(std::optional<std::vector<LspAny>> value) { this->arguments = value; }

        /**
         * The identifier of the actual command handler.
         */
        const std::string & get_command() const { return command; }
        std::string & get_mutable_command() { return command; }
        void set_command(const std::string & value) { this->command = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
}
