//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     HoverClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    enum class MarkupKind : int;
}

namespace lsps {
    /**
     * Capabilities specific to the `textDocument/hover` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/hover` request.
     */
    class HoverClientCapabilities {
        public:
        HoverClientCapabilities() = default;
        virtual ~HoverClientCapabilities() = default;

        private:
        std::optional<std::vector<MarkupKind>> content_format;
        std::optional<bool> dynamic_registration;

        public:
        /**
         * Client supports the follow content formats if the content property refers to a `literal
         * of type MarkupContent`. The order describes the preferred format of the client.
         */
        std::optional<std::vector<MarkupKind>> get_content_format() const { return content_format; }
        void set_content_format(std::optional<std::vector<MarkupKind>> value) { this->content_format = value; }

        /**
         * Whether hover supports dynamic registration.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }
    };
}
