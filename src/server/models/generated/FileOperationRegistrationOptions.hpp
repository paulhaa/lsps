//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileOperationRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileOperationFilter.hpp"

namespace lsps {
namespace models {
    /**
     * The options to register for file operations.
     *
     * The server is interested in receiving didCreateFiles notifications.
     *
     * The server is interested in receiving didDeleteFiles file notifications.
     *
     * The server is interested in receiving didRenameFiles notifications.
     *
     * The server is interested in receiving willCreateFiles requests.
     *
     * The server is interested in receiving willDeleteFiles file requests.
     *
     * The server is interested in receiving willRenameFiles requests.
     */

    using nlohmann::json;

    /**
     * The options to register for file operations.
     *
     * The server is interested in receiving didCreateFiles notifications.
     *
     * The server is interested in receiving didDeleteFiles file notifications.
     *
     * The server is interested in receiving didRenameFiles notifications.
     *
     * The server is interested in receiving willCreateFiles requests.
     *
     * The server is interested in receiving willDeleteFiles file requests.
     *
     * The server is interested in receiving willRenameFiles requests.
     */
    class FileOperationRegistrationOptions {
        public:
        FileOperationRegistrationOptions() = default;
        virtual ~FileOperationRegistrationOptions() = default;

        private:
        std::vector<FileOperationFilter> filters;

        public:
        /**
         * The actual filters.
         */
        const std::vector<FileOperationFilter> & get_filters() const { return filters; }
        std::vector<FileOperationFilter> & get_mutable_filters() { return filters; }
        void set_filters(const std::vector<FileOperationFilter> & value) { this->filters = value; }
    };
}
}
