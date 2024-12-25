//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RegularExpressionsClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Client capabilities specific to regular expressions.
     */

    using nlohmann::json;

    /**
     * Client capabilities specific to regular expressions.
     */
    class RegularExpressionsClientCapabilities {
        public:
        RegularExpressionsClientCapabilities() = default;
        virtual ~RegularExpressionsClientCapabilities() = default;

        private:
        std::string engine;
        std::optional<std::string> version;

        public:
        /**
         * The engine's name.
         */
        const std::string & get_engine() const { return engine; }
        std::string & get_mutable_engine() { return engine; }
        void set_engine(const std::string & value) { this->engine = value; }

        /**
         * The engine's version.
         */
        std::optional<std::string> get_version() const { return version; }
        void set_version(std::optional<std::string> value) { this->version = value; }
    };
}
}
