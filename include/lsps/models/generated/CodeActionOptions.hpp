//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CodeActionOptions {
        public:
        CodeActionOptions() = default;
        virtual ~CodeActionOptions() = default;

        private:
        std::optional<std::vector<std::string>> code_action_kinds;
        std::optional<bool> resolve_provider;
        std::optional<bool> work_done_progress;

        public:
        /**
         * CodeActionKinds that this server may return.
         *
         * The list of kinds may be generic, such as `CodeActionKind.Refactor`, or the server may
         * list out every specific kind they provide.
         */
        std::optional<std::vector<std::string>> get_code_action_kinds() const { return code_action_kinds; }
        void set_code_action_kinds(std::optional<std::vector<std::string>> value) { this->code_action_kinds = value; }

        /**
         * The server provides support to resolve additional information for a code action.
         */
        std::optional<bool> get_resolve_provider() const { return resolve_provider; }
        void set_resolve_provider(std::optional<bool> value) { this->resolve_provider = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
