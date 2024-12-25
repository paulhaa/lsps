//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Registration.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"

namespace lsps {
namespace models {
    /**
     * General parameters to register for a capability.
     */

    using nlohmann::json;

    /**
     * General parameters to register for a capability.
     */
    class Registration {
        public:
        Registration() = default;
        virtual ~Registration() = default;

        private:
        std::string id;
        std::string method;
        LspAny register_options;

        public:
        /**
         * The id used to register the request. The id can be used to deregister the request again.
         */
        const std::string & get_id() const { return id; }
        std::string & get_mutable_id() { return id; }
        void set_id(const std::string & value) { this->id = value; }

        /**
         * The method / capability to register for.
         */
        const std::string & get_method() const { return method; }
        std::string & get_mutable_method() { return method; }
        void set_method(const std::string & value) { this->method = value; }

        /**
         * Options necessary for the registration.
         */
        LspAny get_register_options() const { return register_options; }
        void set_register_options(LspAny value) { this->register_options = value; }
    };
}
}
