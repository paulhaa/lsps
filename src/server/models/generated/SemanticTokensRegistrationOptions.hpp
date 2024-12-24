//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     SemanticTokensRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "DocumentFilter.hpp"
#include "FullRegistrationOptions.hpp"
#include "FullRegistrationOptionsClass.hpp"
#include "SemanticTokensLegend.hpp"
#include "RangeRegistrationOption.hpp"
#include "RangeRegistrationOptionClass.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class SemanticTokensRegistrationOptions {
        public:
        SemanticTokensRegistrationOptions() = default;
        virtual ~SemanticTokensRegistrationOptions() = default;

        private:
        std::optional<std::vector<DocumentFilter>> document_selector;
        std::optional<FullRegistrationOptions> full;
        std::optional<std::string> id;
        SemanticTokensLegend legend;
        std::optional<RangeRegistrationOption> range;
        std::optional<bool> work_done_progress;

        public:
        /**
         * A document selector to identify the scope of the registration. If set to null the
         * document selector provided on the client side will be used.
         */
        std::optional<std::vector<DocumentFilter>> get_document_selector() const { return document_selector; }
        void set_document_selector(std::optional<std::vector<DocumentFilter>> value) { this->document_selector = value; }

        /**
         * Server supports providing semantic tokens for a full document.
         */
        std::optional<FullRegistrationOptions> get_full() const { return full; }
        void set_full(std::optional<FullRegistrationOptions> value) { this->full = value; }

        /**
         * The id used to register the request. The id can be used to deregister the request again.
         * See also Registration#id.
         */
        std::optional<std::string> get_id() const { return id; }
        void set_id(std::optional<std::string> value) { this->id = value; }

        /**
         * The legend used by the server
         */
        const SemanticTokensLegend & get_legend() const { return legend; }
        SemanticTokensLegend & get_mutable_legend() { return legend; }
        void set_legend(const SemanticTokensLegend & value) { this->legend = value; }

        /**
         * Server supports providing semantic tokens for a specific range of a document.
         */
        std::optional<RangeRegistrationOption> get_range() const { return range; }
        void set_range(std::optional<RangeRegistrationOption> value) { this->range = value; }

        std::optional<bool> get_work_done_progress() const { return work_done_progress; }
        void set_work_done_progress(std::optional<bool> value) { this->work_done_progress = value; }
    };
}
}
