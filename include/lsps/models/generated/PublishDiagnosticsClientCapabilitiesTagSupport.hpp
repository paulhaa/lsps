//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PublishDiagnosticsClientCapabilitiesTagSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Client supports the tag property to provide meta data about a diagnostic. Clients
     * supporting tags have to handle unknown tags gracefully.
     */

    using nlohmann::json;

    /**
     * Client supports the tag property to provide meta data about a diagnostic. Clients
     * supporting tags have to handle unknown tags gracefully.
     */
    class PublishDiagnosticsClientCapabilitiesTagSupport {
        public:
        PublishDiagnosticsClientCapabilitiesTagSupport() = default;
        virtual ~PublishDiagnosticsClientCapabilitiesTagSupport() = default;

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
}
