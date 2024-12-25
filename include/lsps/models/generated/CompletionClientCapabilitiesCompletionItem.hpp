//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionClientCapabilitiesCompletionItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "InsertTextModeSupport.hpp"
#include "CompletionItemResolveSupport.hpp"
#include "CompletionItemTagSupport.hpp"

namespace lsps {
namespace models {
    enum class MarkupKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * The client supports the following `CompletionItem` specific capabilities.
     */

    using nlohmann::json;

    /**
     * The client supports the following `CompletionItem` specific capabilities.
     */
    class CompletionClientCapabilitiesCompletionItem {
        public:
        CompletionClientCapabilitiesCompletionItem() = default;
        virtual ~CompletionClientCapabilitiesCompletionItem() = default;

        private:
        std::optional<bool> commit_characters_support;
        std::optional<bool> deprecated_support;
        std::optional<std::vector<MarkupKind>> documentation_format;
        std::optional<bool> insert_replace_support;
        std::optional<InsertTextModeSupport> insert_text_mode_support;
        std::optional<bool> label_details_support;
        std::optional<bool> preselect_support;
        std::optional<CompletionItemResolveSupport> resolve_support;
        std::optional<bool> snippet_support;
        std::optional<CompletionItemTagSupport> tag_support;

        public:
        /**
         * Client supports commit characters on a completion item.
         */
        std::optional<bool> get_commit_characters_support() const { return commit_characters_support; }
        void set_commit_characters_support(std::optional<bool> value) { this->commit_characters_support = value; }

        /**
         * Client supports the deprecated property on a completion item.
         */
        std::optional<bool> get_deprecated_support() const { return deprecated_support; }
        void set_deprecated_support(std::optional<bool> value) { this->deprecated_support = value; }

        /**
         * Client supports the follow content formats for the documentation property. The order
         * describes the preferred format of the client.
         */
        std::optional<std::vector<MarkupKind>> get_documentation_format() const { return documentation_format; }
        void set_documentation_format(std::optional<std::vector<MarkupKind>> value) { this->documentation_format = value; }

        /**
         * Client supports insert replace edit to control different behavior if a completion item is
         * inserted in the text or should replace text.
         */
        std::optional<bool> get_insert_replace_support() const { return insert_replace_support; }
        void set_insert_replace_support(std::optional<bool> value) { this->insert_replace_support = value; }

        /**
         * The client supports the `insertTextMode` property on a completion item to override the
         * whitespace handling mode as defined by the client (see `insertTextMode`).
         */
        std::optional<InsertTextModeSupport> get_insert_text_mode_support() const { return insert_text_mode_support; }
        void set_insert_text_mode_support(std::optional<InsertTextModeSupport> value) { this->insert_text_mode_support = value; }

        /**
         * The client has support for completion item label details (see also
         * `CompletionItemLabelDetails`).
         */
        std::optional<bool> get_label_details_support() const { return label_details_support; }
        void set_label_details_support(std::optional<bool> value) { this->label_details_support = value; }

        /**
         * Client supports the preselect property on a completion item.
         */
        std::optional<bool> get_preselect_support() const { return preselect_support; }
        void set_preselect_support(std::optional<bool> value) { this->preselect_support = value; }

        /**
         * Indicates which properties a client can resolve lazily on a completion item. Before
         * version 3.16.0 only the predefined properties `documentation` and `detail` could be
         * resolved lazily.
         */
        std::optional<CompletionItemResolveSupport> get_resolve_support() const { return resolve_support; }
        void set_resolve_support(std::optional<CompletionItemResolveSupport> value) { this->resolve_support = value; }

        /**
         * Client supports snippets as insert text.
         *
         * A snippet can define tab stops and placeholders with `$1`, `$2` and `${3:foo}`. `$0`
         * defines the final tab stop, it defaults to the end of the snippet. Placeholders with
         * equal identifiers are linked, that is typing in one will update others too.
         */
        std::optional<bool> get_snippet_support() const { return snippet_support; }
        void set_snippet_support(std::optional<bool> value) { this->snippet_support = value; }

        /**
         * Client supports the tag property on a completion item. Clients supporting tags have to
         * handle unknown tags gracefully. Clients especially need to preserve unknown tags when
         * sending a completion item back to the server in a resolve call.
         */
        std::optional<CompletionItemTagSupport> get_tag_support() const { return tag_support; }
        void set_tag_support(std::optional<CompletionItemTagSupport> value) { this->tag_support = value; }
    };
}
}
