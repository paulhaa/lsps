//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     FoldingRangeClientCapabilities.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "FoldingRange.hpp"
#include "FoldingRangeKind.hpp"

namespace lsps {
namespace models {
    /**
     * Capabilities specific to the `textDocument/foldingRange` request.
     */

    using nlohmann::json;

    /**
     * Capabilities specific to the `textDocument/foldingRange` request.
     */
    class FoldingRangeClientCapabilities {
        public:
        FoldingRangeClientCapabilities() = default;
        virtual ~FoldingRangeClientCapabilities() = default;

        private:
        std::optional<bool> dynamic_registration;
        std::optional<FoldingRange> folding_range;
        std::optional<FoldingRangeKind> folding_range_kind;
        std::optional<bool> line_folding_only;
        std::optional<int64_t> range_limit;

        public:
        /**
         * Whether implementation supports dynamic registration for folding range providers. If this
         * is set to `true` the client supports the new `FoldingRangeRegistrationOptions` return
         * value for the corresponding server capability as well.
         */
        std::optional<bool> get_dynamic_registration() const { return dynamic_registration; }
        void set_dynamic_registration(std::optional<bool> value) { this->dynamic_registration = value; }

        /**
         * Specific options for the folding range.
         */
        std::optional<FoldingRange> get_folding_range() const { return folding_range; }
        void set_folding_range(std::optional<FoldingRange> value) { this->folding_range = value; }

        /**
         * Specific options for the folding range kind.
         */
        std::optional<FoldingRangeKind> get_folding_range_kind() const { return folding_range_kind; }
        void set_folding_range_kind(std::optional<FoldingRangeKind> value) { this->folding_range_kind = value; }

        /**
         * If set, the client signals that it only supports folding complete lines. If set, client
         * will ignore specified `startCharacter` and `endCharacter` properties in a FoldingRange.
         */
        std::optional<bool> get_line_folding_only() const { return line_folding_only; }
        void set_line_folding_only(std::optional<bool> value) { this->line_folding_only = value; }

        /**
         * The maximum number of folding ranges that the client prefers to receive per document. The
         * value serves as a hint, servers are free to follow the limit.
         */
        std::optional<int64_t> get_range_limit() const { return range_limit; }
        void set_range_limit(std::optional<int64_t> value) { this->range_limit = value; }
    };
}
}
