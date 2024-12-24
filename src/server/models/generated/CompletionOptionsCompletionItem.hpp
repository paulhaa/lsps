//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionOptionsCompletionItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The server supports the following `CompletionItem` specific capabilities.
     */

    using nlohmann::json;

    /**
     * The server supports the following `CompletionItem` specific capabilities.
     */
    class CompletionOptionsCompletionItem {
        public:
        CompletionOptionsCompletionItem() = default;
        virtual ~CompletionOptionsCompletionItem() = default;

        private:
        std::optional<bool> label_details_support;

        public:
        /**
         * The server has support for completion item label details (see also
         * `CompletionItemLabelDetails`) when receiving a completion item in a resolve call.
         */
        std::optional<bool> get_label_details_support() const { return label_details_support; }
        void set_label_details_support(std::optional<bool> value) { this->label_details_support = value; }
    };
}
}
