//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensEdit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    using nlohmann::json;

    class SemanticTokensEdit {
        public:
        SemanticTokensEdit() = default;
        virtual ~SemanticTokensEdit() = default;

        private:
        std::optional<std::vector<int64_t>> data;
        int64_t delete_count;
        int64_t start;

        public:
        /**
         * The elements to insert.
         */
        std::optional<std::vector<int64_t>> get_data() const { return data; }
        void set_data(std::optional<std::vector<int64_t>> value) { this->data = value; }

        /**
         * The count of elements to remove.
         */
        const int64_t & get_delete_count() const { return delete_count; }
        int64_t & get_mutable_delete_count() { return delete_count; }
        void set_delete_count(const int64_t & value) { this->delete_count = value; }

        /**
         * The start offset of the edit.
         */
        const int64_t & get_start() const { return start; }
        int64_t & get_mutable_start() { return start; }
        void set_start(const int64_t & value) { this->start = value; }
    };
}
