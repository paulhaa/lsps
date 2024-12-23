#pragma once

#include <string>

#include "generated/LspAny.hpp"
#include "generated/Params.hpp"
#include "generated/ResponseError.hpp"
#include "methodProviders/method.hpp"

namespace lsps {
template <class P, class R>
class MethodProvider {
  public:
    virtual ~MethodProvider() = default;

    [[nodiscard]] const Method& method() const { return method_; }

    virtual std::variant<R, ResponseError> handle(const std::optional<P>& request) = 0;

  protected:
    explicit MethodProvider(Method method) : method_(method) {}

  private:
    Method method_;
};
}  // namespace lsps