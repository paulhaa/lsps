//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ReferenceContext.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ReferenceContext {
        public:
        ReferenceContext() = default;
        virtual ~ReferenceContext() = default;

        private:
        bool include_declaration;

        public:
        /**
         * Include the declaration of the current symbol.
         */
        const bool & get_include_declaration() const { return include_declaration; }
        bool & get_mutable_include_declaration() { return include_declaration; }
        void set_include_declaration(const bool & value) { this->include_declaration = value; }
    };
}
}
