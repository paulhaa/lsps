//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CancelParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CancelParams {
        public:
        CancelParams() = default;
        virtual ~CancelParams() = default;

        private:
        ProgressToken id;

        public:
        /**
         * The request id to cancel.
         */
        const ProgressToken & get_id() const { return id; }
        ProgressToken & get_mutable_id() { return id; }
        void set_id(const ProgressToken & value) { this->id = value; }
    };
}
}
