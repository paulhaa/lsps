//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ResponseMessage.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ResponseError.hpp"
#include "Id.hpp"
#include "LspAny.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ResponseMessage {
        public:
        ResponseMessage() = default;
        virtual ~ResponseMessage() = default;

        private:
        std::optional<ResponseError> error;
        Id id;
        std::string jsonrpc;
        LspAny result;

        public:
        /**
         * The error object in case a request fails.
         */
        std::optional<ResponseError> get_error() const { return error; }
        void set_error(std::optional<ResponseError> value) { this->error = value; }

        /**
         * The request id.
         */
        Id get_id() const { return id; }
        void set_id(Id value) { this->id = value; }

        const std::string & get_jsonrpc() const { return jsonrpc; }
        std::string & get_mutable_jsonrpc() { return jsonrpc; }
        void set_jsonrpc(const std::string & value) { this->jsonrpc = value; }

        /**
         * The result of a request. This member is REQUIRED on success. This member MUST NOT exist
         * if there was an error invoking the method.
         */
        LspAny get_result() const { return result; }
        void set_result(LspAny value) { this->result = value; }
    };
}
}
