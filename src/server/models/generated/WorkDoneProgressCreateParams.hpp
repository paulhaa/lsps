//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressCreateParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"

namespace lsps {
    using nlohmann::json;

    class WorkDoneProgressCreateParams {
        public:
        WorkDoneProgressCreateParams() = default;
        virtual ~WorkDoneProgressCreateParams() = default;

        private:
        ProgressToken token;

        public:
        /**
         * The token to be used to report progress.
         */
        const ProgressToken & get_token() const { return token; }
        ProgressToken & get_mutable_token() { return token; }
        void set_token(const ProgressToken & value) { this->token = value; }
    };
}
