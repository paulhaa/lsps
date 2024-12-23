//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotificationMessage.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Params.hpp"

namespace lsps {
    using nlohmann::json;

    class NotificationMessage {
        public:
        NotificationMessage() = default;
        virtual ~NotificationMessage() = default;

        private:
        std::string jsonrpc;
        std::string method;
        std::optional<Params> params;

        public:
        const std::string & get_jsonrpc() const { return jsonrpc; }
        std::string & get_mutable_jsonrpc() { return jsonrpc; }
        void set_jsonrpc(const std::string & value) { this->jsonrpc = value; }

        /**
         * The method to be invoked.
         */
        const std::string & get_method() const { return method; }
        std::string & get_mutable_method() { return method; }
        void set_method(const std::string & value) { this->method = value; }

        /**
         * The notification's params.
         */
        std::optional<Params> get_params() const { return params; }
        void set_params(std::optional<Params> value) { this->params = value; }
    };
}
