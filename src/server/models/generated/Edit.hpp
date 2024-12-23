//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Edit.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * An edit which is applied to a document when selecting this completion. When an edit is
     * provided the value of `insertText` is ignored.
     *
     * *Note:* The range of the edit must be a single line range and it must contain the
     * position at which completion has been requested.
     *
     * Most editors support two different operations when accepting a completion item. One is to
     * insert a completion text and the other is to replace an existing text with a completion
     * text. Since this can usually not be predetermined by a server it can report both ranges.
     * Clients need to signal support for `InsertReplaceEdit`s via the
     * `textDocument.completion.completionItem.insertReplaceSupport` client capability
     * property.
     *
     * *Note 1:* The text edit's range as well as both ranges from an insert replace edit must
     * be a [single line] and they must contain the position at which completion has been
     * requested.
     * *Note 2:* If an `InsertReplaceEdit` is returned the edit's insert range must be a prefix
     * of the edit's replace range, that means it must be contained and starting at the same
     * position.
     *
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     *
     * A special text edit to provide an insert and a replace operation.
     */

    using nlohmann::json;

    /**
     * An edit which is applied to a document when selecting this completion. When an edit is
     * provided the value of `insertText` is ignored.
     *
     * *Note:* The range of the edit must be a single line range and it must contain the
     * position at which completion has been requested.
     *
     * Most editors support two different operations when accepting a completion item. One is to
     * insert a completion text and the other is to replace an existing text with a completion
     * text. Since this can usually not be predetermined by a server it can report both ranges.
     * Clients need to signal support for `InsertReplaceEdit`s via the
     * `textDocument.completion.completionItem.insertReplaceSupport` client capability
     * property.
     *
     * *Note 1:* The text edit's range as well as both ranges from an insert replace edit must
     * be a [single line] and they must contain the position at which completion has been
     * requested.
     * *Note 2:* If an `InsertReplaceEdit` is returned the edit's insert range must be a prefix
     * of the edit's replace range, that means it must be contained and starting at the same
     * position.
     *
     * An [edit](#TextEdit) which is applied to a document when selecting this presentation for
     * the color. When omitted the [label](#ColorPresentation.label) is used.
     *
     * A special text edit to provide an insert and a replace operation.
     */
    class Edit {
        public:
        Edit() = default;
        virtual ~Edit() = default;

        private:
        std::string new_text;
        std::optional<PurpleRange> range;
        std::optional<PurpleRange> insert;
        std::optional<PurpleRange> replace;

        public:
        /**
         * The string to be inserted. For delete operations use an empty string.
         *
         * The string to be inserted.
         */
        const std::string & get_new_text() const { return new_text; }
        std::string & get_mutable_new_text() { return new_text; }
        void set_new_text(const std::string & value) { this->new_text = value; }

        /**
         * The range of the text document to be manipulated. To insert text into a document create a
         * range where start === end.
         */
        std::optional<PurpleRange> get_range() const { return range; }
        void set_range(std::optional<PurpleRange> value) { this->range = value; }

        /**
         * The range if the insert is requested
         */
        std::optional<PurpleRange> get_insert() const { return insert; }
        void set_insert(std::optional<PurpleRange> value) { this->insert = value; }

        /**
         * The range if the replace is requested.
         */
        std::optional<PurpleRange> get_replace() const { return replace; }
        void set_replace(std::optional<PurpleRange> value) { this->replace = value; }
    };
}
