//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Moniker.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    enum class MonikerKind : int;
    enum class UniquenessLevel : int;
}

namespace lsps {
    /**
     * Moniker definition to match LSIF 0.5 moniker definition.
     */

    using nlohmann::json;

    /**
     * Moniker definition to match LSIF 0.5 moniker definition.
     */
    class Moniker {
        public:
        Moniker() = default;
        virtual ~Moniker() = default;

        private:
        std::string identifier;
        std::optional<MonikerKind> kind;
        std::string scheme;
        UniquenessLevel unique;

        public:
        /**
         * The identifier of the moniker. The value is opaque in LSIF however schema owners are
         * allowed to define the structure if they want.
         */
        const std::string & get_identifier() const { return identifier; }
        std::string & get_mutable_identifier() { return identifier; }
        void set_identifier(const std::string & value) { this->identifier = value; }

        /**
         * The moniker kind if known.
         */
        std::optional<MonikerKind> get_kind() const { return kind; }
        void set_kind(std::optional<MonikerKind> value) { this->kind = value; }

        /**
         * The scheme of the moniker. For example tsc or .Net
         */
        const std::string & get_scheme() const { return scheme; }
        std::string & get_mutable_scheme() { return scheme; }
        void set_scheme(const std::string & value) { this->scheme = value; }

        /**
         * The scope in which the moniker is unique
         */
        const UniquenessLevel & get_unique() const { return unique; }
        UniquenessLevel & get_mutable_unique() { return unique; }
        void set_unique(const UniquenessLevel & value) { this->unique = value; }
    };
}
