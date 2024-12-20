#pragma once

#include "generated/Generators.hpp"
#include "generated/InitializeResult.hpp"
#include "generated/LspAny.hpp"
#include "generated/Params.hpp"
#include "methodProvider.hpp"

namespace lsps {
class InitializeProvider : public MethodProvider {
  public:
    InitializeProvider(const ServerInfo& serverInfo, const ServerCapabilities& capabilities)
        : serverInfo(serverInfo), capabilities(capabilities), MethodProvider(Method::INITIALIZE) {}

    LspAny handle(const std::optional<Params>& params) override {
        InitializeResult result;
        result.set_server_info(serverInfo);
        result.set_capabilities(capabilities);

        json json;
        to_json(json, result);

        return json.dump();
    }

  private:
    ServerInfo serverInfo;
    ServerCapabilities capabilities;
};
}  // namespace lsps