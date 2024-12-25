//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Requests.hpp"

namespace lsps {
namespace models {
    enum class TokenFormat : int;
}
}

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the various semantic token requests.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the various semantic token requests.
     */
    class SemanticTokensClientCapabilities {
        public:
        SemanticTokensClientCapabilities() = default;
        virtual ~SemanticTokensClientCapabilities() = default;

        private:
        std::optional<bool> augments_syntax_tokens;
        std::optional<bool> dynamic_registration;
        std::vector<TokenFormat> formats;
        std::optional<bool> multiline_token_support;
        std::optional<bool> overlapping_token_support;
        Requests requests;
        std::optional<bool> server_cancel_support;
        std::vector<std::string> token_modifiers;
        std::vector<std::string> token_types;

        public:
        /**
         * Whether the client uses semantic tokens to augment existing syntax tokens. If set to
         * `true` client side created syntax tokens and semantic tokens are both used for
         * colorization. If set to `false` the client only uses the returned semantic tokens for
         * colorization.
         *
         * If the value is `undefined` then the client behavior is not specified.
         */
        std::optional<bool> get_augments_syntax_tokens() const { return augments_syntax_tokens; }
        void set_augments_syntax_tokens(std::optional<bool> value) { this->augments_syntax_tokens = value; }

        /**
         * Whether implementation supports dynamic registration. If this is set to `true` the client
         * supports the new `(TextDocumentRegistrationOptions &amp; StaticRegistrationOptions)`
         * return value for the corresponding server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * The formats the clients supports.
         */
        const std::vector<TokenFormat> & get_formats() const { return formats; }
        std::vector<TokenFormat> & get_mutable_formats() { return formats; }
        void set_formats(const std::vector<TokenFormat> & value) { this->formats = value; }

        /**
         * Whether the client supports tokens that can span multiple lines.
         */
        std::optional<bool> get_multiline_token_support() const { return multiline_token_support; }
        void set_multiline_token_support(std::optional<bool> value) { this->multiline_token_support = value; }

        /**
         * Whether the client supports tokens that can overlap each other.
         */
        std::optional<bool> get_overlapping_token_support() const { return overlapping_token_support; }
        void set_overlapping_token_support(std::optional<bool> value) { this->overlapping_token_support = value; }

        /**
         * Which requests the client supports and might send to the server depending on the server's
         * capability. Please note that clients might not show semantic tokens or degrade some of
         * the user experience if a range or full request is advertised by the client but not
         * provided by the server. If for example the client capability `requests.full` and
         * `request.range` are both set to true but the server only provides a range provider the
         * client might not render a minimap correctly or might even decide to not show any semantic
         * tokens at all.
         */
        const Requests & get_requests() const { return requests; }
        Requests & get_mutable_requests() { return requests; }
        void set_requests(const Requests & value) { this->requests = value; }

        /**
         * Whether the client allows the server to actively cancel a semantic token request, e.g.
         * supports returning ErrorCodes.ServerCancelled. If a server does the client needs to
         * retrigger the request.
         */
        std::optional<bool> get_server_cancel_support() const { return server_cancel_support; }
        void set_server_cancel_support(std::optional<bool> value) { this->server_cancel_support = value; }

        /**
         * The token modifiers that the client supports.
         */
        const std::vector<std::string> & get_token_modifiers() const { return token_modifiers; }
        std::vector<std::string> & get_mutable_token_modifiers() { return token_modifiers; }
        void set_token_modifiers(const std::vector<std::string> & value) { this->token_modifiers = value; }

        /**
         * The token types that the client supports.
         */
        const std::vector<std::string> & get_token_types() const { return token_types; }
        std::vector<std::string> & get_mutable_token_types() { return token_types; }
        void set_token_types(const std::vector<std::string> & value) { this->token_types = value; }
    };
}
}
