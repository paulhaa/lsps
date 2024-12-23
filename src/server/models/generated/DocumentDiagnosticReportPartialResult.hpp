//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentDiagnosticReportPartialResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "RelatedDocumentValue.hpp"

namespace lsps {
    /**
     * A partial result for a document diagnostic report.
     */

    using nlohmann::json;

    /**
     * A partial result for a document diagnostic report.
     */
    class DocumentDiagnosticReportPartialResult {
        public:
        DocumentDiagnosticReportPartialResult() = default;
        virtual ~DocumentDiagnosticReportPartialResult() = default;

        private:
        std::map<std::string, RelatedDocumentValue> related_documents;

        public:
        const std::map<std::string, RelatedDocumentValue> & get_related_documents() const { return related_documents; }
        std::map<std::string, RelatedDocumentValue> & get_mutable_related_documents() { return related_documents; }
        void set_related_documents(const std::map<std::string, RelatedDocumentValue> & value) { this->related_documents = value; }
    };
}
