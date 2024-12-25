#include "lsps/router.hpp"

namespace lsps {
bool Router::isSupported(const Method& method) { return routes.find(method) != routes.end(); }

std::variant<json, models::ResponseError> Router::invoke(const Method& method, const std::optional<json>& params) {
    auto provider = routes.find(method);
    if (provider == routes.end()) {
        throw std::runtime_error("Method not supported.");
    }
    return provider->second(params);
}
}  // namespace lsps