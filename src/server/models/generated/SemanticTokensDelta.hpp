//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensDelta.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SemanticTokensEdit.hpp"

namespace lsps {
    using nlohmann::json;

    class SemanticTokensDelta {
        public:
        SemanticTokensDelta() = default;
        virtual ~SemanticTokensDelta() = default;

        private:
        std::vector<SemanticTokensEdit> edits;
        std::optional<std::string> result_id;

        public:
        /**
         * The semantic token edits to transform a previous result into a new result.
         */
        const std::vector<SemanticTokensEdit> & get_edits() const { return edits; }
        std::vector<SemanticTokensEdit> & get_mutable_edits() { return edits; }
        void set_edits(const std::vector<SemanticTokensEdit> & value) { this->edits = value; }

        std::optional<std::string> get_result_id() const { return result_id; }
        void set_result_id(std::optional<std::string> value) { this->result_id = value; }
    };
}
