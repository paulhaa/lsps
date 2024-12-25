//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     General.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "MarkdownClientCapabilities.hpp"
#include "RegularExpressionsClientCapabilities.hpp"
#include "StaleRequestSupport.hpp"

namespace lsps {
namespace models {
    /**
     * General client capabilities.
     */

    using nlohmann::json;

    /**
     * General client capabilities.
     */
    class General {
        public:
        General() = default;
        virtual ~General() = default;

        private:
        std::optional<MarkdownClientCapabilities> markdown;
        std::optional<std::vector<std::string>> position_encodings;
        std::optional<RegularExpressionsClientCapabilities> regular_expressions;
        std::optional<StaleRequestSupport> stale_request_support;

        public:
        /**
         * Client capabilities specific to the client's markdown parser.
         */
        std::optional<MarkdownClientCapabilities> get_markdown() const { return markdown; }
        void set_markdown(std::optional<MarkdownClientCapabilities> value) { this->markdown = value; }

        /**
         * The position encodings supported by the client. Client and server have to agree on the
         * same position encoding to ensure that offsets (e.g. character position in a line) are
         * interpreted the same on both side.
         *
         * To keep the protocol backwards compatible the following applies: if the value 'utf-16' is
         * missing from the array of position encodings servers can assume that the client supports
         * UTF-16. UTF-16 is therefore a mandatory encoding.
         *
         * If omitted it defaults to ['utf-16'].
         *
         * Implementation considerations: since the conversion from one encoding into another
         * requires the content of the file / line the conversion is best done where the file is
         * read which is usually on the server side.
         */
        std::optional<std::vector<std::string>> get_position_encodings() const { return position_encodings; }
        void set_position_encodings(std::optional<std::vector<std::string>> value) { this->position_encodings = value; }

        /**
         * Client capabilities specific to regular expressions.
         */
        std::optional<RegularExpressionsClientCapabilities> get_regular_expressions() const { return regular_expressions; }
        void set_regular_expressions(std::optional<RegularExpressionsClientCapabilities> value) { this->regular_expressions = value; }

        /**
         * Client capability that signals how the client handles stale requests (e.g. a request for
         * which the client will not process the response anymore since the information is outdated).
         */
        std::optional<StaleRequestSupport> get_stale_request_support() const { return stale_request_support; }
        void set_stale_request_support(std::optional<StaleRequestSupport> value) { this->stale_request_support = value; }
    };
}
}
