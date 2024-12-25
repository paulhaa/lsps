//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DiagnosticOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Diagnostic options.
     */

    using nlohmann::json;

    /**
     * Diagnostic options.
     */
    class DiagnosticOptions {
        public:
        DiagnosticOptions() = default;
        virtual ~DiagnosticOptions() = default;

        private:
        std::optional<std::string> identifier;
        bool inter_file_dependencies;
        std::optional<bool> work_done_progress;
        bool workspace_diagnostics;

        public:
        /**
         * An optional identifier under which the diagnostics are managed by the client.
         */
        std::optional<std::string> get_identifier() const { return identifier; }
        void set_identifier(std::optional<std::string> value) { this->identifier = value; }

        /**
         * Whether the language has inter file dependencies meaning that editing code in one file
         * can result in a different diagnostic set in another file. Inter file dependencies are
         * common for most programming languages and typically uncommon for linters.
         */
        const bool & get_inter_file_dependencies() const { return inter_file_dependencies; }
        bool & get_mutable_inter_file_dependencies() { return inter_file_dependencies; }
        void set_inter_file_dependencies(const bool & value) { this->inter_file_dependencies = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }

        /**
         * The server provides support for workspace diagnostics as well.
         */
        const bool & get_workspace_diagnostics() const { return workspace_diagnostics; }
        bool & get_mutable_workspace_diagnostics() { return workspace_diagnostics; }
        void set_workspace_diagnostics(const bool & value) { this->workspace_diagnostics = value; }
    };
}
}
