//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CodeActionRegistrationOptions {
        public:
        CodeActionRegistrationOptions() = default;
        virtual ~CodeActionRegistrationOptions() = default;

        private:
        std::optional<std::vector<std::string>> code_action_kinds;
        std::optional<std::vector<DocumentFilter>> document_selector;
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
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

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
