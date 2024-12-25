#pragma once

#include <string>

#include "methodProviders/method.hpp"
#include "models/generated/ResponseError.hpp"

namespace lsps {
template <class P, class R>
class MethodProvider {
  public:
    virtual ~MethodProvider() = default;

    [[nodiscard]] const Method& method() const { return method_; }

    virtual std::variant<R, models::ResponseError> handle(const std::optional<P>& request) = 0;

  protected:
    explicit MethodProvider(Method method) : method_(method) {}

  private:
    Method method_;
};
}  // namespace lsps