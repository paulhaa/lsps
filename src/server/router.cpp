#include "router.hpp"

namespace lsps {
void Router::addHandler(std::unique_ptr<MethodProvider> handler) {
    routes.emplace(handler->method(), std::move(handler));
}

LspAny Router::invoke(const Method& method, const std::optional<Params>& params) {
    auto handler = routes.find(method);
    if (handler == routes.end()) {
        throw std::runtime_error("Method not supported.");
    }
    return handler->second->handle(params);
}
}  // namespace lsps