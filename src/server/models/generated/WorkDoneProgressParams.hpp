//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkDoneProgressParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    /**
     * {     "textDocument": {         "uri": "file:///folder/file.ts"     },     "position":
     * {         "line": 9,         "character": 5     },     "context": {
     * "includeDeclaration": true     },     // The token used to report work done progress.
     * "workDoneToken": "1d546990-40a3-4b77-b134-46622995f6ae" }
     */

    using nlohmann::json;

    /**
     * {     "textDocument": {         "uri": "file:///folder/file.ts"     },     "position":
     * {         "line": 9,         "character": 5     },     "context": {
     * "includeDeclaration": true     },     // The token used to report work done progress.
     * "workDoneToken": "1d546990-40a3-4b77-b134-46622995f6ae" }
     */
    class WorkDoneProgressParams {
        public:
        WorkDoneProgressParams() = default;
        virtual ~WorkDoneProgressParams() = default;

        private:
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
}
