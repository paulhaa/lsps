//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionLiteralSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CodeActionKind.hpp"

namespace lsps {
    /**
     * The client supports code action literals as a valid response of the
     * `textDocument/codeAction` request.
     */

    using nlohmann::json;

    /**
     * The client supports code action literals as a valid response of the
     * `textDocument/codeAction` request.
     */
    class CodeActionLiteralSupport {
        public:
        CodeActionLiteralSupport() = default;
        virtual ~CodeActionLiteralSupport() = default;

        private:
        CodeActionKind code_action_kind;

        public:
        /**
         * The code action kind is supported with the following value set.
         */
        const CodeActionKind & get_code_action_kind() const { return code_action_kind; }
        CodeActionKind & get_mutable_code_action_kind() { return code_action_kind; }
        void set_code_action_kind(const CodeActionKind & value) { this->code_action_kind = value; }
    };
}
