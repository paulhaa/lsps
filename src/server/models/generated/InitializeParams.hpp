//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InitializeParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ClientCapabilities.hpp"
#include "ClientInfo.hpp"
#include "LspAny.hpp"
#include "ProgressToken.hpp"
#include "WorkspaceFolder.hpp"

namespace lsps {
namespace models {
    enum class TraceValue : int;
}
}

namespace lsps {
namespace models {
    using nlohmann::json;

    class InitializeParams {
        public:
        InitializeParams() = default;
        virtual ~InitializeParams() = default;

        private:
        ClientCapabilities capabilities;
        std::optional<ClientInfo> client_info;
        LspAny initialization_options;
        std::optional<std::string> locale;
        std::optional<int64_t> process_id;
        std::optional<std::string> root_path;
        std::optional<std::string> root_uri;
        std::optional<TraceValue> trace;
        std::optional<ProgressToken> work_done_token;
        std::optional<std::vector<WorkspaceFolder>> workspace_folders;

        public:
        /**
         * The capabilities provided by the client (editor or tool)
         */
        const ClientCapabilities & get_capabilities() const { return capabilities; }
        ClientCapabilities & get_mutable_capabilities() { return capabilities; }
        void set_capabilities(const ClientCapabilities & value) { this->capabilities = value; }

        /**
         * Information about the client
         */
        std::optional<ClientInfo> get_client_info() const { return client_info; }
        void set_client_info(std::optional<ClientInfo> value) { this->client_info = value; }

        /**
         * User provided initialization options.
         */
        LspAny get_initialization_options() const { return initialization_options; }
        void set_initialization_options(LspAny value) { this->initialization_options = value; }

        /**
         * The locale the client is currently showing the user interface in. This must not
         * necessarily be the locale of the operating system.
         *
         * Uses IETF language tags as the value's syntax (See
         * https://en.wikipedia.org/wiki/IETF_language_tag)
         */
        std::optional<std::string> get_locale() const { return locale; }
        void set_locale(std::optional<std::string> value) { this->locale = value; }

        /**
         * The process Id of the parent process that started the server. Is null if the process has
         * not been started by another process. If the parent process is not alive then the server
         * should exit (see exit notification) its process.
         */
        std::optional<int64_t> get_process_id() const { return process_id; }
        void set_process_id(std::optional<int64_t> value) { this->process_id = value; }

        /**
         * The rootPath of the workspace. Is null if no folder is open.
         */
        std::optional<std::string> get_root_path() const { return root_path; }
        void set_root_path(std::optional<std::string> value) { this->root_path = value; }

        /**
         * The rootUri of the workspace. Is null if no folder is open. If both `rootPath` and
         * `rootUri` are set `rootUri` wins.
         */
        std::optional<std::string> get_root_uri() const { return root_uri; }
        void set_root_uri(std::optional<std::string> value) { this->root_uri = value; }

        /**
         * The initial trace setting. If omitted trace is disabled ('off').
         */
        std::optional<TraceValue> get_trace() const { return trace; }
        void set_trace(std::optional<TraceValue> value) { this->trace = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }

        /**
         * The workspace folders configured in the client when the server starts. This property is
         * only available if the client supports workspace folders. It can be `null` if the client
         * supports workspace folders but none are configured.
         */
        std::optional<std::vector<WorkspaceFolder>> get_workspace_folders() const { return workspace_folders; }
        void set_workspace_folders(std::optional<std::vector<WorkspaceFolder>> value) { this->workspace_folders = value; }
    };
}
}
