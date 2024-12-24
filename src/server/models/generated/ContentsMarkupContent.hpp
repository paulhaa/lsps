//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ContentsMarkupContent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    enum class MarkupKind : int;
}
}

namespace lsps {
namespace models {
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
    class ContentsMarkupContent {
        public:
        ContentsMarkupContent() = default;
        virtual ~ContentsMarkupContent() = default;

        private:
        std::optional<std::string> language;
        std::string value;
        std::optional<MarkupKind> kind;

        public:
        std::optional<std::string> get_language() const { return language; }
        void set_language(std::optional<std::string> value) { this->language = value; }

        /**
         * The content itself
         */
        const std::string & get_value() const { return value; }
        std::string & get_mutable_value() { return value; }
        void set_value(const std::string & value) { this->value = value; }

        /**
         * The type of the Markup
         */
        std::optional<MarkupKind> get_kind() const { return kind; }
        void set_kind(std::optional<MarkupKind> value) { this->kind = value; }
    };
}
}
