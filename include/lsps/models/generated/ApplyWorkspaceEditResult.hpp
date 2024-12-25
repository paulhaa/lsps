//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ApplyWorkspaceEditResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ApplyWorkspaceEditResult {
        public:
        ApplyWorkspaceEditResult() = default;
        virtual ~ApplyWorkspaceEditResult() = default;

        private:
        bool applied;
        std::optional<int64_t> failed_change;
        std::optional<std::string> failure_reason;

        public:
        /**
         * Indicates whether the edit was applied or not.
         */
        const bool & get_applied() const { return applied; }
        bool & get_mutable_applied() { return applied; }
        void set_applied(const bool & value) { this->applied = value; }

        /**
         * Depending on the client's failure handling strategy `failedChange` might contain the
         * index of the change that failed. This property is only available if the client signals a
         * `failureHandling` strategy in its client capabilities.
         */
        std::optional<int64_t> get_failed_change() const { return failed_change; }
        void set_failed_change(std::optional<int64_t> value) { this->failed_change = value; }

        /**
         * An optional textual description for why the edit was not applied. This may be used by the
         * server for diagnostic logging or to provide a suitable error for a request that triggered
         * the edit.
         */
        std::optional<std::string> get_failure_reason() const { return failure_reason; }
        void set_failure_reason(std::optional<std::string> value) { this->failure_reason = value; }
    };
}
}
