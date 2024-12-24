#pragma once

#include "emptyParams.hpp"
#include "emptyResult.hpp"
#include "generated/Generators.hpp"
#include "generated/InitializeResult.hpp"
#include "generated/LspAny.hpp"
#include "generated/Params.hpp"
#include "methodProvider.hpp"

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