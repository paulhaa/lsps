//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CreateFilesParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileCreate.hpp"

namespace lsps {
namespace models {
    /**
     * The parameters sent in notifications/requests for user-initiated creation of files.
     */

    using nlohmann::json;

    /**
     * The parameters sent in notifications/requests for user-initiated creation of files.
     */
    class CreateFilesParams {
        public:
        CreateFilesParams() = default;
        virtual ~CreateFilesParams() = default;

        private:
        std::vector<FileCreate> files;

        public:
        /**
         * An array of all files/folders created in this operation.
         */
        const std::vector<FileCreate> & get_files() const { return files; }
        std::vector<FileCreate> & get_mutable_files() { return files; }
        void set_files(const std::vector<FileCreate> & value) { this->files = value; }
    };
}
}
