#include "generated/Hover.hpp"
#include "generated/HoverParams.hpp"
#include "method.hpp"
#include "methodProvider.hpp"

namespace lsps {
class HoverCapabilityProvider : public MethodProvider<HoverParams, Hover> {
  public:
    HoverCapabilityProvider() : MethodProvider(Method::HOVER) {}
};
}  // namespace lsps