//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     TextContent.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "TextDocumentContentChangeEvent.hpp"
#include "VersionedTextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class TextContent {
        public:
        TextContent() = default;
        virtual ~TextContent() = default;

        private:
        std::vector<TextDocumentContentChangeEvent> changes;
        VersionedTextDocumentIdentifier document;

        public:
        const std::vector<TextDocumentContentChangeEvent> & get_changes() const { return changes; }
        std::vector<TextDocumentContentChangeEvent> & get_mutable_changes() { return changes; }
        void set_changes(const std::vector<TextDocumentContentChangeEvent> & value) { this->changes = value; }

        const VersionedTextDocumentIdentifier & get_document() const { return document; }
        VersionedTextDocumentIdentifier & get_mutable_document() { return document; }
        void set_document(const VersionedTextDocumentIdentifier & value) { this->document = value; }
    };
}
}
