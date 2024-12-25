//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileEvent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * An event describing a file change.
     */

    using nlohmann::json;

    /**
     * An event describing a file change.
     */
    class FileEvent {
        public:
        FileEvent() = default;
        virtual ~FileEvent() = default;

        private:
        double type;
        std::string uri;

        public:
        /**
         * The change type.
         */
        const double & get_type() const { return type; }
        double & get_mutable_type() { return type; }
        void set_type(const double & value) { this->type = value; }

        /**
         * The file's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
}
