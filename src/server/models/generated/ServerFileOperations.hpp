//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ServerFileOperations.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileOperationRegistrationOptions.hpp"

namespace lsps {
namespace models {
    /**
     * The server is interested in file notifications/requests.
     */

    using nlohmann::json;

    /**
     * The server is interested in file notifications/requests.
     */
    class ServerFileOperations {
        public:
        ServerFileOperations() = default;
        virtual ~ServerFileOperations() = default;

        private:
        std::optional<FileOperationRegistrationOptions> did_create;
        std::optional<FileOperationRegistrationOptions> did_delete;
        std::optional<FileOperationRegistrationOptions> did_rename;
        std::optional<FileOperationRegistrationOptions> will_create;
        std::optional<FileOperationRegistrationOptions> will_delete;
        std::optional<FileOperationRegistrationOptions> will_rename;

        public:
        /**
         * The server is interested in receiving didCreateFiles notifications.
         */
        std::optional<FileOperationRegistrationOptions> get_did_create() const { return did_create; }
        void set_did_create(std::optional<FileOperationRegistrationOptions> value) { this->did_create = value; }

        /**
         * The server is interested in receiving didDeleteFiles file notifications.
         */
        std::optional<FileOperationRegistrationOptions> get_did_delete() const { return did_delete; }
        void set_did_delete(std::optional<FileOperationRegistrationOptions> value) { this->did_delete = value; }

        /**
         * The server is interested in receiving didRenameFiles notifications.
         */
        std::optional<FileOperationRegistrationOptions> get_did_rename() const { return did_rename; }
        void set_did_rename(std::optional<FileOperationRegistrationOptions> value) { this->did_rename = value; }

        /**
         * The server is interested in receiving willCreateFiles requests.
         */
        std::optional<FileOperationRegistrationOptions> get_will_create() const { return will_create; }
        void set_will_create(std::optional<FileOperationRegistrationOptions> value) { this->will_create = value; }

        /**
         * The server is interested in receiving willDeleteFiles file requests.
         */
        std::optional<FileOperationRegistrationOptions> get_will_delete() const { return will_delete; }
        void set_will_delete(std::optional<FileOperationRegistrationOptions> value) { this->will_delete = value; }

        /**
         * The server is interested in receiving willRenameFiles requests.
         */
        std::optional<FileOperationRegistrationOptions> get_will_rename() const { return will_rename; }
        void set_will_rename(std::optional<FileOperationRegistrationOptions> value) { this->will_rename = value; }
    };
}
}
