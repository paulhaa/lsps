//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     LspAny.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

namespace lsps {
    /**
     * A data entry field that is preserved between a call hierarchy prepare and incoming calls
     * or outgoing calls requests.
     *
     * The LSP any type
     *
     * Experimental client capabilities.
     *
     * A data entry field that is preserved on a code action between a `textDocument/codeAction`
     * and a `codeAction/resolve` request.
     *
     * A data entry field that is preserved between a `textDocument/publishDiagnostics`
     * notification and `textDocument/codeAction` request.
     *
     * A data entry field that is preserved on a code lens item between a code lens and a code
     * lens resolve request.
     *
     * A data entry field that is preserved on a completion item between a completion and a
     * completion resolve request.
     *
     * A default data value.
     *
     * The actual changed settings
     *
     * A data entry field that is preserved on a document link between a DocumentLinkRequest and
     * a DocumentLinkResolveRequest.
     *
     * User provided initialization options.
     *
     * Experimental server capabilities.
     *
     * A data entry field that is preserved on an inlay hint between a `textDocument/inlayHint`
     * and a `inlayHint/resolve` request.
     *
     * LSP arrays.
     *
     * Options necessary for the registration.
     *
     * A primitive or structured value that contains additional information about the error. Can
     * be omitted.
     *
     * The result of a request. This member is REQUIRED on success. This member MUST NOT exist
     * if there was an error invoking the method.
     *
     * A data entry field that is preserved between a type hierarchy prepare and supertypes or
     * subtypes requests. It could also be used to identify the type hierarchy in the server,
     * helping improve the performance on resolving supertypes and subtypes.
     *
     * A data entry field that is preserved on a workspace symbol between a workspace symbol
     * request and a workspace symbol resolve request.
     */

    using nlohmann::json;

    using LspAny = std::optional<std::variant<bool, double, int64_t, std::string>>;
}
