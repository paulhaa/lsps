//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensOptionsClass.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FullOption.hpp"
#include "FullOptionClass.hpp"
#include "SemanticTokensLegend.hpp"
#include "RangeOption.hpp"
#include "RangeOptionClass.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SemanticTokensOptionsClass {
        public:
        SemanticTokensOptionsClass() = default;
        virtual ~SemanticTokensOptionsClass() = default;

        private:
        std::optional<FullOption> full;
        SemanticTokensLegend legend;
        std::optional<RangeOption> range;
        std::optional<bool> work_done_progress;

        public:
        /**
         * Server supports providing semantic tokens for a full document.
         */
        std::optional<FullOption> get_full() const { return full; }
        void set_full(std::optional<FullOption> value) { this->full = value; }

        /**
         * The legend used by the server
         */
        const SemanticTokensLegend & get_legend() const { return legend; }
        SemanticTokensLegend & get_mutable_legend() { return legend; }
        void set_legend(const SemanticTokensLegend & value) { this->legend = value; }

        /**
         * Server supports providing semantic tokens for a specific range of a document.
         */
        std::optional<RangeOption> get_range() const { return range; }
        void set_range(std::optional<RangeOption> value) { this->range = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
