#pragma once

#include <string>

#include "generated/LspAny.hpp"
#include "generated/Params.hpp"
#include "methodProviders/method.hpp"

namespace lsps {
class MethodProvider {
  public:
    virtual ~MethodProvider() = default;

    [[nodiscard]] const Method& method() const { return method_; }

    virtual LspAny handle(const std::optional<Params>& request) = 0;

  protected:
    explicit MethodProvider(Method method) : method_(method) {}

  private:
    Method method_;
};
}  // namespace lsps