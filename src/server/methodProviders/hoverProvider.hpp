#include "generated/Hover.hpp"
#include "generated/HoverParams.hpp"
#include "method.hpp"
#include "methodProvider.hpp"

namespace lsps {
class HoverProvider : public MethodProvider<models::HoverParams, models::Hover> {
  public:
    HoverProvider() : MethodProvider(Method::HOVER) {}
};
}  // namespace lsps