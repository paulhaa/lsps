//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     PurpleRange.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "Position.hpp"

namespace lsps {
    /**
     * The range of the text document to be manipulated. To insert text into a document create a
     * range where start === end.
     *
     * The range enclosing this symbol not including leading/trailing whitespace but everything
     * else, e.g. comments and code.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the [`range`](#CallHierarchyItem.range).
     *
     * The range at which the message applies.
     *
     * The range for which the command was invoked.
     *
     * The range in which this code lens is valid. Should only span a single line.
     *
     * The range in the document where this color appears.
     *
     * The range where the color would be inserted. Serves as a context.
     *
     * The range if the insert is requested
     *
     * The range if the replace is requested.
     *
     * The range of the document that changed.
     *
     * The range this highlight applies to.
     *
     * The range this link applies to.
     *
     * The range to format
     *
     * The range enclosing this symbol not including leading/trailing whitespace but everything
     * else like comments. This information is typically used to determine if the clients cursor
     * is inside the symbol to reveal in the symbol in the UI.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the `range`.
     *
     * An optional range is a range inside a text document that is used to visualize a hover,
     * e.g. by changing the background color.
     *
     * The visible document range for which inlay hints should be computed.
     *
     * The document range for which the inline value applies.
     *
     * The document range for which the inline value applies. The range is used to extract the
     * variable name from the underlying document.
     *
     * The document range for which the inline value applies. The range is used to extract the
     * evaluatable expression from the underlying document.
     *
     * The document range where execution has stopped. Typically the end position of the range
     * denotes the line where the inline values are shown.
     *
     * The document range for which inline values should be computed.
     *
     * Span of the origin of this link.
     *
     * Used as the underlined span for mouse interaction. Defaults to the word range at the
     * mouse position.
     *
     * The full target range of this link. If the target for example is a symbol then target
     * range is the range enclosing this symbol not including leading/trailing whitespace but
     * everything else like comments. This information is typically used to highlight the range
     * in the editor.
     *
     * The range that should be selected and revealed when this link is being followed, e.g the
     * name of a function. Must be contained by the `targetRange`. See also
     * `DocumentSymbol#range`
     *
     * The [range](#Range) of this selection range.
     *
     * The range the semantic tokens are requested for.
     *
     * An optional selection range if the document is a text document. Clients might ignore the
     * property if an external program is started or the file is not a text file.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the [`range`](#TypeHierarchyItem.range).
     */

    using nlohmann::json;

    /**
     * The range of the text document to be manipulated. To insert text into a document create a
     * range where start === end.
     *
     * The range enclosing this symbol not including leading/trailing whitespace but everything
     * else, e.g. comments and code.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the [`range`](#CallHierarchyItem.range).
     *
     * The range at which the message applies.
     *
     * The range for which the command was invoked.
     *
     * The range in which this code lens is valid. Should only span a single line.
     *
     * The range in the document where this color appears.
     *
     * The range where the color would be inserted. Serves as a context.
     *
     * The range if the insert is requested
     *
     * The range if the replace is requested.
     *
     * The range of the document that changed.
     *
     * The range this highlight applies to.
     *
     * The range this link applies to.
     *
     * The range to format
     *
     * The range enclosing this symbol not including leading/trailing whitespace but everything
     * else like comments. This information is typically used to determine if the clients cursor
     * is inside the symbol to reveal in the symbol in the UI.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the `range`.
     *
     * An optional range is a range inside a text document that is used to visualize a hover,
     * e.g. by changing the background color.
     *
     * The visible document range for which inlay hints should be computed.
     *
     * The document range for which the inline value applies.
     *
     * The document range for which the inline value applies. The range is used to extract the
     * variable name from the underlying document.
     *
     * The document range for which the inline value applies. The range is used to extract the
     * evaluatable expression from the underlying document.
     *
     * The document range where execution has stopped. Typically the end position of the range
     * denotes the line where the inline values are shown.
     *
     * The document range for which inline values should be computed.
     *
     * Span of the origin of this link.
     *
     * Used as the underlined span for mouse interaction. Defaults to the word range at the
     * mouse position.
     *
     * The full target range of this link. If the target for example is a symbol then target
     * range is the range enclosing this symbol not including leading/trailing whitespace but
     * everything else like comments. This information is typically used to highlight the range
     * in the editor.
     *
     * The range that should be selected and revealed when this link is being followed, e.g the
     * name of a function. Must be contained by the `targetRange`. See also
     * `DocumentSymbol#range`
     *
     * The [range](#Range) of this selection range.
     *
     * The range the semantic tokens are requested for.
     *
     * An optional selection range if the document is a text document. Clients might ignore the
     * property if an external program is started or the file is not a text file.
     *
     * The range that should be selected and revealed when this symbol is being picked, e.g. the
     * name of a function. Must be contained by the [`range`](#TypeHierarchyItem.range).
     */
    class PurpleRange {
        public:
        PurpleRange() = default;
        virtual ~PurpleRange() = default;

        private:
        Position end;
        Position start;

        public:
        /**
         * The range's end position.
         */
        const Position & get_end() const { return end; }
        Position & get_mutable_end() { return end; }
        void set_end(const Position & value) { this->end = value; }

        /**
         * The range's start position.
         */
        const Position & get_start() const { return start; }
        Position & get_mutable_start() { return start; }
        void set_start(const Position & value) { this->start = value; }
    };
}
