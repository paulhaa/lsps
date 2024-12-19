#include "generated/LspAny.hpp"
#include "generated/Params.hpp"

namespace lsps {
LspAny handleShutdown(const std::optional<Params>& request) { return "shutdown"; }
}  // namespace lsps