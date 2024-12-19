#include "router.hpp"

namespace lsps {
void Router::addHandler(const std::string& method, const MethodHandler& handler) {
    if (method.empty()) {
        throw std::runtime_error("Invalid method.");
    }
    routes.emplace(method, handler);
}

LspAny Router::invoke(const std::string& method,const std::optional<Params>& params) {
    auto handler = routes.find(method);
    if (handler == routes.end()) {
        throw std::runtime_error("Method not supported.");
    }
    return handler->second(params);
}
}  // namespace lsps