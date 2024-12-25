//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ColorPresentationParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Color.hpp"
#include "ProgressToken.hpp"
#include "PurpleRange.hpp"
#include "TextDocumentIdentifier.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ColorPresentationParams {
        public:
        ColorPresentationParams() = default;
        virtual ~ColorPresentationParams() = default;

        private:
        Color color;
        std::optional<ProgressToken> partial_result_token;
        PurpleRange range;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The color information to request presentations for.
         */
        const Color & get_color() const { return color; }
        Color & get_mutable_color() { return color; }
        void set_color(const Color & value) { this->color = value; }

        /**
         * An optional token that a server can use to report partial results (e.g. streaming) to the
         * client.
         */
        std::optional<ProgressToken> get_partial_result_token() const { return partial_result_token; }
        void set_partial_result_token(std::optional<ProgressToken> value) { this->partial_result_token = value; }

        /**
         * The range where the color would be inserted. Serves as a context.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The text document.
         */
        const TextDocumentIdentifier & get_text_document() const { return text_document; }
        TextDocumentIdentifier & get_mutable_text_document() { return text_document; }
        void set_text_document(const TextDocumentIdentifier & value) { this->text_document = value; }

        /**
         * An optional token that a server can use to report work done progress.
         */
        std::optional<ProgressToken> get_work_done_token() const { return work_done_token; }
        void set_work_done_token(std::optional<ProgressToken> value) { this->work_done_token = value; }
    };
}
}
