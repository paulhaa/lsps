//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeActionContext.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"

namespace lsps {
    /**
     * Contains additional diagnostic information about the context in which a code action is
     * run.
     *
     * Context carrying additional information.
     */

    using nlohmann::json;

    /**
     * Contains additional diagnostic information about the context in which a code action is
     * run.
     *
     * Context carrying additional information.
     */
    class CodeActionContext {
        public:
        CodeActionContext() = default;
        virtual ~CodeActionContext() = default;

        private:
        std::vector<Diagnostic> diagnostics;
        std::optional<std::vector<std::string>> only;
        std::optional<double> trigger_kind;

        public:
        /**
         * An array of diagnostics known on the client side overlapping the range provided to the
         * `textDocument/codeAction` request. They are provided so that the server knows which
         * errors are currently presented to the user for the given range. There is no guarantee
         * that these accurately reflect the error state of the resource. The primary parameter to
         * compute code actions is the provided range.
         */
        const std::vector<Diagnostic> & get_diagnostics() const { return diagnostics; }
        std::vector<Diagnostic> & get_mutable_diagnostics() { return diagnostics; }
        void set_diagnostics(const std::vector<Diagnostic> & value) { this->diagnostics = value; }

        /**
         * Requested kind of actions to return.
         *
         * Actions not of this kind are filtered out by the client before being shown. So servers
         * can omit computing them.
         */
        std::optional<std::vector<std::string>> get_only() const { return only; }
        void set_only(std::optional<std::vector<std::string>> value) { this->only = value; }

        /**
         * The reason why code actions were requested.
         */
        std::optional<double> get_trigger_kind() const { return trigger_kind; }
        void set_trigger_kind(std::optional<double> value) { this->trigger_kind = value; }
    };
}
