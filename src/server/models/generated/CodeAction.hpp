//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeAction.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Command.hpp"
#include "LspAny.hpp"
#include "Diagnostic.hpp"
#include "Disabled.hpp"
#include "WorkspaceEdit.hpp"

namespace lsps {
    /**
     * A code action represents a change that can be performed in code, e.g. to fix a problem or
     * to refactor code.
     *
     * A CodeAction must set either `edit` and/or a `command`. If both are supplied, the `edit`
     * is applied first, then the `command` is executed.
     */

    using nlohmann::json;

    /**
     * A code action represents a change that can be performed in code, e.g. to fix a problem or
     * to refactor code.
     *
     * A CodeAction must set either `edit` and/or a `command`. If both are supplied, the `edit`
     * is applied first, then the `command` is executed.
     */
    class CodeAction {
        public:
        CodeAction() = default;
        virtual ~CodeAction() = default;

        private:
        std::optional<Command> command;
        LspAny data;
        std::optional<std::vector<Diagnostic>> diagnostics;
        std::optional<Disabled> disabled;
        std::optional<WorkspaceEdit> edit;
        std::optional<bool> is_preferred;
        std::optional<std::string> kind;
        std::string title;

        public:
        /**
         * A command this code action executes. If a code action provides an edit and a command,
         * first the edit is executed and then the command.
         */
        std::optional<Command> get_command() const { return command; }
        void set_command(std::optional<Command> value) { this->command = value; }

        /**
         * A data entry field that is preserved on a code action between a `textDocument/codeAction`
         * and a `codeAction/resolve` request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The diagnostics that this code action resolves.
         */
        std::optional<std::vector<Diagnostic>> get_diagnostics() const { return diagnostics; }
        void set_diagnostics(std::optional<std::vector<Diagnostic>> value) { this->diagnostics = value; }

        /**
         * Marks that the code action cannot currently be applied.
         *
         * Clients should follow the following guidelines regarding disabled code actions:
         *
         * - Disabled code actions are not shown in automatic lightbulbs code   action menus.
         *
         * - Disabled actions are shown as faded out in the code action menu when   the user request
         * a more specific type of code action, such as   refactorings.
         *
         * - If the user has a keybinding that auto applies a code action and only   a disabled code
         * actions are returned, the client should show the user   an error message with `reason` in
         * the editor.
         */
        std::optional<Disabled> get_disabled() const { return disabled; }
        void set_disabled(std::optional<Disabled> value) { this->disabled = value; }

        /**
         * The workspace edit this code action performs.
         */
        std::optional<WorkspaceEdit> get_edit() const { return edit; }
        void set_edit(std::optional<WorkspaceEdit> value) { this->edit = value; }

        /**
         * Marks this as a preferred action. Preferred actions are used by the `auto fix` command
         * and can be targeted by keybindings.
         *
         * A quick fix should be marked preferred if it properly addresses the underlying error. A
         * refactoring should be marked preferred if it is the most reasonable choice of actions to
         * take.
         */
        std::optional<bool> get_is_preferred() const { return is_preferred; }
        void set_is_preferred(std::optional<bool> value) { this->is_preferred = value; }

        /**
         * The kind of the code action.
         *
         * Used to filter code actions.
         */
        std::optional<std::string> get_kind() const { return kind; }
        void set_kind(std::optional<std::string> value) { this->kind = value; }

        /**
         * A short, human-readable, title for this code action.
         */
        const std::string & get_title() const { return title; }
        std::string & get_mutable_title() { return title; }
        void set_title(const std::string & value) { this->title = value; }
    };
}
