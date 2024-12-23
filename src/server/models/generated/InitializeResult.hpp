//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InitializeResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ServerCapabilities.hpp"
#include "ServerInfo.hpp"

namespace lsps {
    using nlohmann::json;

    class InitializeResult {
        public:
        InitializeResult() = default;
        virtual ~InitializeResult() = default;

        private:
        ServerCapabilities capabilities;
        std::optional<ServerInfo> server_info;

        public:
        /**
         * The capabilities the language server provides.
         */
        const ServerCapabilities & get_capabilities() const { return capabilities; }
        ServerCapabilities & get_mutable_capabilities() { return capabilities; }
        void set_capabilities(const ServerCapabilities & value) { this->capabilities = value; }

        /**
         * Information about the server.
         */
        std::optional<ServerInfo> get_server_info() const { return server_info; }
        void set_server_info(std::optional<ServerInfo> value) { this->server_info = value; }
    };
}
