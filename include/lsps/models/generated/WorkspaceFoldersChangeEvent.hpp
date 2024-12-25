//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceFoldersChangeEvent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceFolder.hpp"

namespace lsps {
namespace models {
    /**
     * The actual workspace folder change event.
     *
     * The workspace folder change event.
     */

    using nlohmann::json;

    /**
     * The actual workspace folder change event.
     *
     * The workspace folder change event.
     */
    class WorkspaceFoldersChangeEvent {
        public:
        WorkspaceFoldersChangeEvent() = default;
        virtual ~WorkspaceFoldersChangeEvent() = default;

        private:
        std::vector<WorkspaceFolder> added;
        std::vector<WorkspaceFolder> removed;

        public:
        /**
         * The array of added workspace folders
         */
        const std::vector<WorkspaceFolder> & get_added() const { return added; }
        std::vector<WorkspaceFolder> & get_mutable_added() { return added; }
        void set_added(const std::vector<WorkspaceFolder> & value) { this->added = value; }

        /**
         * The array of the removed workspace folders
         */
        const std::vector<WorkspaceFolder> & get_removed() const { return removed; }
        std::vector<WorkspaceFolder> & get_mutable_removed() { return removed; }
        void set_removed(const std::vector<WorkspaceFolder> & value) { this->removed = value; }
    };
}
}
