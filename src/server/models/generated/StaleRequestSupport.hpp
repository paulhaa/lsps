//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     StaleRequestSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Client capability that signals how the client handles stale requests (e.g. a request for
     * which the client will not process the response anymore since the information is outdated).
     */

    using nlohmann::json;

    /**
     * Client capability that signals how the client handles stale requests (e.g. a request for
     * which the client will not process the response anymore since the information is outdated).
     */
    class StaleRequestSupport {
        public:
        StaleRequestSupport() = default;
        virtual ~StaleRequestSupport() = default;

        private:
        bool cancel;
        std::vector<std::string> retry_on_content_modified;

        public:
        /**
         * The client will actively cancel the request.
         */
        const bool & get_cancel() const { return cancel; }
        bool & get_mutable_cancel() { return cancel; }
        void set_cancel(const bool & value) { this->cancel = value; }

        /**
         * The list of requests for which the client will retry the request if it receives a
         * response with error code `ContentModified``
         */
        const std::vector<std::string> & get_retry_on_content_modified() const { return retry_on_content_modified; }
        std::vector<std::string> & get_mutable_retry_on_content_modified() { return retry_on_content_modified; }
        void set_retry_on_content_modified(const std::vector<std::string> & value) { this->retry_on_content_modified = value; }
    };
}
