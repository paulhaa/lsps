//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionContext.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Contains additional information about the context in which a completion request is
     * triggered.
     *
     * The completion context. This is only available if the client specifies to send this using
     * the client capability `completion.contextSupport === true`
     */

    using nlohmann::json;

    /**
     * Contains additional information about the context in which a completion request is
     * triggered.
     *
     * The completion context. This is only available if the client specifies to send this using
     * the client capability `completion.contextSupport === true`
     */
    class CompletionContext {
        public:
        CompletionContext() = default;
        virtual ~CompletionContext() = default;

        private:
        std::optional<std::string> trigger_character;
        double trigger_kind;

        public:
        /**
         * The trigger character (a single character) that has trigger code complete. Is undefined
         * if `triggerKind !== CompletionTriggerKind.TriggerCharacter`
         */
        std::optional<std::string> get_trigger_character() const { return trigger_character; }
        void set_trigger_character(std::optional<std::string> value) { this->trigger_character = value; }

        /**
         * How the completion was triggered.
         */
        const double & get_trigger_kind() const { return trigger_kind; }
        double & get_mutable_trigger_kind() { return trigger_kind; }
        void set_trigger_kind(const double & value) { this->trigger_kind = value; }
    };
}
