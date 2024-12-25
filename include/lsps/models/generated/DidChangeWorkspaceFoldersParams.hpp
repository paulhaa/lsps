//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeWorkspaceFoldersParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceFoldersChangeEvent.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class DidChangeWorkspaceFoldersParams {
        public:
        DidChangeWorkspaceFoldersParams() = default;
        virtual ~DidChangeWorkspaceFoldersParams() = default;

        private:
        WorkspaceFoldersChangeEvent event;

        public:
        /**
         * The actual workspace folder change event.
         */
        const WorkspaceFoldersChangeEvent & get_event() const { return event; }
        WorkspaceFoldersChangeEvent & get_mutable_event() { return event; }
        void set_event(const WorkspaceFoldersChangeEvent & value) { this->event = value; }
    };
}
}
