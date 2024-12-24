//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     StaticRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Static registration options to be returned in the initialize request.
     */

    using nlohmann::json;

    /**
     * Static registration options to be returned in the initialize request.
     */
    class StaticRegistrationOptions {
        public:
        StaticRegistrationOptions() = default;
        virtual ~StaticRegistrationOptions() = default;

        private:
        std::optional<std::string> id;

        public:
        /**
         * The id used to register the request. The id can be used to deregister the request again.
         * See also Registration#id.
         */
        std::optional<std::string> get_id() const { return id; }
        void set_id(std::optional<std::string> value) { this->id = value; }
    };
}
}
