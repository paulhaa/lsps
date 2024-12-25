#pragma once

#include "models/generated/ServerCapabilities.hpp"
#include "models/generated/ServerInfo.hpp"
#include "ioHandler/ioHandler.hpp"
#include "ioHandler/stdIoHandler.hpp"
#include "methodProvider.hpp"
#include "router.hpp"

namespace lsps {
constexpr auto JSON_RPC_VERSION = "2.0";

class Server {
  public:
    explicit Server(const models::ServerInfo& serverInfo) : serverInfo(serverInfo) {
        ioHandler = std::make_unique<StdIoHandler>();
    }
    Server(const models::ServerInfo& serverInfo, std::unique_ptr<IoHandler> ioHandler)
        : serverInfo(serverInfo), ioHandler(std::move(ioHandler)) {}

    void start();
    template <class P, class R>
    void addProvider(std::shared_ptr<MethodProvider<P, R>> provider) {
        addCapability(provider->method());
        router.addProvider(provider);
    };

  private:
    std::unique_ptr<IoHandler> ioHandler;
    Router router;

    models::ServerInfo serverInfo;
    models::ServerCapabilities capabilities;

    void initialize();
    void addCapability(const Method& method);

    void handleRequest(models::RequestMessage* request);
    void handleNotification(models::NotificationMessage* notification);

    bool handleInitialize();
    void handleRequests();
    void handleShutdown();

    std::variant<models::RequestMessage, models::NotificationMessage> parseRequest();
    int readHeader();
    json readPayload(int contentLength);
    void dispatchResponse(const std::variant<int64_t, std::string>& id,
                          const std::variant<json, models::ResponseError>& result);
};
}  // namespace lsps