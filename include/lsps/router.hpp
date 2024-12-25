#pragma once

#include "methodProvider.hpp"
#include "models/generated/Generators.hpp"

namespace lsps {
using json = nlohmann::json;

class Router {
  public:
    template <class P, class R>
    void addProvider(std::shared_ptr<MethodProvider<P, R>> provider) {
        auto func = [provider = provider](const json& params) -> std::variant<json, models::ResponseError> {
            std::variant<R, models::ResponseError> result;
            if (!params.is_null()) {
                P p;
                from_json(params, p);
                result = provider->handle(p);
            } else {
                result = provider->handle(std::nullopt);
            }

            if (const auto error = std::get_if<models::ResponseError>(&result)) {
                return *error;
            }

            json j;
            to_json(j, std::get<R>(result));
            return j;
        };

        routes.emplace(provider->method(), func);
    }
    bool isSupported(const Method& method);
    std::variant<json, models::ResponseError> invoke(const Method& method, const std::optional<json>& params);

  private:
    std::unordered_map<Method, std::function<std::variant<json, models::ResponseError>(const json&)>> routes;
};
}  // namespace lsps