#include "router.hpp"

namespace lsps {
std::variant<json, ResponseError> Router::invoke(const Method& method, const std::optional<json>& params) {
    auto provider = routes.find(method);
    if (provider == routes.end()) {
        throw std::runtime_error("Method not supported.");
    }
    return provider->second(params);
}
}  // namespace lsps