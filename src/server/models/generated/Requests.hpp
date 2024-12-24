//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Requests.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FullCapability.hpp"
#include "FullCapabilityClass.hpp"
#include "RangeCapability.hpp"
#include "RangeCapabilityClass.hpp"

namespace lsps {
namespace models {
    /**
     * Which requests the client supports and might send to the server depending on the server's
     * capability. Please note that clients might not show semantic tokens or degrade some of
     * the user experience if a range or full request is advertised by the client but not
     * provided by the server. If for example the client capability `requests.full` and
     * `request.range` are both set to true but the server only provides a range provider the
     * client might not render a minimap correctly or might even decide to not show any semantic
     * tokens at all.
     */

    using nlohmann::json;

    /**
     * Which requests the client supports and might send to the server depending on the server's
     * capability. Please note that clients might not show semantic tokens or degrade some of
     * the user experience if a range or full request is advertised by the client but not
     * provided by the server. If for example the client capability `requests.full` and
     * `request.range` are both set to true but the server only provides a range provider the
     * client might not render a minimap correctly or might even decide to not show any semantic
     * tokens at all.
     */
    class Requests {
        public:
        Requests() = default;
        virtual ~Requests() = default;

        private:
        std::optional<FullCapability> full;
        std::optional<RangeCapability> range;

        public:
        /**
         * The client will send the `textDocument/semanticTokens/full` request if the server
         * provides a corresponding handler.
         */
        std::optional<FullCapability> get_full() const { return full; }
        void set_full(std::optional<FullCapability> value) { this->full = value; }

        /**
         * The client will send the `textDocument/semanticTokens/range` request if the server
         * provides a corresponding handler.
         */
        std::optional<RangeCapability> get_range() const { return range; }
        void set_range(std::optional<RangeCapability> value) { this->range = value; }
    };
}
}
