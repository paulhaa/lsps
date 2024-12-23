//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ServerInfo.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Information about the server.
     */

    using nlohmann::json;

    /**
     * Information about the server.
     */
    class ServerInfo {
        public:
        ServerInfo() = default;
        virtual ~ServerInfo() = default;

        private:
        std::string name;
        std::optional<std::string> version;

        public:
        /**
         * The name of the server as defined by the server.
         */
        const std::string & get_name() const { return name; }
        std::string & get_mutable_name() { return name; }
        void set_name(const std::string & value) { this->name = value; }

        /**
         * The server's version as defined by the server.
         */
        std::optional<std::string> get_version() const { return version; }
        void set_version(std::optional<std::string> value) { this->version = value; }
    };
}
