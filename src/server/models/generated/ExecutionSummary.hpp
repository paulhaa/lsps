//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ExecutionSummary.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Additional execution summary information if supported by the client.
     */

    using nlohmann::json;

    /**
     * Additional execution summary information if supported by the client.
     */
    class ExecutionSummary {
        public:
        ExecutionSummary() = default;
        virtual ~ExecutionSummary() = default;

        private:
        int64_t execution_order;
        std::optional<bool> success;

        public:
        /**
         * A strict monotonically increasing value indicating the execution order of a cell inside a
         * notebook.
         */
        const int64_t & get_execution_order() const { return execution_order; }
        int64_t & get_mutable_execution_order() { return execution_order; }
        void set_execution_order(const int64_t & value) { this->execution_order = value; }

        /**
         * Whether the execution was successful or not if known by the client.
         */
        std::optional<bool> get_success() const { return success; }
        void set_success(std::optional<bool> value) { this->success = value; }
    };
}
