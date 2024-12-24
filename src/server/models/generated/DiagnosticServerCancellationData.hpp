//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DiagnosticServerCancellationData.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Cancellation data returned from a diagnostic request.
     */

    using nlohmann::json;

    /**
     * Cancellation data returned from a diagnostic request.
     */
    class DiagnosticServerCancellationData {
        public:
        DiagnosticServerCancellationData() = default;
        virtual ~DiagnosticServerCancellationData() = default;

        private:
        bool retrigger_request;

        public:
        const bool & get_retrigger_request() const { return retrigger_request; }
        bool & get_mutable_retrigger_request() { return retrigger_request; }
        void set_retrigger_request(const bool & value) { this->retrigger_request = value; }
    };
}
}
