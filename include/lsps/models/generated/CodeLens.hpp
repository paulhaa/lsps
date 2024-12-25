//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeLens.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Command.hpp"
#include "LspAny.hpp"
#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * A code lens represents a command that should be shown along with source text, like the
     * number of references, a way to run tests, etc.
     *
     * A code lens is _unresolved_ when no command is associated to it. For performance reasons
     * the creation of a code lens and resolving should be done in two stages.
     */

    using nlohmann::json;

    /**
     * A code lens represents a command that should be shown along with source text, like the
     * number of references, a way to run tests, etc.
     *
     * A code lens is _unresolved_ when no command is associated to it. For performance reasons
     * the creation of a code lens and resolving should be done in two stages.
     */
    class CodeLens {
        public:
        CodeLens() = default;
        virtual ~CodeLens() = default;

        private:
        std::optional<Command> command;
        LspAny data;
        PurpleRange range;

        public:
        /**
         * The command this code lens represents.
         */
        std::optional<Command> get_command() const { return command; }
        void set_command(std::optional<Command> value) { this->command = value; }

        /**
         * A data entry field that is preserved on a code lens item between a code lens and a code
         * lens resolve request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The range in which this code lens is valid. Should only span a single line.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }
    };
}
}
