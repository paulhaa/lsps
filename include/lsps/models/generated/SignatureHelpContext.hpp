//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelpContext.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SignatureHelp.hpp"

namespace lsps {
namespace models {
    /**
     * Additional information about the context in which a signature help request was
     * triggered.
     *
     * The signature help context. This is only available if the client specifies to send this
     * using the client capability `textDocument.signatureHelp.contextSupport === true`
     */

    using nlohmann::json;

    /**
     * Additional information about the context in which a signature help request was
     * triggered.
     *
     * The signature help context. This is only available if the client specifies to send this
     * using the client capability `textDocument.signatureHelp.contextSupport === true`
     */
    class SignatureHelpContext {
        public:
        SignatureHelpContext() = default;
        virtual ~SignatureHelpContext() = default;

        private:
        std::optional<SignatureHelp> active_signature_help;
        bool is_retrigger;
        std::optional<std::string> trigger_character;
        double trigger_kind;

        public:
        /**
         * The currently active `SignatureHelp`.
         *
         * The `activeSignatureHelp` has its `SignatureHelp.activeSignature` field updated based on
         * the user navigating through available signatures.
         */
        std::optional<SignatureHelp> get_active_signature_help() const { return active_signature_help; }
        void set_active_signature_help(std::optional<SignatureHelp> value) { this->active_signature_help = value; }

        /**
         * `true` if signature help was already showing when it was triggered.
         *
         * Retriggers occur when the signature help is already active and can be caused by actions
         * such as typing a trigger character, a cursor move, or document content changes.
         */
        const bool & get_is_retrigger() const { return is_retrigger; }
        bool & get_mutable_is_retrigger() { return is_retrigger; }
        void set_is_retrigger(const bool & value) { this->is_retrigger = value; }

        /**
         * Character that caused signature help to be triggered.
         *
         * This is undefined when triggerKind !== SignatureHelpTriggerKind.TriggerCharacter
         */
        std::optional<std::string> get_trigger_character() const { return trigger_character; }
        void set_trigger_character(std::optional<std::string> value) { this->trigger_character = value; }

        /**
         * Action that caused signature help to be triggered.
         */
        const double & get_trigger_kind() const { return trigger_kind; }
        double & get_mutable_trigger_kind() { return trigger_kind; }
        void set_trigger_kind(const double & value) { this->trigger_kind = value; }
    };
}
}
