//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RegistrationParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Registration.hpp"

namespace lsps {
    using nlohmann::json;

    class RegistrationParams {
        public:
        RegistrationParams() = default;
        virtual ~RegistrationParams() = default;

        private:
        std::vector<Registration> registrations;

        public:
        const std::vector<Registration> & get_registrations() const { return registrations; }
        std::vector<Registration> & get_mutable_registrations() { return registrations; }
        void set_registrations(const std::vector<Registration> & value) { this->registrations = value; }
    };
}
