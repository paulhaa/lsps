//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensLegend.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The legend used by the server
     */

    using nlohmann::json;

    /**
     * The legend used by the server
     */
    class SemanticTokensLegend {
        public:
        SemanticTokensLegend() = default;
        virtual ~SemanticTokensLegend() = default;

        private:
        std::vector<std::string> token_modifiers;
        std::vector<std::string> token_types;

        public:
        /**
         * The token modifiers a server uses.
         */
        const std::vector<std::string> & get_token_modifiers() const { return token_modifiers; }
        std::vector<std::string> & get_mutable_token_modifiers() { return token_modifiers; }
        void set_token_modifiers(const std::vector<std::string> & value) { this->token_modifiers = value; }

        /**
         * The token types a server uses.
         */
        const std::vector<std::string> & get_token_types() const { return token_types; }
        std::vector<std::string> & get_mutable_token_types() { return token_types; }
        void set_token_types(const std::vector<std::string> & value) { this->token_types = value; }
    };
}
}
