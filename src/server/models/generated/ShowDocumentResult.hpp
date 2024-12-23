//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ShowDocumentResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The result of an show document request.
     */

    using nlohmann::json;

    /**
     * The result of an show document request.
     */
    class ShowDocumentResult {
        public:
        ShowDocumentResult() = default;
        virtual ~ShowDocumentResult() = default;

        private:
        bool success;

        public:
        /**
         * A boolean indicating if the show was successful.
         */
        const bool & get_success() const { return success; }
        bool & get_mutable_success() { return success; }
        void set_success(const bool & value) { this->success = value; }
    };
}
