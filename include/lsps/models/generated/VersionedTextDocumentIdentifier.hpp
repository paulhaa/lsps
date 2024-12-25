//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     VersionedTextDocumentIdentifier.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
namespace models {
    /**
     * The document that did change. The version number points to the version after all provided
     * content changes have been applied.
     */

    using nlohmann::json;

    /**
     * The document that did change. The version number points to the version after all provided
     * content changes have been applied.
     */
    class VersionedTextDocumentIdentifier {
        public:
        VersionedTextDocumentIdentifier() = default;
        virtual ~VersionedTextDocumentIdentifier() = default;

        private:
        std::string uri;
        int64_t version;

        public:
        /**
         * The text document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number of this document.
         *
         * The version number of a document will increase after each change, including undo/redo.
         * The number doesn't need to be consecutive.
         */
        const int64_t & get_version() const { return version; }
        int64_t & get_mutable_version() { return version; }
        void set_version(const int64_t & value) { this->version = value; }
    };
}
}
