#pragma once

#include <iostream>

#include "ioHandler.hpp"

namespace lsps {
class StdIoHandler : public IoHandler {
  public:
    explicit StdIoHandler(std::istream& input = std::cin, std::ostream& output = std::cout)
        : input_(input), output_(output) {}

    bool readInput(std::string& input) override { return static_cast<bool>(std::getline(input_, input)); }
    void writeOutput(std::string& output) override { output_ << output; }

  private:
    std::istream& input_;
    std::ostream& output_;
};
}  // namespace lsps