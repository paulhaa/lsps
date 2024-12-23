//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     UnregistrationParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Unregistration.hpp"

namespace lsps {
    using nlohmann::json;

    class UnregistrationParams {
        public:
        UnregistrationParams() = default;
        virtual ~UnregistrationParams() = default;

        private:
        std::vector<Unregistration> unregisterations;

        public:
        const std::vector<Unregistration> & get_unregisterations() const { return unregisterations; }
        std::vector<Unregistration> & get_mutable_unregisterations() { return unregisterations; }
        void set_unregisterations(const std::vector<Unregistration> & value) { this->unregisterations = value; }
    };
}
