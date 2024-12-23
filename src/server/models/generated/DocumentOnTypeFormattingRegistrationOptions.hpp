//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentOnTypeFormattingRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
    using nlohmann::json;

    class DocumentOnTypeFormattingRegistrationOptions {
        public:
        DocumentOnTypeFormattingRegistrationOptions() = default;
        virtual ~DocumentOnTypeFormattingRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::string first_trigger_character;
        std::optional<std::vector<std::string>> more_trigger_character;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * A character on which formatting should be triggered, like `{`.
         */
        const std::string & get_first_trigger_character() const { return first_trigger_character; }
        std::string & get_mutable_first_trigger_character() { return first_trigger_character; }
        void set_first_trigger_character(const std::string & value) { this->first_trigger_character = value; }

        /**
         * More trigger characters.
         */
        std::optional<std::vector<std::string>> get_more_trigger_character() const { return more_trigger_character; }
        void set_more_trigger_character(std::optional<std::vector<std::string>> value) { this->more_trigger_character = value; }
    };
}
