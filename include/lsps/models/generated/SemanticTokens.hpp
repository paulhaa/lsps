//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokens.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SemanticTokens {
        public:
        SemanticTokens() = default;
        virtual ~SemanticTokens() = default;

        private:
        std::vector<int64_t> data;
        std::optional<std::string> result_id;

        public:
        /**
         * The actual tokens.
         */
        const std::vector<int64_t> & get_data() const { return data; }
        std::vector<int64_t> & get_mutable_data() { return data; }
        void set_data(const std::vector<int64_t> & value) { this->data = value; }

        /**
         * An optional result id. If provided and clients support delta updating the client will
         * include the result id in the next semantic token request. A server can then instead of
         * computing all semantic tokens again simply send a delta.
         */
        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }
    };
}
}
