#pragma once

#include "lsps/methodProvider.hpp"
#include "lsps/models/generated/InitializeParams.hpp"
#include "lsps/models/generated/InitializeResult.hpp"
#include "lsps/models/generated/ResponseError.hpp"
#include "lsps/models/generated/ServerCapabilities.hpp"
#include "lsps/models/generated/ServerInfo.hpp"

namespace lsps {
class InitializeProvider : public MethodProvider<models::InitializeParams, models::InitializeResult> {
  public:
    InitializeProvider(const models::ServerInfo& serverInfo, const models::ServerCapabilities& capabilities)
        : serverInfo(serverInfo), capabilities(capabilities), MethodProvider(Method::INITIALIZE) {}

    std::variant<models::InitializeResult, models::ResponseError> handle(
        const std::optional<models::InitializeParams>& params) override {
        models::InitializeResult result;
        result.set_server_info(serverInfo);

        // TODO Use encoding in server.
        std::string encoding = "utf-16";
        if (params.has_value()) {
            if (params.value().get_capabilities().get_general().has_value()) {
                auto encodings = params.value().get_capabilities().get_general().value().get_position_encodings();
                if (encodings.has_value() && !encodings.value().empty()) {
                    encoding = encodings.value()[0];
                }
            }
        }
        capabilities.set_position_encoding(encoding);
        models::NotebookDocumentSyncOptions opts;
        capabilities.set_notebook_document_sync(opts);
        result.set_capabilities(capabilities);

        return result;
    }

  private:
    models::ServerInfo serverInfo;
    models::ServerCapabilities capabilities;
};
}  // namespace lsps