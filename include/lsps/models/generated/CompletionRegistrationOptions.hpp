//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CompletionRegistrationOptionsCompletionItem.hpp"
#include "DocumentFilter.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CompletionRegistrationOptions {
        public:
        CompletionRegistrationOptions() = default;
        virtual ~CompletionRegistrationOptions() = default;

        private:
        std::optional<std::vector<std::string>> all_commit_characters;
        std::optional<CompletionRegistrationOptionsCompletionItem> completion_item;
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<bool> resolve_provider;
        std::optional<std::vector<std::string>> trigger_characters;
        std::optional<bool> work_done_progress;

        public:
        /**
         * The list of all possible characters that commit a completion. This field can be used if
         * clients don't support individual commit characters per completion item. See client
         * capability `completion.completionItem.commitCharactersSupport`.
         *
         * If a server provides both `allCommitCharacters` and commit characters on an individual
         * completion item the ones on the completion item win.
         */
        std::optional<std::vector<std::string>> get_all_commit_characters() const { return all_commit_characters; }
        void set_all_commit_characters(std::optional<std::vector<std::string>> value) { this->all_commit_characters = value; }

        /**
         * The server supports the following `CompletionItem` specific capabilities.
         */
        std::optional<CompletionRegistrationOptionsCompletionItem> get_completion_item() const { return completion_item; }
        void set_completion_item(std::optional<CompletionRegistrationOptionsCompletionItem> value) { this->completion_item = value; }

        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * The server provides support to resolve additional information for a completion item.
         */
        std::optional<bool> get_resolve_provider() const { return resolve_provider; }
        void set_resolve_provider(std::optional<bool> value) { this->resolve_provider = value; }

        /**
         * The additional characters, beyond the defaults provided by the client (typically
         * [a-zA-Z]), that should automatically trigger a completion request. For example `.` in
         * JavaScript represents the beginning of an object property or method and is thus a good
         * candidate for triggering a completion request.
         *
         * Most tools trigger a completion request automatically without explicitly requesting it
         * using a keyboard shortcut (e.g. Ctrl+Space). Typically they do so when the user starts to
         * type an identifier. For example if the user types `c` in a JavaScript file code complete
         * will automatically pop up present `console` besides others as a completion item.
         * Characters that make up identifiers don't need to be listed here.
         */
        std::optional<std::vector<std::string>> get_trigger_characters() const { return trigger_characters; }
        void set_trigger_characters(std::optional<std::vector<std::string>> value) { this->trigger_characters = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
