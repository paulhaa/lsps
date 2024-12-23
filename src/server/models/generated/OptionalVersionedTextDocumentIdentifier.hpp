//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     OptionalVersionedTextDocumentIdentifier.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * The text document to change.
     */

    using nlohmann::json;

    /**
     * The text document to change.
     */
    class OptionalVersionedTextDocumentIdentifier {
        public:
        OptionalVersionedTextDocumentIdentifier() = default;
        virtual ~OptionalVersionedTextDocumentIdentifier() = default;

        private:
        std::string uri;
        std::optional<int64_t> version;

        public:
        /**
         * The text document's URI.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * The version number of this document. If an optional versioned text document identifier is
         * sent from the server to the client and the file is not open in the editor (the server has
         * not received an open notification before) the server can send `null` to indicate that the
         * version is known and the content on disk is the master (as specified with document
         * content ownership).
         *
         * The version number of a document will increase after each change, including undo/redo.
         * The number doesn't need to be consecutive.
         */
        std::optional<int64_t> get_version() const { return version; }
        void set_version(std::optional<int64_t> value) { this->version = value; }
    };
}
