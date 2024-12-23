//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextDocumentSyncOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class TextDocumentSyncOptions {
        public:
        TextDocumentSyncOptions() = default;
        virtual ~TextDocumentSyncOptions() = default;

        private:
        std::optional<double> change;
        std::optional<bool> open_close;
        std::optional<bool> save;
        std::optional<bool> will_save;
        std::optional<bool> will_save_wait_until;

        public:
        /**
         * Change notifications are sent to the server. See TextDocumentSyncKind.None,
         * TextDocumentSyncKind.Full and TextDocumentSyncKind.Incremental. If omitted it defaults to
         * TextDocumentSyncKind.None.
         */
        std::optional<double> get_change() const { return change; }
        void set_change(std::optional<double> value) { this->change = value; }

        /**
         * Open and close notifications are sent to the server. If omitted open close notifications
         * should not be sent.   Open and close notifications are sent to the server. If omitted
         * open close notification should not be sent.
         */
        std::optional<bool> get_open_close() const { return open_close; }
        void set_open_close(std::optional<bool> value) { this->open_close = value; }

        /**
         * If present save notifications are sent to the server. If omitted the notification should
         * not be sent.
         */
        std::optional<bool> get_save() const { return save; }
        void set_save(std::optional<bool> value) { this->save = value; }

        /**
         * If present will save notifications are sent to the server. If omitted the notification
         * should not be sent.
         */
        std::optional<bool> get_will_save() const { return will_save; }
        void set_will_save(std::optional<bool> value) { this->will_save = value; }

        /**
         * If present will save wait until requests are sent to the server. If omitted the request
         * should not be sent.
         */
        std::optional<bool> get_will_save_wait_until() const { return will_save_wait_until; }
        void set_will_save_wait_until(std::optional<bool> value) { this->will_save_wait_until = value; }
    };
}
