//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InitializeError.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class InitializeError {
        public:
        InitializeError() = default;
        virtual ~InitializeError() = default;

        private:
        bool retry;

        public:
        /**
         * Indicates whether the client execute the following retry logic: (1) show the message
         * provided by the ResponseError to the user (2) user selects retry or cancel (3) if user
         * selected retry the initialize method is sent again.
         */
        const bool & get_retry() const { return retry; }
        bool & get_mutable_retry() { return retry; }
        void set_retry(const bool & value) { this->retry = value; }
    };
}
