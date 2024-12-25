//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ParameterInformationElement.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Documentation.hpp"
#include "DocumentationMarkupContent.hpp"
#include "ParameterInformationLabel.hpp"

namespace lsps {
namespace models {
    /**
     * Represents a parameter of a callable-signature. A parameter can have a label and a
     * doc-comment.
     */

    using nlohmann::json;

    /**
     * Represents a parameter of a callable-signature. A parameter can have a label and a
     * doc-comment.
     */
    class ParameterInformationElement {
        public:
        ParameterInformationElement() = default;
        virtual ~ParameterInformationElement() = default;

        private:
        std::optional<Documentation> documentation;
        ParameterInformationLabel label;

        public:
        /**
         * The human-readable doc-comment of this parameter. Will be shown in the UI but can be
         * omitted.
         */
        std::optional<Documentation> get_documentation() const { return documentation; }
        void set_documentation(std::optional<Documentation> value) { this->documentation = value; }

        /**
         * The label of this parameter information.
         *
         * Either a string or an inclusive start and exclusive end offsets within its containing
         * signature label. (see SignatureInformation.label). The offsets are based on a UTF-16
         * string representation as `Position` and `Range` does.
         *
         * *Note*: a label of type string should be a substring of its containing signature label.
         * Its intended use case is to highlight the parameter label part in the
         * `SignatureInformation.label`.
         */
        const ParameterInformationLabel & get_label() const { return label; }
        ParameterInformationLabel & get_mutable_label() { return label; }
        void set_label(const ParameterInformationLabel & value) { this->label = value; }
    };
}
}
