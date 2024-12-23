//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     CallHierarchyIncomingCall.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "CallHierarchyItem.hpp"
#include "PurpleRange.hpp"

namespace lsps {
    using nlohmann::json;

    class CallHierarchyIncomingCall {
        public:
        CallHierarchyIncomingCall() = default;
        virtual ~CallHierarchyIncomingCall() = default;

        private:
        CallHierarchyItem from;
        std::vector<PurpleRange> from_ranges;

        public:
        /**
         * The item that makes the call.
         */
        const CallHierarchyItem & get_from() const { return from; }
        CallHierarchyItem & get_mutable_from() { return from; }
        void set_from(const CallHierarchyItem & value) { this->from = value; }

        /**
         * The ranges at which the calls appear. This is relative to the caller denoted by
         * [`this.from`](#CallHierarchyIncomingCall.from).
         */
        const std::vector<PurpleRange> & get_from_ranges() const { return from_ranges; }
        std::vector<PurpleRange> & get_mutable_from_ranges() { return from_ranges; }
        void set_from_ranges(const std::vector<PurpleRange> & value) { this->from_ranges = value; }
    };
}
