//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PartialResultParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    /**
     * /**  * Window specific client capabilities.  * window?: {     /**      * Whether client
     * supports server initiated progress using the      * `window/workDoneProgress/create`
     * request.      *     workDoneProgress?: boolean; };
     *
     * { "textDocument": {     "uri": "file:///folder/file.ts" }, "position": {     "line":
     * 9,     "character": 5 }, "context": {     "includeDeclaration": true }, // The token used
     * to report work done progress. "workDoneToken": "1d546990-40a3-4b77-b134-46622995f6ae", //
     * The token used to report partial result progress. "partialResultToken":
     * "5f6f349e-4f81-4a3b-afff-ee04bff96804" }
     */

    using nlohmann::json;

    /**
     * /**  * Window specific client capabilities.  * window?: {     /**      * Whether client
     * supports server initiated progress using the      * `window/workDoneProgress/create`
     * request.      *     workDoneProgress?: boolean; };
     *
     * { "textDocument": {     "uri": "file:///folder/file.ts" }, "position": {     "line":
     * 9,     "character": 5 }, "context": {     "includeDeclaration": true }, // The token used
     * to report work done progress. "workDoneToken": "1d546990-40a3-4b77-b134-46622995f6ae", //
     * The token used to report partial result progress. "partialResultToken":
     * "5f6f349e-4f81-4a3b-afff-ee04bff96804" }
     */
    class PartialResultParams {
        public:
        PartialResultParams() = default;
        virtual ~PartialResultParams() = default;

        private:
        std::optional<ProgressToken> partial_result_token;

        public:
        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }
    };
}
}
