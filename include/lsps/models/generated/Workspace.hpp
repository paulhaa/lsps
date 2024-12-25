//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Workspace.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ServerFileOperations.hpp"
#include "WorkspaceFoldersServerCapabilities.hpp"

namespace lsps {
namespace models {
    /**
     * Workspace specific server capabilities
     */

    using nlohmann::json;

    /**
     * Workspace specific server capabilities
     */
    class Workspace {
        public:
        Workspace() = default;
        virtual ~Workspace() = default;

        private:
        std::optional<ServerFileOperations> file_operations;
        std::optional<WorkspaceFoldersServerCapabilities> workspace_folders;

        public:
        /**
         * The server is interested in file notifications/requests.
         */
        std::optional<ServerFileOperations> get_file_operations() const { return file_operations; }
        void set_file_operations(std::optional<ServerFileOperations> value) { this->file_operations = value; }

        /**
         * The server supports workspace folder.
         */
        std::optional<WorkspaceFoldersServerCapabilities> get_workspace_folders() const { return workspace_folders; }
        void set_workspace_folders(std::optional<WorkspaceFoldersServerCapabilities> value) { this->workspace_folders = value; }
    };
}
}
