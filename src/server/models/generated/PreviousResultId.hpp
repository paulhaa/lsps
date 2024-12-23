//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PreviousResultId.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * A previous result id in a workspace pull request.
     */

    using nlohmann::json;

    /**
     * A previous result id in a workspace pull request.
     */
    class PreviousResultId {
        public:
        PreviousResultId() = default;
        virtual ~PreviousResultId() = default;

        private:
        std::string uri;
        std::string value;

        public:
        /**
         * The URI for which the client knows a result id.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The value of the previous result id.
         */
        const std::string & get_value() const { return value; }
        std::string & get_mutable_value() { return value; }
        void set_value(const std::string & value) { this->value = value; }
    };
}
