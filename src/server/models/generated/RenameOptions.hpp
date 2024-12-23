//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class RenameOptions {
        public:
        RenameOptions() = default;
        virtual ~RenameOptions() = default;

        private:
        std::optional<bool> prepare_provider;
        std::optional<bool> work_done_progress;

        public:
        /**
         * Renames should be checked and tested before being executed.
         */
        std::optional<bool> get_prepare_provider() const { return prepare_provider; }
        void set_prepare_provider(std::optional<bool> value) { this->prepare_provider = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
