//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DidChangeConfigurationParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class DidChangeConfigurationParams {
        public:
        DidChangeConfigurationParams() = default;
        virtual ~DidChangeConfigurationParams() = default;

        private:
        LspAny settings;

        public:
        /**
         * The actual changed settings
         */
        LspAny get_settings() const { return settings; }
        void set_settings(LspAny value) { this->settings = value; }
    };
}
}
