//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ShowDocumentClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * Client capabilities for the show document request.
     */

    using nlohmann::json;

    /**
     * Client capabilities for the show document request.
     */
    class ShowDocumentClientCapabilities {
        public:
        ShowDocumentClientCapabilities() = default;
        virtual ~ShowDocumentClientCapabilities() = default;

        private:
        bool support;

        public:
        /**
         * The client has support for the show document request.
         */
        const bool & get_support() const { return support; }
        bool & get_mutable_support() { return support; }
        void set_support(const bool & value) { this->support = value; }
    };
}
}
