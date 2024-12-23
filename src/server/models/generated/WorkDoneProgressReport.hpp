//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressReport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    enum class WorkDoneProgressReportKind : int;
}

namespace lsps {
    using nlohmann::json;

    class WorkDoneProgressReport {
        public:
        WorkDoneProgressReport() = default;
        virtual ~WorkDoneProgressReport() = default;

        private:
        std::optional<bool> cancellable;
        WorkDoneProgressReportKind kind;
        std::optional<std::string> message;
        std::optional<int64_t> percentage;

        public:
        /**
         * Controls enablement state of a cancel button. This property is only valid if a cancel
         * button got requested in the `WorkDoneProgressBegin` payload.
         *
         * Clients that don't support cancellation or don't support control the button's enablement
         * state are allowed to ignore the setting.
         */
        std::optional<bool> get_cancellable() const { return cancellable; }
        void set_cancellable(std::optional<bool> value) { this->cancellable = value; }

        const WorkDoneProgressReportKind & get_kind() const { return kind; }
        WorkDoneProgressReportKind & get_mutable_kind() { return kind; }
        void set_kind(const WorkDoneProgressReportKind & value) { this->kind = value; }

        /**
         * Optional, more detailed associated progress message. Contains complementary information
         * to the `title`.
         *
         * Examples: "3/25 files", "project/src/module2", "node_modules/some_dep". If unset, the
         * previous progress message (if any) is still valid.
         */
        std::optional<std::string> get_message() const { return message; }
        void set_message(std::optional<std::string> value) { this->message = value; }

        /**
         * Optional progress percentage to display (value 100 is considered 100%). If not provided
         * infinite progress is assumed and clients are allowed to ignore the `percentage` value in
         * subsequent report notifications.
         *
         * The value should be steadily rising. Clients are free to ignore values that are not
         * following this rule. The value range is [0, 100].
         */
        std::optional<int64_t> get_percentage() const { return percentage; }
        void set_percentage(std::optional<int64_t> value) { this->percentage = value; }
    };
}
