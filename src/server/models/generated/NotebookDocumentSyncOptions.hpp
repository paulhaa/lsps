//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     NotebookDocumentSyncOptions.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "NotebookSelector.hpp"

namespace lsps {
    /**
     * Defines how notebook documents are synced.
     *
     * Options specific to a notebook plus its cells to be synced to the server.
     *
     * If a selector provides a notebook document filter but no cell selector all cells of a
     * matching notebook document will be synced.
     *
     * If a selector provides no notebook document filter but only a cell selector all notebook
     * documents that contain at least one matching cell will be synced.
     *
     * Registration options specific to a notebook.
     */

    using nlohmann::json;

    /**
     * Defines how notebook documents are synced.
     *
     * Options specific to a notebook plus its cells to be synced to the server.
     *
     * If a selector provides a notebook document filter but no cell selector all cells of a
     * matching notebook document will be synced.
     *
     * If a selector provides no notebook document filter but only a cell selector all notebook
     * documents that contain at least one matching cell will be synced.
     *
     * Registration options specific to a notebook.
     */
    class NotebookDocumentSyncOptions {
        public:
        NotebookDocumentSyncOptions() = default;
        virtual ~NotebookDocumentSyncOptions() = default;

        private:
        std::vector<NotebookSelector> notebook_selector;
        std::optional<bool> save;
        std::optional<std::string> id;

        public:
        const std::vector<NotebookSelector> & get_notebook_selector() const { return notebook_selector; }
        std::vector<NotebookSelector> & get_mutable_notebook_selector() { return notebook_selector; }
        void set_notebook_selector(const std::vector<NotebookSelector> & value) { this->notebook_selector = value; }

        /**
         * Whether save notification should be forwarded to the server. Will only be honored if mode
         * === `notebook`.
         */
        std::optional<bool> get_save() const { return save; }
        void set_save(std::optional<bool> value) { this->save = value; }

        /**
         * The id used to register the request. The id can be used to deregister the request again.
         * See also Registration#id.
         */
        std::optional<std::string> get_id() const { return id; }
        void set_id(std::optional<std::string> value) { this->id = value; }
    };
}
