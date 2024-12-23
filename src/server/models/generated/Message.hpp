//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Message.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class Message {
        public:
        Message() = default;
        virtual ~Message() = default;

        private:
        std::string jsonrpc;

        public:
        const std::string & get_jsonrpc() const { return jsonrpc; }
        std::string & get_mutable_jsonrpc() { return jsonrpc; }
        void set_jsonrpc(const std::string & value) { this->jsonrpc = value; }
    };
}
