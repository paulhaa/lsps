//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Command.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"

namespace lsps {
namespace models {
    /**
     * A command this code action executes. If a code action provides an edit and a command,
     * first the edit is executed and then the command.
     *
     * The command this code lens represents.
     *
     * An optional command that is executed *after* inserting this completion.
     * *Note* that additional modifications to the current document should be described with the
     * additionalTextEdits-property.
     *
     * An optional command for this label part.
     *
     * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
     * property late using the resolve request.
     */

    using nlohmann::json;

    /**
     * A command this code action executes. If a code action provides an edit and a command,
     * first the edit is executed and then the command.
     *
     * The command this code lens represents.
     *
     * An optional command that is executed *after* inserting this completion.
     * *Note* that additional modifications to the current document should be described with the
     * additionalTextEdits-property.
     *
     * An optional command for this label part.
     *
     * Depending on the client capability `inlayHint.resolveSupport` clients might resolve this
     * property late using the resolve request.
     */
    class Command {
        public:
        Command() = default;
        virtual ~Command() = default;

        private:
        std::optional<std::vector<LspAny>> arguments;
        std::string command;
        std::string title;

        public:
        /**
         * Arguments that the command handler should be invoked with.
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
         * Title of the command, like `save`.
         */
        const std::string & get_title() const { return title; }
        std::string & get_mutable_title() { return title; }
        void set_title(const std::string & value) { this->title = value; }
    };
}
}
