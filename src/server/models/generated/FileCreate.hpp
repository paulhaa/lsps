//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileCreate.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Represents information on a file/folder create.
     */

    using nlohmann::json;

    /**
     * Represents information on a file/folder create.
     */
    class FileCreate {
        public:
        FileCreate() = default;
        virtual ~FileCreate() = default;

        private:
        std::string uri;

        public:
        /**
         * A file:// URI for the location of the file/folder being created.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
}
