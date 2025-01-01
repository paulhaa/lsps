#pragma once

#include "lsps/server.hpp"
#include "lsps/methodProvider.hpp"
#include "lsps/models/generated/InitializeParams.hpp"
#include "lsps/models/generated/InitializeResult.hpp"
#include "lsps/models/generated/ResponseError.hpp"
#include "lsps/models/generated/ServerCapabilities.hpp"
#include "lsps/models/generated/ServerInfo.hpp"

namespace lsps {
class InitializeProvider : public MethodProvider<models::InitializeParams, models::InitializeResult> {
  public:
    InitializeProvider(Server* server) : server(server), MethodProvider(Method::INITIALIZE) {}

    std::variant<models::InitializeResult, models::ResponseError> handle(
        const std::optional<models::InitializeParams>& params) final {
        models::InitializeResult result;
        result.set_server_info(server->getServerInfo());

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
        server->getCapabilities().set_position_encoding(encoding);
        models::NotebookDocumentSyncOptions opts;
        server->getCapabilities().set_notebook_document_sync(opts);
        result.set_capabilities(server->getCapabilities());

        initialize(params);

        return result;
    }

    virtual void initialize(const std::optional<models::InitializeParams>& params) {};

  private:
    Server* server;
};
}  // namespace lsps