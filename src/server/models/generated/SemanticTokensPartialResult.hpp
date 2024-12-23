//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensPartialResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class SemanticTokensPartialResult {
        public:
        SemanticTokensPartialResult() = default;
        virtual ~SemanticTokensPartialResult() = default;

        private:
        std::vector<int64_t> data;

        public:
        const std::vector<int64_t> & get_data() const { return data; }
        std::vector<int64_t> & get_mutable_data() { return data; }
        void set_data(const std::vector<int64_t> & value) { this->data = value; }
    };
}
