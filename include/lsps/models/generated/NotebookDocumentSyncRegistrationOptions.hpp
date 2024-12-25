//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentSyncRegistrationOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookSelector.hpp"

namespace lsps {
namespace models {
    /**
     * Registration options specific to a notebook.
     */

    using nlohmann::json;

    /**
     * Registration options specific to a notebook.
     */
    class NotebookDocumentSyncRegistrationOptions {
        public:
        NotebookDocumentSyncRegistrationOptions() = default;
        virtual ~NotebookDocumentSyncRegistrationOptions() = default;

        private:
        std::optional<std::string> id;
        std::vector<NotebookSelector> notebook_selector;
        std::optional<bool> save;

        public:
        /**
         * The id used to register the request. The id can be used to deregister the request again.
         * See also Registration#id.
         */
        std::optional<std::string> get_id() const { return id; }
        void set_id(std::optional<std::string> value) { this->id = value; }

        const std::vector<NotebookSelector> & get_notebook_selector() const { return notebook_selector; }
        std::vector<NotebookSelector> & get_mutable_notebook_selector() { return notebook_selector; }
        void set_notebook_selector(const std::vector<NotebookSelector> & value) { this->notebook_selector = value; }

        /**
         * Whether save notification should be forwarded to the server. Will only be honored if mode
         * === `notebook`.
         */
        std::optional<bool> get_save() const { return save; }
        void set_save(std::optional<bool> value) { this->save = value; }
    };
}
}
