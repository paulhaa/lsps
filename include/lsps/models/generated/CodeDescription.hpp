//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CodeDescription.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * An optional property to describe the error code.
     *
     * Structure to capture a description for an error code.
     */

    using nlohmann::json;

    /**
     * An optional property to describe the error code.
     *
     * Structure to capture a description for an error code.
     */
    class CodeDescription {
        public:
        CodeDescription() = default;
        virtual ~CodeDescription() = default;

        private:
        std::string href;

        public:
        /**
         * An URI to open with more information about the diagnostic error.
         */
        const std::string & get_href() const { return href; }
        std::string & get_mutable_href() { return href; }
        void set_href(const std::string & value) { this->href = value; }
    };
}
}
