//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DiagnosticRelatedInformation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LocationClass.hpp"

namespace lsps {
namespace models {
    /**
     * Represents a related message and source code location for a diagnostic. This should be
     * used to point to code locations that cause or are related to a diagnostics, e.g when
     * duplicating a symbol in a scope.
     */

    using nlohmann::json;

    /**
     * Represents a related message and source code location for a diagnostic. This should be
     * used to point to code locations that cause or are related to a diagnostics, e.g when
     * duplicating a symbol in a scope.
     */
    class DiagnosticRelatedInformation {
        public:
        DiagnosticRelatedInformation() = default;
        virtual ~DiagnosticRelatedInformation() = default;

        private:
        LocationClass location;
        std::string message;

        public:
        /**
         * The location of this related diagnostic information.
         */
        const LocationClass & get_location() const { return location; }
        LocationClass & get_mutable_location() { return location; }
        void set_location(const LocationClass & value) { this->location = value; }

        /**
         * The message of this related diagnostic information.
         */
        const std::string & get_message() const { return message; }
        std::string & get_mutable_message() { return message; }
        void set_message(const std::string & value) { this->message = value; }
    };
}
}
