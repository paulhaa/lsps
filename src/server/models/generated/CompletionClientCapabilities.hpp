//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CompletionClientCapabilitiesCompletionItem.hpp"
#include "CompletionItemKind.hpp"
#include "CompletionList.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/completion` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/completion` request.
     */
    class CompletionClientCapabilities {
        public:
        CompletionClientCapabilities() = default;
        virtual ~CompletionClientCapabilities() = default;

        private:
        std::optional<CompletionClientCapabilitiesCompletionItem> completion_item;
        std::optional<CompletionItemKind> completion_item_kind;
        std::optional<CompletionList> completion_list;
        std::optional<bool> context_support;
        std::optional<bool> dynamic_registration;
        std::optional<double> insert_text_mode;

        public:
        /**
         * The client supports the following `CompletionItem` specific capabilities.
         */
        std::optional<CompletionClientCapabilitiesCompletionItem> get_completion_item() const { return completion_item; }
        void set_completion_item(std::optional<CompletionClientCapabilitiesCompletionItem> value) { this->completion_item = value; }

        std::optional<CompletionItemKind> get_completion_item_kind() const { return completion_item_kind; }
        void set_completion_item_kind(std::optional<CompletionItemKind> value) { this->completion_item_kind = value; }

        /**
         * The client supports the following `CompletionList` specific capabilities.
         */
        std::optional<CompletionList> get_completion_list() const { return completion_list; }
        void set_completion_list(std::optional<CompletionList> value) { this->completion_list = value; }

        /**
         * The client supports to send additional context information for a
         * `textDocument/completion` request.
         */
        std::optional<bool> get_context_support() const { return context_support; }
        void set_context_support(std::optional<bool> value) { this->context_support = value; }

        /**
         * Whether completion supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The client's default when the completion item doesn't provide a `insertTextMode` property.
         */
        std::optional<double> get_insert_text_mode() const { return insert_text_mode; }
        void set_insert_text_mode(std::optional<double> value) { this->insert_text_mode = value; }
    };
}
}
