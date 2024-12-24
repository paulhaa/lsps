//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ExecuteCommandRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Execute command registration options.
     */

    using nlohmann::json;

    /**
     * Execute command registration options.
     */
    class ExecuteCommandRegistrationOptions {
        public:
        ExecuteCommandRegistrationOptions() = default;
        virtual ~ExecuteCommandRegistrationOptions() = default;

        private:
        std::vector<std::string> commands;
        std::optional<bool> work_done_progress;

        public:
        /**
         * The commands to be executed on the server
         */
        const std::vector<std::string> & get_commands() const { return commands; }
        std::vector<std::string> & get_mutable_commands() { return commands; }
        void set_commands(const std::vector<std::string> & value) { this->commands = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
