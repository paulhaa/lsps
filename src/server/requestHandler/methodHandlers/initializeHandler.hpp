#pragma once

#include "generated/LspAny.hpp"
#include "generated/Params.hpp"

namespace lsps {
LspAny handleInitialize(const std::optional<Params>& request) {
    if (request.has_value()) {
        return "has params";
    }
    return "no params";
}
}  // namespace lsps