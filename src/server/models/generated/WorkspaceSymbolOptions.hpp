//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class WorkspaceSymbolOptions {
        public:
        WorkspaceSymbolOptions() = default;
        virtual ~WorkspaceSymbolOptions() = default;

        private:
        std::optional<bool> resolve_provider;
        std::optional<bool> work_done_progress;

        public:
        /**
         * The server provides support to resolve additional information for a workspace symbol.
         */
        std::optional<bool> get_resolve_provider() const { return resolve_provider; }
        void set_resolve_provider(std::optional<bool> value) { this->resolve_provider = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
