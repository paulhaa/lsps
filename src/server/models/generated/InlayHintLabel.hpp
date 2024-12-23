//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     InlayHintLabel.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <variant>
#include <nlohmann/json.hpp>
#include "helper.hpp"

#include "InlayHintLabelPart.hpp"

namespace lsps {
    /**
     * The label of this hint. A human readable string or an array of InlayHintLabelPart label
     * parts.
     *
     * *Note* that neither the string nor the label part can be empty.
     */

    using nlohmann::json;

    using InlayHintLabel = std::variant<std::vector<InlayHintLabelPart>, std::string>;
}
