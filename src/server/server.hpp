#include <iostream>
#include <thread>

#include "ioHandler/ioHandler.hpp"
#include "ioHandler/stdIoHandler.hpp"
#include "requestHandler/requestHandler.hpp"

namespace lsps {
class Server {
  public:
    Server() { requestHandler = std::make_unique<RequestHandler>(std::make_unique<StdIoHandler>()); }
    explicit Server(std::unique_ptr<IoHandler> ioHandler) {
        requestHandler = std::make_unique<RequestHandler>(std::move(ioHandler));
    }

    void start();
    void addHandler(const std::string& method, const MethodHandler& handler);

  private:
    std::unique_ptr<RequestHandler> requestHandler;
};
}  // namespace lsps