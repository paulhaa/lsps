#pragma once

#include "methodProvider.hpp"
#include "models/generated/LspAny.hpp"
#include "models/generated/RequestMessage.hpp"

namespace lsps {
class Router {
  public:
    void addHandler(std::unique_ptr<MethodProvider> handler);
    LspAny invoke(const Method& method, const std::optional<Params>& params);

  private:
    std::unordered_map<Method, std::unique_ptr<MethodProvider>> routes;
};
}  // namespace lsps