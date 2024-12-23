//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ShowDocumentParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
    /**
     * Params to show a resource.
     */

    using nlohmann::json;

    /**
     * Params to show a resource.
     */
    class ShowDocumentParams {
        public:
        ShowDocumentParams() = default;
        virtual ~ShowDocumentParams() = default;

        private:
        std::optional<bool> external;
        std::optional<PurpleRange> selection;
        std::optional<bool> take_focus;
        std::string uri;

        public:
        /**
         * Indicates to show the resource in an external program. To show, for example,
         * `https://code.visualstudio.com/` in the default WEB browser set `external` to `true`.
         */
        std::optional<bool> get_external() const { return external; }
        void set_external(std::optional<bool> value) { this->external = value; }

        /**
         * An optional selection range if the document is a text document. Clients might ignore the
         * property if an external program is started or the file is not a text file.
         */
        std::optional<PurpleRange> get_selection() const { return selection; }
        void set_selection(std::optional<PurpleRange> value) { this->selection = value; }

        /**
         * An optional property to indicate whether the editor showing the document should take
         * focus or not. Clients might ignore this property if an external program is started.
         */
        std::optional<bool> get_take_focus() const { return take_focus; }
        void set_take_focus(std::optional<bool> value) { this->take_focus = value; }

        /**
         * The uri to show.
         */
        const std::string & get_uri() const { return uri; }
        std::string & get_mutable_uri() { return uri; }
        void set_uri(const std::string & value) { this->uri = value; }
    };
}
