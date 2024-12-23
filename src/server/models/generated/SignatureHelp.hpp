//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureHelp.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SignatureInformationElement.hpp"

namespace lsps {
    /**
     * Signature help represents the signature of something callable. There can be multiple
     * signature but only one active and only one active parameter.
     *
     * The currently active `SignatureHelp`.
     *
     * The `activeSignatureHelp` has its `SignatureHelp.activeSignature` field updated based on
     * the user navigating through available signatures.
     */

    using nlohmann::json;

    /**
     * Signature help represents the signature of something callable. There can be multiple
     * signature but only one active and only one active parameter.
     *
     * The currently active `SignatureHelp`.
     *
     * The `activeSignatureHelp` has its `SignatureHelp.activeSignature` field updated based on
     * the user navigating through available signatures.
     */
    class SignatureHelp {
        public:
        SignatureHelp() = default;
        virtual ~SignatureHelp() = default;

        private:
        std::optional<int64_t> active_parameter;
        std::optional<int64_t> active_signature;
        std::vector<SignatureInformationElement> signatures;

        public:
        /**
         * The active parameter of the active signature. If omitted or the value lies outside the
         * range of `signatures[activeSignature].parameters` defaults to 0 if the active signature
         * has parameters. If the active signature has no parameters it is ignored. In future
         * version of the protocol this property might become mandatory to better express the active
         * parameter if the active signature does have any.
         */
        std::optional<int64_t> get_active_parameter() const { return active_parameter; }
        void set_active_parameter(std::optional<int64_t> value) { this->active_parameter = value; }

        /**
         * The active signature. If omitted or the value lies outside the range of `signatures` the
         * value defaults to zero or is ignore if the `SignatureHelp` as no signatures.
         *
         * Whenever possible implementors should make an active decision about the active signature
         * and shouldn't rely on a default value.
         *
         * In future version of the protocol this property might become mandatory to better express
         * this.
         */
        std::optional<int64_t> get_active_signature() const { return active_signature; }
        void set_active_signature(std::optional<int64_t> value) { this->active_signature = value; }

        /**
         * One or more signatures. If no signatures are available the signature help request should
         * return `null`.
         */
        const std::vector<SignatureInformationElement> & get_signatures() const { return signatures; }
        std::vector<SignatureInformationElement> & get_mutable_signatures() { return signatures; }
        void set_signatures(const std::vector<SignatureInformationElement> & value) { this->signatures = value; }
    };
}
