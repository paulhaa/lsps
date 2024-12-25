//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ResponseError.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"

namespace lsps {
namespace models {
    /**
     * The error object in case a request fails.
     */

    using nlohmann::json;

    /**
     * The error object in case a request fails.
     */
    class ResponseError {
        public:
        ResponseError() = default;
        virtual ~ResponseError() = default;

        private:
        int64_t code;
        LspAny data;
        std::string message;

        public:
        /**
         * A number indicating the error type that occurred.
         */
        const int64_t & get_code() const { return code; }
        int64_t & get_mutable_code() { return code; }
        void set_code(const int64_t & value) { this->code = value; }

        /**
         * A primitive or structured value that contains additional information about the error. Can
         * be omitted.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * A string providing a short description of the error.
         */
        const std::string & get_message() const { return message; }
        std::string & get_mutable_message() { return message; }
        void set_message(const std::string & value) { this->message = value; }
    };
}
}
