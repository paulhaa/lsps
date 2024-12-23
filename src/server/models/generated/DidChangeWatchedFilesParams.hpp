//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeWatchedFilesParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FileEvent.hpp"

namespace lsps {
    using nlohmann::json;

    class DidChangeWatchedFilesParams {
        public:
        DidChangeWatchedFilesParams() = default;
        virtual ~DidChangeWatchedFilesParams() = default;

        private:
        std::vector<FileEvent> changes;

        public:
        /**
         * The actual file events.
         */
        const std::vector<FileEvent> & get_changes() const { return changes; }
        std::vector<FileEvent> & get_mutable_changes() { return changes; }
        void set_changes(const std::vector<FileEvent> & value) { this->changes = value; }
    };
}
