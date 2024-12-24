//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelpRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SignatureHelpRegistrationOptions {
        public:
        SignatureHelpRegistrationOptions() = default;
        virtual ~SignatureHelpRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<std::vector<std::string>> retrigger_characters;
        std::optional<std::vector<std::string>> trigger_characters;
        std::optional<bool> work_done_progress;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * List of characters that re-trigger signature help.
         *
         * These trigger characters are only active when signature help is already showing. All
         * trigger characters are also counted as re-trigger characters.
         */
        std::optional<std::vector<std::string>> get_retrigger_characters() const { return retrigger_characters; }
        void set_retrigger_characters(std::optional<std::vector<std::string>> value) { this->retrigger_characters = value; }

        /**
         * The characters that trigger signature help automatically.
         */
        std::optional<std::vector<std::string>> get_trigger_characters() const { return trigger_characters; }
        void set_trigger_characters(std::optional<std::vector<std::string>> value) { this->trigger_characters = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
