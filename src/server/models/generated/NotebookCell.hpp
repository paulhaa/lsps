//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookCell.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "ExecutionSummary.hpp"
#include "LspAny.hpp"

namespace lsps {
namespace models {
    /**
     * A notebook cell.
     *
     * A cell's document URI must be unique across ALL notebook cells and can therefore be used
     * to uniquely identify a notebook cell or the cell's text document.
     */

    using nlohmann::json;

    /**
     * A notebook cell.
     *
     * A cell's document URI must be unique across ALL notebook cells and can therefore be used
     * to uniquely identify a notebook cell or the cell's text document.
     */
    class NotebookCell {
        public:
        NotebookCell() = default;
        virtual ~NotebookCell() = default;

        private:
        std::string document;
        std::optional<ExecutionSummary> execution_summary;
        double kind;
        std::optional<std::map<std::string, LspAny>> metadata;

        public:
        /**
         * The URI of the cell's text document content.
         */
        const std::string & get_document() const { return document; }
        std::string & get_mutable_document() { return document; }
        void set_document(const std::string & value) { this->document = value; }

        /**
         * Additional execution summary information if supported by the client.
         */
        std::optional<ExecutionSummary> get_execution_summary() const { return execution_summary; }
        void set_execution_summary(std::optional<ExecutionSummary> value) { this->execution_summary = value; }

        /**
         * The cell's kind
         */
        const double & get_kind() const { return kind; }
        double & get_mutable_kind() { return kind; }
        void set_kind(const double & value) { this->kind = value; }

        /**
         * Additional metadata stored with the cell.
         */
        std::optional<std::map<std::string, LspAny>> get_metadata() const { return metadata; }
        void set_metadata(std::optional<std::map<std::string, LspAny>> value) { this->metadata = value; }
    };
}
}
