//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionItemLabelDetails.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Additional details for the label
     *
     * Additional details for a completion item label.
     */

    using nlohmann::json;

    /**
     * Additional details for the label
     *
     * Additional details for a completion item label.
     */
    class CompletionItemLabelDetails {
        public:
        CompletionItemLabelDetails() = default;
        virtual ~CompletionItemLabelDetails() = default;

        private:
        std::optional<std::string> description;
        std::optional<std::string> detail;

        public:
        /**
         * An optional string which is rendered less prominently after  {@link
         * CompletionItemLabelDetails.detail } . Should be used for fully qualified names or file
         * path.
         */
        std::optional<std::string> get_description() const { return description; }
        void set_description(std::optional<std::string> value) { this->description = value; }

        /**
         * An optional string which is rendered less prominently directly after  {@link
         * CompletionItem.label label } , without any spacing. Should be used for function
         * signatures or type annotations.
         */
        std::optional<std::string> get_detail() const { return detail; }
        void set_detail(std::optional<std::string> value) { this->detail = value; }
    };
}
}
