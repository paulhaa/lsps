#pragma once

#include "../methodProvider.hpp"
#include "../models/generated/DefinitionParams.hpp"
#include "../models/generated/LocationClass.hpp"

namespace lsps {
class DefinitionProvider : public MethodProvider<models::DefinitionParams, std::optional<models::LocationClass>> {
  public:
    DefinitionProvider() : MethodProvider(Method::DEFINITION) {}
};
}  // namespace lsps