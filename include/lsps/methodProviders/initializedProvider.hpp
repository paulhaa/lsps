#pragma once

#include "../methodProvider.hpp"
#include "../models/emptyParams.hpp"
#include "../models/emptyResult.hpp"

namespace lsps {
class InitializedProvider : public MethodProvider<models::EmptyParams, models::EmptyResult> {
  public:
    InitializedProvider() : MethodProvider(Method::INITIALIZED) {}

    std::variant<models::EmptyResult, models::ResponseError> handle(
        const std::optional<models::EmptyParams>& params) override {
        return models::EmptyResult();
    }
};
}  // namespace lsps