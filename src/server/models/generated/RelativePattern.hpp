//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RelativePattern.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "BaseUri.hpp"
#include "WorkspaceFolder.hpp"

namespace lsps {
    /**
     * A relative pattern is a helper to construct glob patterns that are matched relatively to
     * a base URI. The common value for a `baseUri` is a workspace folder root, but it can be
     * another absolute URI as well.
     */

    using nlohmann::json;

    /**
     * A relative pattern is a helper to construct glob patterns that are matched relatively to
     * a base URI. The common value for a `baseUri` is a workspace folder root, but it can be
     * another absolute URI as well.
     */
    class RelativePattern {
        public:
        RelativePattern() = default;
        virtual ~RelativePattern() = default;

        private:
        BaseUri base_uri;
        std::string pattern;

        public:
        /**
         * A workspace folder or a base URI to which this pattern will be matched against relatively.
         */
        const BaseUri & get_base_uri() const { return base_uri; }
        BaseUri & get_mutable_base_uri() { return base_uri; }
        void set_base_uri(const BaseUri & value) { this->base_uri = value; }

        /**
         * The actual glob pattern;
         */
        const std::string & get_pattern() const { return pattern; }
        std::string & get_mutable_pattern() { return pattern; }
        void set_pattern(const std::string & value) { this->pattern = value; }
    };
}
