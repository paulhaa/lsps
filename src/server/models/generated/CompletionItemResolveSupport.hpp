//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CompletionItemResolveSupport.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Indicates which properties a client can resolve lazily on a completion item. Before
     * version 3.16.0 only the predefined properties `documentation` and `detail` could be
     * resolved lazily.
     */

    using nlohmann::json;

    /**
     * Indicates which properties a client can resolve lazily on a completion item. Before
     * version 3.16.0 only the predefined properties `documentation` and `detail` could be
     * resolved lazily.
     */
    class CompletionItemResolveSupport {
        public:
        CompletionItemResolveSupport() = default;
        virtual ~CompletionItemResolveSupport() = default;

        private:
        std::vector<std::string> properties;

        public:
        /**
         * The properties that a client can resolve lazily.
         */
        const std::vector<std::string> & get_properties() const { return properties; }
        std::vector<std::string> & get_mutable_properties() { return properties; }
        void set_properties(const std::vector<std::string> & value) { this->properties = value; }
    };
}
}
