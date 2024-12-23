//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceSymbolParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"

namespace lsps {
    /**
     * The parameters of a Workspace Symbol Request.
     */

    using nlohmann::json;

    /**
     * The parameters of a Workspace Symbol Request.
     */
    class WorkspaceSymbolParams {
        public:
        WorkspaceSymbolParams() = default;
        virtual ~WorkspaceSymbolParams() = default;

        private:
        std::optional<ProgressToken> partial_result_token;
        std::string query;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * A query string to filter symbols by. Clients may send an empty string here to request all
         * symbols.
         */
        const std::string & get_query() const { return query; }
        std::string & get_mutable_query() { return query; }
        void set_query(const std::string & value) { this->query = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
