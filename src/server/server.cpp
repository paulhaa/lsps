#include "server.hpp"

namespace lsps {
void Server::start() {
    requestHandler->initialize();

    bool _continue = true;
    while (_continue) {
        _continue = requestHandler->handleRequest();
    }
}

void Server::addHandler(const std::string& method, const MethodHandler& handler) {
    requestHandler->addHandler(method, handler);
};
}  // namespace lsps