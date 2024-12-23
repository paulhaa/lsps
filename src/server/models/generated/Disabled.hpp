//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Disabled.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
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

    using nlohmann::json;

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
    class Disabled {
        public:
        Disabled() = default;
        virtual ~Disabled() = default;

        private:
        std::string reason;

        public:
        /**
         * Human readable description of why the code action is currently disabled.
         *
         * This is displayed in the code actions UI.
         */
        const std::string & get_reason() const { return reason; }
        std::string & get_mutable_reason() { return reason; }
        void set_reason(const std::string & value) { this->reason = value; }
    };
}
