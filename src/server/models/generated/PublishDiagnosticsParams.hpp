//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PublishDiagnosticsParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Diagnostic.hpp"

namespace lsps {
    using nlohmann::json;

    class PublishDiagnosticsParams {
        public:
        PublishDiagnosticsParams() = default;
        virtual ~PublishDiagnosticsParams() = default;

        private:
        std::vector<Diagnostic> diagnostics;
        std::string uri;
        std::optional<int64_t> version;

        public:
        /**
         * An array of diagnostic information items.
         */
        const std::vector<Diagnostic> & get_diagnostics() const { return diagnostics; }
        std::vector<Diagnostic> & get_mutable_diagnostics() { return diagnostics; }
        void set_diagnostics(const std::vector<Diagnostic> & value) { this->diagnostics = value; }

        /**
         * The URI for which diagnostic information is reported.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }

        /**
         * Optional the version number of the document the diagnostics are published for.
         */
        std::optional<int64_t> get_version() const { return version; }
        void set_version(std::optional<int64_t> value) { this->version = value; }
    };
}
