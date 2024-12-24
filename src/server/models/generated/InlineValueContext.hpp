//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlineValueContext.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"

namespace lsps {
namespace models {
    /**
     * Additional information about the context in which inline values were requested.
     */

    using nlohmann::json;

    /**
     * Additional information about the context in which inline values were requested.
     */
    class InlineValueContext {
        public:
        InlineValueContext() = default;
        virtual ~InlineValueContext() = default;

        private:
        int64_t frame_id;
        PurpleRange stopped_location;

        public:
        /**
         * The stack frame (as a DAP Id) where the execution has stopped.
         */
        const int64_t & get_frame_id() const { return frame_id; }
        int64_t & get_mutable_frame_id() { return frame_id; }
        void set_frame_id(const int64_t & value) { this->frame_id = value; }

        /**
         * The document range where execution has stopped. Typically the end position of the range
         * denotes the line where the inline values are shown.
         */
        const PurpleRange & get_stopped_location() const { return stopped_location; }
        PurpleRange & get_mutable_stopped_location() { return stopped_location; }
        void set_stopped_location(const PurpleRange & value) { this->stopped_location = value; }
    };
}
}
