//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     DocumentLink.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "LspAny.hpp"
#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * A document link is a range in a text document that links to an internal or external
     * resource, like another text document or a web site.
     */

    using nlohmann::json;

    /**
     * A document link is a range in a text document that links to an internal or external
     * resource, like another text document or a web site.
     */
    class DocumentLink {
        public:
        DocumentLink() = default;
        virtual ~DocumentLink() = default;

        private:
        LspAny data;
        PurpleRange range;
        std::optional<std::string> target;
        std::optional<std::string> tooltip;

        public:
        /**
         * A data entry field that is preserved on a document link between a DocumentLinkRequest and
         * a DocumentLinkResolveRequest.
         */
        LspAny get_data() const { return data; }
        void set_data(LspAny value) { this->data = value; }

        /**
         * The range this link applies to.
         */
        const PurpleRange & get_range() const { return range; }
        PurpleRange & get_mutable_range() { return range; }
        void set_range(const PurpleRange & value) { this->range = value; }

        /**
         * The uri this link points to. If missing a resolve request is sent later.
         */
        std::optional<std::string> get_target() const { return target; }
        void set_target(std::optional<std::string> value) { this->target = value; }

        /**
         * The tooltip text when you hover over this link.
         *
         * If a tooltip is provided, is will be displayed in a string that includes instructions on
         * how to trigger the link, such as `{0} (ctrl + click)`. The specific instructions vary
         * depending on OS, user settings, and localization.
         */
        std::optional<std::string> get_tooltip() const { return tooltip; }
        void set_tooltip(std::optional<std::string> value) { this->tooltip = value; }
    };
}
}
