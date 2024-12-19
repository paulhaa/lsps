#pragma once

#include "models/generated/LspAny.hpp"
#include "models/generated/RequestMessage.hpp"

namespace lsps {
typedef std::function<LspAny(const std::optional<Params>& request)> MethodHandler;

class Router {
  public:
    void addHandler(const std::string& method, const MethodHandler& handler);

    LspAny invoke(const std::string& method, const std::optional<Params>& params);

  private:
    std::unordered_map<std::string, MethodHandler> routes;
};
}  // namespace lsps