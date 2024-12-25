//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileRename.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Represents information on a file/folder rename.
     */

    using nlohmann::json;

    /**
     * Represents information on a file/folder rename.
     */
    class FileRename {
        public:
        FileRename() = default;
        virtual ~FileRename() = default;

        private:
        std::string new_uri;
        std::string old_uri;

        public:
        /**
         * A file:// URI for the new location of the file/folder being renamed.
         */
        const std::string & get_new_uri() const { return new_uri; }
        std::string & get_mutable_new_uri() { return new_uri; }
        void set_new_uri(const std::string & value) { this->new_uri = value; }

        /**
         * A file:// URI for the original location of the file/folder being renamed.
         */
        const std::string & get_old_uri() const { return old_uri; }
        std::string & get_mutable_old_uri() { return old_uri; }
        void set_old_uri(const std::string & value) { this->old_uri = value; }
    };
}
}
