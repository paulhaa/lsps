//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FileSystemWatcher.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "GlobPattern.hpp"
#include "RelativePattern.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class FileSystemWatcher {
        public:
        FileSystemWatcher() = default;
        virtual ~FileSystemWatcher() = default;

        private:
        GlobPattern glob_pattern;
        std::optional<int64_t> kind;

        public:
        /**
         * The glob pattern to watch. See  {@link  GlobPattern glob pattern }  for more detail.
         */
        const GlobPattern & get_glob_pattern() const { return glob_pattern; }
        GlobPattern & get_mutable_glob_pattern() { return glob_pattern; }
        void set_glob_pattern(const GlobPattern & value) { this->glob_pattern = value; }

        /**
         * The kind of events of interest. If omitted it defaults to WatchKind.Create |
         * WatchKind.Change | WatchKind.Delete which is 7.
         */
        std::optional<int64_t> get_kind() const { return kind; }
        void set_kind(std::optional<int64_t> value) { this->kind = value; }
    };
}
}
