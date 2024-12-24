//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ApplyWorkspaceEditParams.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "WorkspaceEdit.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class ApplyWorkspaceEditParams {
        public:
        ApplyWorkspaceEditParams() = default;
        virtual ~ApplyWorkspaceEditParams() = default;

        private:
        WorkspaceEdit edit;
        std::optional<std::string> label;

        public:
        /**
         * The edits to apply.
         */
        const WorkspaceEdit & get_edit() const { return edit; }
        WorkspaceEdit & get_mutable_edit() { return edit; }
        void set_edit(const WorkspaceEdit & value) { this->edit = value; }

        /**
         * An optional label of the workspace edit. This label is presented in the user interface
         * for example on an undo stack to undo the workspace edit.
         */
        std::optional<std::string> get_label() const { return label; }
        void set_label(std::optional<std::string> value) { this->label = value; }
    };
}
}
