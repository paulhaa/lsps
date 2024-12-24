//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelpOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The server provides signature help support.
     */

    using nlohmann::json;

    /**
     * The server provides signature help support.
     */
    class SignatureHelpOptions {
        public:
        SignatureHelpOptions() = default;
        virtual ~SignatureHelpOptions() = default;

        private:
        std::optional<std::vector<std::string>> retrigger_characters;
        std::optional<std::vector<std::string>> trigger_characters;
        std::optional<bool> work_done_progress;

        public:
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
