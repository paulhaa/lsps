//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     VersionedNotebookDocumentIdentifier.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The notebook document that did change. The version number points to the version after all
     * provided changes have been applied.
     *
     * A versioned notebook document identifier.
     */

    using nlohmann::json;

    /**
     * The notebook document that did change. The version number points to the version after all
     * provided changes have been applied.
     *
     * A versioned notebook document identifier.
     */
    class VersionedNotebookDocumentIdentifier {
        public:
        VersionedNotebookDocumentIdentifier() = default;
        virtual ~VersionedNotebookDocumentIdentifier() = default;

        private:
        std::string uri;
        int64_t version;

        public:
        /**
         * The notebook document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number of this notebook document.
         */
        const int64_t & get_version() const { return version; }
        int64_t & get_mutable_version() { return version; }
        void set_version(const int64_t & value) { this->version = value; }
    };
}
}
