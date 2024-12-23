//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionItemTagSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Client supports the tag property on a completion item. Clients supporting tags have to
     * handle unknown tags gracefully. Clients especially need to preserve unknown tags when
     * sending a completion item back to the server in a resolve call.
     */

    using nlohmann::json;

    /**
     * Client supports the tag property on a completion item. Clients supporting tags have to
     * handle unknown tags gracefully. Clients especially need to preserve unknown tags when
     * sending a completion item back to the server in a resolve call.
     */
    class CompletionItemTagSupport {
        public:
        CompletionItemTagSupport() = default;
        virtual ~CompletionItemTagSupport() = default;

        private:
        std::vector<double> value_set;

        public:
        /**
         * The tags supported by the client.
         */
        const std::vector<double> & get_value_set() const { return value_set; }
        std::vector<double> & get_mutable_value_set() { return value_set; }
        void set_value_set(const std::vector<double> & value) { this->value_set = value; }
    };
}
