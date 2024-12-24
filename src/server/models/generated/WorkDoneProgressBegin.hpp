//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressBegin.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    enum class WorkDoneProgressBeginKind : int;
}
}

namespace lsps {
namespace models {
    using nlohmann::json;

    class WorkDoneProgressBegin {
        public:
        WorkDoneProgressBegin() = default;
        virtual ~WorkDoneProgressBegin() = default;

        private:
        std::optional<bool> cancellable;
        WorkDoneProgressBeginKind kind;
        std::optional<std::string> message;
        std::optional<int64_t> percentage;
        std::string title;

        public:
        /**
         * Controls if a cancel button should show to allow the user to cancel the long running
         * operation. Clients that don't support cancellation are allowed to ignore the setting.
         */
        std::optional<bool> get_cancellable() const { return cancellable; }
        void set_cancellable(std::optional<bool> value) { this->cancellable = value; }

        const WorkDoneProgressBeginKind & get_kind() const { return kind; }
        WorkDoneProgressBeginKind & get_mutable_kind() { return kind; }
        void set_kind(const WorkDoneProgressBeginKind & value) { this->kind = value; }

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

        /**
         * Mandatory title of the progress operation. Used to briefly inform about the kind of
         * operation being performed.
         *
         * Examples: "Indexing" or "Linking dependencies".
         */
        const std::string & get_title() const { return title; }
        std::string & get_mutable_title() { return title; }
        void set_title(const std::string & value) { this->title = value; }
    };
}
}
