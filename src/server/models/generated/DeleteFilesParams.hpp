//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DeleteFilesParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileDelete.hpp"

namespace lsps {
    /**
     * The parameters sent in notifications/requests for user-initiated deletes of files.
     */

    using nlohmann::json;

    /**
     * The parameters sent in notifications/requests for user-initiated deletes of files.
     */
    class DeleteFilesParams {
        public:
        DeleteFilesParams() = default;
        virtual ~DeleteFilesParams() = default;

        private:
        std::vector<FileDelete> files;

        public:
        /**
         * An array of all files/folders deleted in this operation.
         */
        const std::vector<FileDelete> & get_files() const { return files; }
        std::vector<FileDelete> & get_mutable_files() { return files; }
        void set_files(const std::vector<FileDelete> & value) { this->files = value; }
    };
}
