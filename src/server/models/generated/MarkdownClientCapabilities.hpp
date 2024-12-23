//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     MarkdownClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * Client capabilities specific to the client's markdown parser.
     *
     * Client capabilities specific to the used markdown parser.
     */

    using nlohmann::json;

    /**
     * Client capabilities specific to the client's markdown parser.
     *
     * Client capabilities specific to the used markdown parser.
     */
    class MarkdownClientCapabilities {
        public:
        MarkdownClientCapabilities() = default;
        virtual ~MarkdownClientCapabilities() = default;

        private:
        std::optional<std::vector<std::string>> allowed_tags;
        std::string parser;
        std::optional<std::string> version;

        public:
        /**
         * A list of HTML tags that the client allows / supports in Markdown.
         */
        std::optional<std::vector<std::string>> get_allowed_tags() const { return allowed_tags; }
        void set_allowed_tags(std::optional<std::vector<std::string>> value) { this->allowed_tags = value; }

        /**
         * The name of the parser.
         */
        const std::string & get_parser() const { return parser; }
        std::string & get_mutable_parser() { return parser; }
        void set_parser(const std::string & value) { this->parser = value; }

        /**
         * The version of the parser.
         */
        std::optional<std::string> get_version() const { return version; }
        void set_version(std::optional<std::string> value) { this->version = value; }
    };
}
