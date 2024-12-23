//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentSymbolOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class DocumentSymbolOptions {
        public:
        DocumentSymbolOptions() = default;
        virtual ~DocumentSymbolOptions() = default;

        private:
        std::optional<std::string> label;
        std::optional<bool> work_done_progress;

        public:
        /**
         * A human-readable string that is shown when multiple outlines trees are shown for the same
         * document.
         */
        std::optional<std::string> get_label() const { return label; }
        void set_label(std::optional<std::string> value) { this->label = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
