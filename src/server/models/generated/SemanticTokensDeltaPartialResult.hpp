//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensDeltaPartialResult.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "SemanticTokensEdit.hpp"

namespace lsps {
    using nlohmann::json;

    class SemanticTokensDeltaPartialResult {
        public:
        SemanticTokensDeltaPartialResult() = default;
        virtual ~SemanticTokensDeltaPartialResult() = default;

        private:
        std::vector<SemanticTokensEdit> edits;

        public:
        const std::vector<SemanticTokensEdit> & get_edits() const { return edits; }
        std::vector<SemanticTokensEdit> & get_mutable_edits() { return edits; }
        void set_edits(const std::vector<SemanticTokensEdit> & value) { this->edits = value; }
    };
}
