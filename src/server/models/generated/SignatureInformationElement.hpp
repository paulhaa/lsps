//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SignatureInformationElement.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"
#include "ParameterInformationElement.hpp"

namespace lsps {
namespace models {
    /**
     * Represents the signature of something callable. A signature can have a label, like a
     * function-name, a doc-comment, and a set of parameters.
     */

    using nlohmann::json;

    /**
     * Represents the signature of something callable. A signature can have a label, like a
     * function-name, a doc-comment, and a set of parameters.
     */
    class SignatureInformationElement {
        public:
        SignatureInformationElement() = default;
        virtual ~SignatureInformationElement() = default;

        private:
        std::optional<int64_t> active_parameter;
        std::optional<Documentation> documentation;
        std::string label;
        std::optional<std::vector<ParameterInformationElement>> parameters;

        public:
        /**
         * The index of the active parameter.
         *
         * If provided, this is used in place of `SignatureHelp.activeParameter`.
         */
        std::optional<int64_t> get_active_parameter() const { return active_parameter; }
        void set_active_parameter(std::optional<int64_t> value) { this->active_parameter = value; }

        /**
         * The human-readable doc-comment of this signature. Will be shown in the UI but can be
         * omitted.
         */
        std::optional<Documentation> get_documentation() const { return documentation; }
        void set_documentation(std::optional<Documentation> value) { this->documentation = value; }

        /**
         * The label of this signature. Will be shown in the UI.
         */
        const std::string & get_label() const { return label; }
        std::string & get_mutable_label() { return label; }
        void set_label(const std::string & value) { this->label = value; }

        /**
         * The parameters of this signature.
         */
        std::optional<std::vector<ParameterInformationElement>> get_parameters() const { return parameters; }
        void set_parameters(std::optional<std::vector<ParameterInformationElement>> value) { this->parameters = value; }
    };
}
}
