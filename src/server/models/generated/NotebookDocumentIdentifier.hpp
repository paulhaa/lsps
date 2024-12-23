//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentIdentifier.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The notebook document that got closed.
     *
     * A literal to identify a notebook document in the client.
     *
     * The notebook document that got saved.
     */

    using nlohmann::json;

    /**
     * The notebook document that got closed.
     *
     * A literal to identify a notebook document in the client.
     *
     * The notebook document that got saved.
     */
    class NotebookDocumentIdentifier {
        public:
        NotebookDocumentIdentifier() = default;
        virtual ~NotebookDocumentIdentifier() = default;

        private:
        std::string uri;

        public:
        /**
         * The notebook document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
