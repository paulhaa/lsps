#include <iostream>
#include <thread>

#include "ioHandler/ioHandler.hpp"
#include "ioHandler/stdIoHandler.hpp"

namespace lsps {
class Server {
  public:
    Server() { ioHandler_ = std::make_unique<StdIoHandler>(); }
    explicit Server(std::unique_ptr<IoHandler> ioHandler) : ioHandler_(std::move(ioHandler)) {}

    void start();

  private:
    std::unique_ptr<IoHandler> ioHandler_;
};
}  // namespace lsps