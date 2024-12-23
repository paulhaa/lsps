//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameFilesParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileRename.hpp"

namespace lsps {
    /**
     * The parameters sent in notifications/requests for user-initiated renames of files.
     */

    using nlohmann::json;

    /**
     * The parameters sent in notifications/requests for user-initiated renames of files.
     */
    class RenameFilesParams {
        public:
        RenameFilesParams() = default;
        virtual ~RenameFilesParams() = default;

        private:
        std::vector<FileRename> files;

        public:
        /**
         * An array of all files/folders renamed in this operation. When a folder is renamed, only
         * the folder will be included, and not its children.
         */
        const std::vector<FileRename> & get_files() const { return files; }
        std::vector<FileRename> & get_mutable_files() { return files; }
        void set_files(const std::vector<FileRename> & value) { this->files = value; }
    };
}
