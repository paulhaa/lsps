//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueVariableLookup.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * Provide inline value through a variable lookup.
     *
     * If only a range is specified, the variable name will be extracted from the underlying
     * document.
     *
     * An optional variable name can be used to override the extracted name.
     */

    using nlohmann::json;

    /**
     * Provide inline value through a variable lookup.
     *
     * If only a range is specified, the variable name will be extracted from the underlying
     * document.
     *
     * An optional variable name can be used to override the extracted name.
     */
    class InlineValueVariableLookup {
        public:
        InlineValueVariableLookup() = default;
        virtual ~InlineValueVariableLookup() = default;

        private:
        bool case_sensitive_lookup;
        PurpleRange range;
        std::optional<std::string> variable_name;

        public:
        /**
         * How to perform the lookup.
         */
        const bool & get_case_sensitive_lookup() const { return case_sensitive_lookup; }
        bool & get_mutable_case_sensitive_lookup() { return case_sensitive_lookup; }
        void set_case_sensitive_lookup(const bool & value) { this->case_sensitive_lookup = value; }

        /**
         * The document range for which the inline value applies. The range is used to extract the
         * variable name from the underlying document.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * If specified the name of the variable to look up.
         */
        std::optional<std::string> get_variable_name() const { return variable_name; }
        void set_variable_name(std::optional<std::string> value) { this->variable_name = value; }
    };
}
}
