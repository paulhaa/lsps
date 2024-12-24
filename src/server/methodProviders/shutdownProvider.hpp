#include "emptyParams.hpp"
#include "emptyResult.hpp"
#include "generated/LspAny.hpp"
#include "generated/Params.hpp"

namespace lsps {
class ShutdownProvider : public MethodProvider<models::EmptyParams, models::EmptyResult> {
  public:
    ShutdownProvider() : MethodProvider(Method::SHUTDOWN) {}

    std::variant<models::EmptyResult, models::ResponseError> handle(
        const std::optional<models::EmptyParams>& request) override {
        return models::EmptyResult();
    }
};
}  // namespace lsps