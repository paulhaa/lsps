#pragma once

#include "generated/Generators.hpp"
#include "generated/InitializeResult.hpp"
#include "generated/LspAny.hpp"
#include "generated/Params.hpp"
#include "methodProvider.hpp"

namespace lsps {
class InitializeProvider : public MethodProvider<InitializeParams, InitializeResult> {
  public:
    InitializeProvider(const ServerInfo& serverInfo, const ServerCapabilities& capabilities)
        : serverInfo(serverInfo), capabilities(capabilities), MethodProvider(Method::INITIALIZE) {}

    std::variant<InitializeResult, ResponseError> handle(const std::optional<InitializeParams>& params) override {
        InitializeResult result;
        result.set_server_info(serverInfo);
        result.set_capabilities(capabilities);

        return result;
    }

  private:
    ServerInfo serverInfo;
    ServerCapabilities capabilities;
};
}  // namespace lsps