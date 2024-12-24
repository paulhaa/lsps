//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class RenameRegistrationOptions {
        public:
        RenameRegistrationOptions() = default;
        virtual ~RenameRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<bool> prepare_provider;
        std::optional<bool> work_done_progress;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * Renames should be checked and tested before being executed.
         */
        std::optional<bool> get_prepare_provider() const { return prepare_provider; }
        void set_prepare_provider(std::optional<bool> value) { this->prepare_provider = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
