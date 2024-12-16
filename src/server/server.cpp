#include "server.hpp"

#include <iostream>

namespace lsps {
void Server::start() {
    std::string input;
    while (ioHandler_->readInput(input)) {
        if (input == "stop") {
            break;
        }
        ioHandler_->writeOutput(input);
    }
}
}  // namespace lsps