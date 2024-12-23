//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionItem.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextEdit.hpp"
#include "Command.hpp"
#include "LspAny.hpp"
#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"
#include "CompletionItemLabelDetails.hpp"
#include "Edit.hpp"

namespace lsps {
    using nlohmann::json;

    class CompletionItem {
        public:
        CompletionItem() = default;
        virtual ~CompletionItem() = default;

        private:
        std::optional<std::vector<TextEdit>> additional_text_edits;
        std::optional<Command> command;
        std::optional<std::vector<std::string>> commit_characters;
        LspAny data;
        std::optional<bool> deprecated;
        std::optional<std::string> detail;
        std::optional<Documentation> documentation;
        std::optional<std::string> filter_text;
        std::optional<std::string> insert_text;
        std::optional<double> insert_text_format;
        std::optional<double> insert_text_mode;
        std::optional<double> kind;
        std::string label;
        std::optional<CompletionItemLabelDetails> label_details;
        std::optional<bool> preselect;
        std::optional<std::string> sort_text;
        std::optional<std::vector<double>> tags;
        std::optional<Edit> text_edit;
        std::optional<std::string> text_edit_text;

        public:
        /**
         * An optional array of additional text edits that are applied when selecting this
         * completion. Edits must not overlap (including the same insert position) with the main
         * edit nor with themselves.
         *
         * Additional text edits should be used to change text unrelated to the current cursor
         * position (for example adding an import statement at the top of the file if the completion
         * item will insert an unqualified type).
         */
        std::optional<std::vector<TextEdit>> get_additional_text_edits() const { return additional_text_edits; }
        void set_additional_text_edits(std::optional<std::vector<TextEdit>> value) { this->additional_text_edits = value; }

        /**
         * An optional command that is executed *after* inserting this completion.
         * *Note* that additional modifications to the current document should be described with the
         * additionalTextEdits-property.
         */
        std::optional<Command> get_command() const { return command; }
        void set_command(std::optional<Command> value) { this->command = value; }

        /**
         * An optional set of characters that when pressed while this completion is active will
         * accept it first and then type that character. *Note* that all commit characters should
         * have `length=1` and that superfluous characters will be ignored.
         */
        std::optional<std::vector<std::string>> get_commit_characters() const { return commit_characters; }
        void set_commit_characters(std::optional<std::vector<std::string>> value) { this->commit_characters = value; }

        /**
         * A data entry field that is preserved on a completion item between a completion and a
         * completion resolve request.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * Indicates if this item is deprecated.
         */
        std::optional<bool> get_deprecated() const { return deprecated; }
        void set_deprecated(std::optional<bool> value) { this->deprecated = value; }

        /**
         * A human-readable string with additional information about this item, like type or symbol
         * information.
         */
        std::optional<std::string> get_detail() const { return detail; }
        void set_detail(std::optional<std::string> value) { this->detail = value; }

        /**
         * A human-readable string that represents a doc-comment.
         */
        std::optional<Documentation> get_documentation() const { return documentation; }
        void set_documentation(std::optional<Documentation> value) { this->documentation = value; }

        /**
         * A string that should be used when filtering a set of completion items. When omitted the
         * label is used as the filter text for this item.
         */
        std::optional<std::string> get_filter_text() const { return filter_text; }
        void set_filter_text(std::optional<std::string> value) { this->filter_text = value; }

        /**
         * A string that should be inserted into a document when selecting this completion. When
         * omitted the label is used as the insert text for this item.
         *
         * The `insertText` is subject to interpretation by the client side. Some tools might not
         * take the string literally. For example VS Code when code complete is requested in this
         * example `con&lt;cursor position&gt;` and a completion item with an `insertText` of
         * `console` is provided it will only insert `sole`. Therefore it is recommended to use
         * `textEdit` instead since it avoids additional client side interpretation.
         */
        std::optional<std::string> get_insert_text() const { return insert_text; }
        void set_insert_text(std::optional<std::string> value) { this->insert_text = value; }

        /**
         * The format of the insert text. The format applies to both the `insertText` property and
         * the `newText` property of a provided `textEdit`. If omitted defaults to
         * `InsertTextFormat.PlainText`.
         *
         * Please note that the insertTextFormat doesn't apply to `additionalTextEdits`.
         */
        std::optional<double> get_insert_text_format() const { return insert_text_format; }
        void set_insert_text_format(std::optional<double> value) { this->insert_text_format = value; }

        /**
         * How whitespace and indentation is handled during completion item insertion. If not
         * provided the client's default value depends on the
         * `textDocument.completion.insertTextMode` client capability.
         */
        std::optional<double> get_insert_text_mode() const { return insert_text_mode; }
        void set_insert_text_mode(std::optional<double> value) { this->insert_text_mode = value; }

        /**
         * The kind of this completion item. Based of the kind an icon is chosen by the editor. The
         * standardized set of available values is defined in `CompletionItemKind`.
         */
        std::optional<double> get_kind() const { return kind; }
        void set_kind(std::optional<double> value) { this->kind = value; }

        /**
         * The label of this completion item.
         *
         * The label property is also by default the text that is inserted when selecting this
         * completion.
         *
         * If label details are provided the label itself should be an unqualified name of the
         * completion item.
         */
        const std::string & get_label() const { return label; }
        std::string & get_mutable_label() { return label; }
        void set_label(const std::string & value) { this->label = value; }

        /**
         * Additional details for the label
         */
        std::optional<CompletionItemLabelDetails> get_label_details() const { return label_details; }
        void set_label_details(std::optional<CompletionItemLabelDetails> value) { this->label_details = value; }

        /**
         * Select this item when showing.
         *
         * *Note* that only one completion item can be selected and that the tool / client decides
         * which item that is. The rule is that the *first* item of those that match best is
         * selected.
         */
        std::optional<bool> get_preselect() const { return preselect; }
        void set_preselect(std::optional<bool> value) { this->preselect = value; }

        /**
         * A string that should be used when comparing this item with other items. When omitted the
         * label is used as the sort text for this item.
         */
        std::optional<std::string> get_sort_text() const { return sort_text; }
        void set_sort_text(std::optional<std::string> value) { this->sort_text = value; }

        /**
         * Tags for this completion item.
         */
        std::optional<std::vector<double>> get_tags() const { return tags; }
        void set_tags(std::optional<std::vector<double>> value) { this->tags = value; }

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
         */
        std::optional<Edit> get_text_edit() const { return text_edit; }
        void set_text_edit(std::optional<Edit> value) { this->text_edit = value; }

        /**
         * The edit text used if the completion item is part of a CompletionList and CompletionList
         * defines an item default for the text edit range.
         *
         * Clients will only honor this property if they opt into completion list item defaults
         * using the capability `completionList.itemDefaults`.
         *
         * If not provided and a list's default range is provided the label property is used as a
         * text.
         */
        std::optional<std::string> get_text_edit_text() const { return text_edit_text; }
        void set_text_edit_text(std::optional<std::string> value) { this->text_edit_text = value; }
    };
}
