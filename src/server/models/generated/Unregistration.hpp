//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Unregistration.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * General parameters to unregister a capability.
     */

    using nlohmann::json;

    /**
     * General parameters to unregister a capability.
     */
    class Unregistration {
        public:
        Unregistration() = default;
        virtual ~Unregistration() = default;

        private:
        std::string id;
        std::string method;

        public:
        /**
         * The id used to unregister the request or notification. Usually an id provided during the
         * register request.
         */
        const std::string & get_id() const { return id; }
        std::string & get_mutable_id() { return id; }
        void set_id(const std::string & value) { this->id = value; }

        /**
         * The method / capability to unregister for.
         */
        const std::string & get_method() const { return method; }
        std::string & get_mutable_method() { return method; }
        void set_method(const std::string & value) { this->method = value; }
    };
}
}
