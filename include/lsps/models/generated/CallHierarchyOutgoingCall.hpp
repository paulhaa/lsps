//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CallHierarchyOutgoingCall.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "PurpleRange.hpp"
#include "CallHierarchyItem.hpp"

namespace lsps {
namespace models {
    using nlohmann::json;

    class CallHierarchyOutgoingCall {
        public:
        CallHierarchyOutgoingCall() = default;
        virtual ~CallHierarchyOutgoingCall() = default;

        private:
        std::vector<PurpleRange> from_ranges;
        CallHierarchyItem to;

        public:
        /**
         * The range at which this item is called. This is the range relative to the caller, e.g the
         * item passed to `callHierarchy/outgoingCalls` request.
         */
        const std::vector<PurpleRange> & get_from_ranges() const { return from_ranges; }
        std::vector<PurpleRange> & get_mutable_from_ranges() { return from_ranges; }
        void set_from_ranges(const std::vector<PurpleRange> & value) { this->from_ranges = value; }

        /**
         * The item that is called.
         */
        const CallHierarchyItem & get_to() const { return to; }
        CallHierarchyItem & get_mutable_to() { return to; }
        void set_to(const CallHierarchyItem & value) { this->to = value; }
    };
}
}
