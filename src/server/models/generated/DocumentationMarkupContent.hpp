//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentationMarkupContent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    enum class MarkupKind : int;
}

namespace lsps {
    /**
     * A `MarkupContent` literal represents a string value which content is interpreted base on
     * its kind flag. Currently the protocol supports `plaintext` and `markdown` as markup
     * kinds.
     *
     * If the kind is `markdown` then the value can contain fenced code blocks like in GitHub
     * issues.
     *
     * Here is an example how such a string can be constructed using JavaScript / TypeScript:
     * ```typescript let markdown: MarkdownContent = {     kind: MarkupKind.Markdown,     value:
     * [         '# Header',         'Some text',         '```typescript',
     * 'someCode();',         '```'     ].join('\n') }; ```
     *
     * *Please Note* that clients might sanitize the return markdown. A client could decide to
     * remove HTML from the markdown to avoid script execution.
     */

    using nlohmann::json;

    /**
     * A `MarkupContent` literal represents a string value which content is interpreted base on
     * its kind flag. Currently the protocol supports `plaintext` and `markdown` as markup
     * kinds.
     *
     * If the kind is `markdown` then the value can contain fenced code blocks like in GitHub
     * issues.
     *
     * Here is an example how such a string can be constructed using JavaScript / TypeScript:
     * ```typescript let markdown: MarkdownContent = {     kind: MarkupKind.Markdown,     value:
     * [         '# Header',         'Some text',         '```typescript',
     * 'someCode();',         '```'     ].join('\n') }; ```
     *
     * *Please Note* that clients might sanitize the return markdown. A client could decide to
     * remove HTML from the markdown to avoid script execution.
     */
    class DocumentationMarkupContent {
        public:
        DocumentationMarkupContent() = default;
        virtual ~DocumentationMarkupContent() = default;

        private:
        MarkupKind kind;
        std::string value;

        public:
        /**
         * The type of the Markup
         */
        const MarkupKind & get_kind() const { return kind; }
        MarkupKind & get_mutable_kind() { return kind; }
        void set_kind(const MarkupKind & value) { this->kind = value; }

        /**
         * The content itself
         */
        const std::string & get_value() const { return value; }
        std::string & get_mutable_value() { return value; }
        void set_value(const std::string & value) { this->value = value; }
    };
}
