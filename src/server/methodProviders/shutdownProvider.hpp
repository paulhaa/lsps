#include "generated/LspAny.hpp"
#include "generated/Params.hpp"

namespace lsps {
class ShutdownProvider : public MethodProvider {
  public:
    ShutdownProvider() : MethodProvider(Method::SHUTDOWN) {}

    LspAny handle(const std::optional<Params>& request) override { return "shutdown"; }
};
}  // namespace lsps