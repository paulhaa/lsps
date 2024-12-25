//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeWatchedFilesClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `workspace/didChangeWatchedFiles` notification.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `workspace/didChangeWatchedFiles` notification.
     */
    class DidChangeWatchedFilesClientCapabilities {
        public:
        DidChangeWatchedFilesClientCapabilities() = default;
        virtual ~DidChangeWatchedFilesClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<bool> relative_pattern_support;

        public:
        /**
         * Did change watched files notification supports dynamic registration. Please note that the
         * current protocol doesn't support static configuration for file changes from the server
         * side.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Whether the client has support for relative patterns or not.
         */
        std::optional<bool> get_relative_pattern_support() const { return relative_pattern_support; }
        void set_relative_pattern_support(std::optional<bool> value) { this->relative_pattern_support = value; }
    };
}
}
