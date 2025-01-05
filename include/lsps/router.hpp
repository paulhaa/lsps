#pragma once

#include "methodProvider.hpp"
#include "models/generated/Generators.hpp"

namespace lsps {
using json = nlohmann::json;

// Trait to check if a type is std::optional
template <typename T>
struct is_optional : std::false_type {};
template <typename T>
struct is_optional<std::optional<T>> : std::true_type {};
template <typename T>
inline constexpr bool is_optional_v = is_optional<T>::value;

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

            return resultToJson(std::get<R>(result));
        };

        routes.emplace(provider->method(), func);
    }
    bool isSupported(const Method& method);
    std::variant<json, models::ResponseError> invoke(const Method& method, const std::optional<json>& params);

  private:
    std::unordered_map<Method, std::function<std::variant<json, models::ResponseError>(const json&)>> routes;

    template <typename R>
    static json resultToJson(const R& result) {
        json j;
        if constexpr (is_optional_v<R>) {
            if (result.has_value()) {
                to_json(j, *result);
            }
        } else {
            to_json(j, result);
        }
        return j;
    }
};
}  // namespace lsps