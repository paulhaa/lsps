//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * {     "token": "1d546990-40a3-4b77-b134-46622995f6ae",     "value": {         "kind":
     * "begin",         "title": "Finding references for A#foo",         "cancellable":
     * false,         "message": "Processing file X.ts",         "percentage": 0     } }
     *
     * {     "referencesProvider": {         "workDoneProgress": true     } }
     */

    using nlohmann::json;

    /**
     * {     "token": "1d546990-40a3-4b77-b134-46622995f6ae",     "value": {         "kind":
     * "begin",         "title": "Finding references for A#foo",         "cancellable":
     * false,         "message": "Processing file X.ts",         "percentage": 0     } }
     *
     * {     "referencesProvider": {         "workDoneProgress": true     } }
     */
    class WorkDoneProgressOptions {
        public:
        WorkDoneProgressOptions() = default;
        virtual ~WorkDoneProgressOptions() = default;

        private:
        std::optional<bool> work_done_progress;

        public:
        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
