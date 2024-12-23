#include "emptyParams.hpp"
#include "emptyResult.hpp"
#include "generated/LspAny.hpp"
#include "generated/Params.hpp"

namespace lsps {
class ShutdownProvider : public MethodProvider<EmptyParams, EmptyResult> {
  public:
    ShutdownProvider() : MethodProvider(Method::SHUTDOWN) {}

    std::variant<EmptyResult, ResponseError> handle(const std::optional<EmptyParams>& request) override {
        return EmptyResult();
    }
};
}  // namespace lsps