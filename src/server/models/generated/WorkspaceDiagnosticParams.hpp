//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     WorkspaceDiagnosticParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ProgressToken.hpp"
#include "PreviousResultId.hpp"

namespace lsps {
    /**
     * Parameters of the workspace diagnostic request.
     */

    using nlohmann::json;

    /**
     * Parameters of the workspace diagnostic request.
     */
    class WorkspaceDiagnosticParams {
        public:
        WorkspaceDiagnosticParams() = default;
        virtual ~WorkspaceDiagnosticParams() = default;

        private:
        std::optional<std::string> identifier;
        std::optional<ProgressToken> partial_result_token;
        std::vector<PreviousResultId> previous_result_ids;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The additional identifier provided during registration.
         */
        std::optional<std::string> get_identifier() const { return identifier; }
        void set_identifier(std::optional<std::string> value) { this->identifier = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * The currently known diagnostic reports with their previous result ids.
         */
        const std::vector<PreviousResultId> & get_previous_result_ids() const { return previous_result_ids; }
        std::vector<PreviousResultId> & get_mutable_previous_result_ids() { return previous_result_ids; }
        void set_previous_result_ids(const std::vector<PreviousResultId> & value) { this->previous_result_ids = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
