//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TypeHierarchySupertypesParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TypeHierarchyItem.hpp"
#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class TypeHierarchySupertypesParams {
        public:
        TypeHierarchySupertypesParams() = default;
        virtual ~TypeHierarchySupertypesParams() = default;

        private:
        TypeHierarchyItem item;
        std::optional<ProgressToken> partial_result_token;
        std::optional<ProgressToken> work_done_token;

        public:
        const TypeHierarchyItem & get_item() const { return item; }
        TypeHierarchyItem & get_mutable_item() { return item; }
        void set_item(const TypeHierarchyItem & value) { this->item = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
}
