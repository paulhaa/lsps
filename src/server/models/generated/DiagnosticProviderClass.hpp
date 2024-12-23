//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DiagnosticProviderClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
    /**
     * The server has support for pull model diagnostics.
     *
     * Diagnostic options.
     *
     * Diagnostic registration options.
     */

    using nlohmann::json;

    /**
     * The server has support for pull model diagnostics.
     *
     * Diagnostic options.
     *
     * Diagnostic registration options.
     */
    class DiagnosticProviderClass {
        public:
        DiagnosticProviderClass() = default;
        virtual ~DiagnosticProviderClass() = default;

        private:
        std::optional<std::string> identifier;
        bool inter_file_dependencies;
        std::optional<bool> work_done_progress;
        bool workspace_diagnostics;
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<std::string> id;

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

        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * The id used to register the request. The id can be used to deregister the request again.
         * See also Registration#id.
         */
        std::optional<std::string> get_id() const { return id; }
        void set_id(std::optional<std::string> value) { this->id = value; }
    };
}
