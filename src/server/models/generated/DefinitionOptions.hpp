//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DefinitionOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class DefinitionOptions {
        public:
        DefinitionOptions() = default;
        virtual ~DefinitionOptions() = default;

        private:
        std::optional<bool> work_done_progress;

        public:
        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
