//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentSyncClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class TextDocumentSyncClientCapabilities {
        public:
        TextDocumentSyncClientCapabilities() = default;
        virtual ~TextDocumentSyncClientCapabilities() = default;

        private:
        std::optional<bool> did_save;
        std::optional<bool> dynamic_registration;
        std::optional<bool> will_save;
        std::optional<bool> will_save_wait_until;

        public:
        /**
         * The client supports did save notifications.
         */
        std::optional<bool> get_did_save() const { return did_save; }
        void set_did_save(std::optional<bool> value) { this->did_save = value; }

        /**
         * Whether text document synchronization supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client supports sending will save notifications.
         */
        std::optional<bool> get_will_save() const { return will_save; }
        void set_will_save(std::optional<bool> value) { this->will_save = value; }

        /**
         * The client supports sending a will save request and waits for a response providing text
         * edits which will be applied to the document before it is saved.
         */
        std::optional<bool> get_will_save_wait_until() const { return will_save_wait_until; }
        void set_will_save_wait_until(std::optional<bool> value) { this->will_save_wait_until = value; }
    };
}
}
