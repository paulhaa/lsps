//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "General.hpp"
#include "NotebookDocumentClientCapabilities.hpp"
#include "TextDocumentClientCapabilities.hpp"
#include "Window.hpp"
#include "Empty.hpp"

namespace lsps {
namespace models {
    /**
     * The capabilities provided by the client (editor or tool)
     */

    using nlohmann::json;

    /**
     * The capabilities provided by the client (editor or tool)
     */
    class ClientCapabilities {
        public:
        ClientCapabilities() = default;
        virtual ~ClientCapabilities() = default;

        private:
        LspAny experimental;
        std::optional<General> general;
        std::optional<NotebookDocumentClientCapabilities> notebook_document;
        std::optional<TextDocumentClientCapabilities> text_document;
        std::optional<Window> window;
        std::optional<Empty> workspace;

        public:
        /**
         * Experimental client capabilities.
         */
        LspAny get_experimental() const { return experimental; }
        void set_experimental(LspAny value) { this->experimental = value; }

        /**
         * General client capabilities.
         */
        std::optional<General> get_general() const { return general; }
        void set_general(std::optional<General> value) { this->general = value; }

        /**
         * Capabilities specific to the notebook document support.
         */
        std::optional<NotebookDocumentClientCapabilities> get_notebook_document() const { return notebook_document; }
        void set_notebook_document(std::optional<NotebookDocumentClientCapabilities> value) { this->notebook_document = value; }

        /**
         * Text document specific client capabilities.
         */
        std::optional<TextDocumentClientCapabilities> get_text_document() const { return text_document; }
        void set_text_document(std::optional<TextDocumentClientCapabilities> value) { this->text_document = value; }

        /**
         * Window specific client capabilities.
         */
        std::optional<Window> get_window() const { return window; }
        void set_window(std::optional<Window> value) { this->window = value; }

        /**
         * Workspace specific client capabilities.
         */
        std::optional<Empty> get_workspace() const { return workspace; }
        void set_workspace(std::optional<Empty> value) { this->workspace = value; }
    };
}
}
