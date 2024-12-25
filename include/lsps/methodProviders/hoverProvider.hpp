#pragma once

#include "method.hpp"

#include "../models/generated/HoverParams.hpp"
#include "../models/generated/Hover.hpp"
#include "../methodProvider.hpp"

namespace lsps {
class HoverProvider : public MethodProvider<models::HoverParams, models::Hover> {
  public:
    HoverProvider() : MethodProvider(Method::HOVER) {}
};
}  // namespace lsps