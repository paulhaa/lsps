#pragma once

#include "lsps/methodProvider.hpp"
#include "lsps/models/generated/InitializeParams.hpp"
#include "lsps/models/generated/ResponseError.hpp"
#include "lsps/models/generated/InitializeResult.hpp"
#include "lsps/models/generated/ServerInfo.hpp"
#include "lsps/models/generated/ServerCapabilities.hpp"

namespace lsps {
class InitializeProvider : public MethodProvider<models::InitializeParams, models::InitializeResult> {
  public:
    InitializeProvider(const models::ServerInfo& serverInfo, const models::ServerCapabilities& capabilities)
        : serverInfo(serverInfo), capabilities(capabilities), MethodProvider(Method::INITIALIZE) {}

    std::variant<models::InitializeResult, models::ResponseError> handle(
        const std::optional<models::InitializeParams>& params) override {
        models::InitializeResult result;
        result.set_server_info(serverInfo);
        result.set_capabilities(capabilities);

        return result;
    }

  private:
    models::ServerInfo serverInfo;
    models::ServerCapabilities capabilities;
};
}  // namespace lsps