//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     RenameParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Position.hpp"
#include "TextDocumentIdentifier.hpp"
#include "ProgressToken.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class RenameParams {
        public:
        RenameParams() = default;
        virtual ~RenameParams() = default;

        private:
        std::string new_name;
        Position position;
        TextDocumentIdentifier text_document;
        std::optional<ProgressToken> work_done_token;

        public:
        /**
         * The new name of the symbol. If the given name is not valid the request must return a
         * [ResponseError](#ResponseError) with an appropriate message set.
         */
        const std::string & get_new_name() const { return new_name; }
        std::string & get_mutable_new_name() { return new_name; }
        void set_new_name(const std::string & value) { this->new_name = value; }

        /**
         * The position inside the text document.
         */
        const Position & get_position() const { return position; }
        Position & get_mutable_position() { return position; }
        void set_position(const Position & value) { this->position = value; }

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
