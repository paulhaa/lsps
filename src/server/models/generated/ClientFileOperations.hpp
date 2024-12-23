//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ClientFileOperations.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The client has support for file requests/notifications.
     */

    using nlohmann::json;

    /**
     * The client has support for file requests/notifications.
     */
    class ClientFileOperations {
        public:
        ClientFileOperations() = default;
        virtual ~ClientFileOperations() = default;

        private:
        std::optional<bool> did_create;
        std::optional<bool> did_delete;
        std::optional<bool> did_rename;
        std::optional<bool> dynamic_registration;
        std::optional<bool> will_create;
        std::optional<bool> will_delete;
        std::optional<bool> will_rename;

        public:
        /**
         * The client has support for sending didCreateFiles notifications.
         */
        std::optional<bool> get_did_create() const { return did_create; }
        void set_did_create(std::optional<bool> value) { this->did_create = value; }

        /**
         * The client has support for sending didDeleteFiles notifications.
         */
        std::optional<bool> get_did_delete() const { return did_delete; }
        void set_did_delete(std::optional<bool> value) { this->did_delete = value; }

        /**
         * The client has support for sending didRenameFiles notifications.
         */
        std::optional<bool> get_did_rename() const { return did_rename; }
        void set_did_rename(std::optional<bool> value) { this->did_rename = value; }

        /**
         * Whether the client supports dynamic registration for file requests/notifications.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client has support for sending willCreateFiles requests.
         */
        std::optional<bool> get_will_create() const { return will_create; }
        void set_will_create(std::optional<bool> value) { this->will_create = value; }

        /**
         * The client has support for sending willDeleteFiles requests.
         */
        std::optional<bool> get_will_delete() const { return will_delete; }
        void set_will_delete(std::optional<bool> value) { this->will_delete = value; }

        /**
         * The client has support for sending willRenameFiles requests.
         */
        std::optional<bool> get_will_rename() const { return will_rename; }
        void set_will_rename(std::optional<bool> value) { this->will_rename = value; }
    };
}
