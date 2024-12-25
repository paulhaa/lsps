//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Window.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ShowDocumentClientCapabilities.hpp"
#include "ShowMessageRequestClientCapabilities.hpp"

namespace lsps {
namespace models {
    /**
     * Window specific client capabilities.
     */

    using nlohmann::json;

    /**
     * Window specific client capabilities.
     */
    class Window {
        public:
        Window() = default;
        virtual ~Window() = default;

        private:
        std::optional<ShowDocumentClientCapabilities> show_document;
        std::optional<ShowMessageRequestClientCapabilities> show_message;
        std::optional<bool> work_done_progress;

        public:
        /**
         * Client capabilities for the show document request.
         */
        std::optional<ShowDocumentClientCapabilities> get_show_document() const { return show_document; }
        void set_show_document(std::optional<ShowDocumentClientCapabilities> value) { this->show_document = value; }

        /**
         * Capabilities specific to the showMessage request
         */
        std::optional<ShowMessageRequestClientCapabilities> get_show_message() const { return show_message; }
        void set_show_message(std::optional<ShowMessageRequestClientCapabilities> value) { this->show_message = value; }

        /**
         * It indicates whether the client supports server initiated progress using the
         * `window/workDoneProgress/create` request.
         *
         * The capability also controls Whether client supports handling of progress notifications.
         * If set servers are allowed to report a `workDoneProgress` property in the request
         * specific server capabilities.
         */
        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
