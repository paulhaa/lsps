//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeWatchedFilesRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileSystemWatcher.hpp"

namespace lsps {
namespace models {
    /**
     * Describe options to be used when registering for file system change events.
     */

    using nlohmann::json;

    /**
     * Describe options to be used when registering for file system change events.
     */
    class DidChangeWatchedFilesRegistrationOptions {
        public:
        DidChangeWatchedFilesRegistrationOptions() = default;
        virtual ~DidChangeWatchedFilesRegistrationOptions() = default;

        private:
        std::vector<FileSystemWatcher> watchers;

        public:
        /**
         * The watchers to register.
         */
        const std::vector<FileSystemWatcher> & get_watchers() const { return watchers; }
        std::vector<FileSystemWatcher> & get_mutable_watchers() { return watchers; }
        void set_watchers(const std::vector<FileSystemWatcher> & value) { this->watchers = value; }
    };
}
}
