//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SetTraceParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    enum class TraceValue : int;
}
}

namespace lsps {
namespace models {
    /**
     * {     "method": "client/unregisterCapability",     "params": {
     * "unregisterations": [             {                 "id":
     * "79eee87c-c409-4664-8102-e03263673f6f",                 "method":
     * "textDocument/willSaveWaitUntil"             }         ]     } }
     */

    using nlohmann::json;

    /**
     * {     "method": "client/unregisterCapability",     "params": {
     * "unregisterations": [             {                 "id":
     * "79eee87c-c409-4664-8102-e03263673f6f",                 "method":
     * "textDocument/willSaveWaitUntil"             }         ]     } }
     */
    class SetTraceParams {
        public:
        SetTraceParams() = default;
        virtual ~SetTraceParams() = default;

        private:
        TraceValue value;

        public:
        /**
         * The new value that should be assigned to the trace setting.
         */
        const TraceValue & get_value() const { return value; }
        TraceValue & get_mutable_value() { return value; }
        void set_value(const TraceValue & value) { this->value = value; }
    };
}
}
