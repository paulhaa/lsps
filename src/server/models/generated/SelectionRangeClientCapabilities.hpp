//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SelectionRangeClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/selectionRange` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/selectionRange` request.
     */
    class SelectionRangeClientCapabilities {
        public:
        SelectionRangeClientCapabilities() = default;
        virtual ~SelectionRangeClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Whether implementation supports dynamic registration for selection range providers. If
         * this is set to `true` the client supports the new `SelectionRangeRegistrationOptions`
         * return value for the corresponding server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
}
