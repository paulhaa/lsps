//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureInformation.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ParameterInformation.hpp"

namespace lsps {
namespace models {
    enum class MarkupKind : int;
}
}

namespace lsps {
namespace models {
    /**
     * The client supports the following `SignatureInformation` specific properties.
     */

    using nlohmann::json;

    /**
     * The client supports the following `SignatureInformation` specific properties.
     */
    class SignatureInformation {
        public:
        SignatureInformation() = default;
        virtual ~SignatureInformation() = default;

        private:
        std::optional<bool> active_parameter_support;
        std::optional<std::vector<MarkupKind>> documentation_format;
        std::optional<ParameterInformation> parameter_information;

        public:
        /**
         * The client supports the `activeParameter` property on `SignatureInformation` literal.
         */
        std::optional<bool> get_active_parameter_support() const { return active_parameter_support; }
        void set_active_parameter_support(std::optional<bool> value) { this->active_parameter_support = value; }

        /**
         * Client supports the follow content formats for the documentation property. The order
         * describes the preferred format of the client.
         */
        std::optional<std::vector<MarkupKind>> get_documentation_format() const { return documentation_format; }
        void set_documentation_format(std::optional<std::vector<MarkupKind>> value) { this->documentation_format = value; }

        /**
         * Client capabilities specific to parameter information.
         */
        std::optional<ParameterInformation> get_parameter_information() const { return parameter_information; }
        void set_parameter_information(std::optional<ParameterInformation> value) { this->parameter_information = value; }
    };
}
}
