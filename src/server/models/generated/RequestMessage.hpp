//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RequestMessage.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"
#include "Params.hpp"

namespace lsps {
    using nlohmann::json;

    class RequestMessage {
        public:
        RequestMessage() = default;
        virtual ~RequestMessage() = default;

        private:
        ProgressToken id;
        std::string jsonrpc;
        std::string method;
        std::optional<Params> params;

        public:
        /**
         * The request id.
         */
        const ProgressToken & get_id() const { return id; }
        ProgressToken & get_mutable_id() { return id; }
        void set_id(const ProgressToken & value) { this->id = value; }

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
         * The method's params.
         */
        std::optional<Params> get_params() const { return params; }
        void set_params(std::optional<Params> value) { this->params = value; }
    };
}
