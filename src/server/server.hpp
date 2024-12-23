#pragma once

#include <iostream>
#include <thread>

#include "generated/ServerCapabilities.hpp"
#include "generated/ServerInfo.hpp"
#include "ioHandler/ioHandler.hpp"
#include "ioHandler/stdIoHandler.hpp"
#include "methodProvider.hpp"
#include "router.hpp"

namespace lsps {
constexpr auto JSON_RPC_VERSION = "2.0";

class Server {
  public:
    explicit Server(const ServerInfo& serverInfo) : serverInfo(serverInfo) {
        ioHandler = std::make_unique<StdIoHandler>();
    }
    Server(const ServerInfo& serverInfo, std::unique_ptr<IoHandler> ioHandler)
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

    ServerInfo serverInfo;
    ServerCapabilities capabilities;

    void initialize();
    void addCapability(const Method& method);

    void handleRequest(RequestMessage* request);
    void handleNotification(NotificationMessage* notification);

    bool handleInitialize();
    void handleRequests();
    void handleShutdown();

    std::variant<RequestMessage, NotificationMessage> parseRequest();
    int readHeader();
    json readPayload(int contentLength);
    void dispatchResponse(const std::variant<int64_t, std::string>& id,
                          const std::variant<json, ResponseError>& result);
};
}  // namespace lsps