#pragma once

#include <iostream>

#include "ioHandler.hpp"

namespace lsps {
class StdIoHandler : public IoHandler {
  public:
    explicit StdIoHandler(std::istream& input = std::cin, std::ostream& output = std::cout)
        : input_(input), output_(output) {}

    long read(std::vector<char>& input, long length) override {
        input_.read(input.data(), length);
        const std::streamsize dataReceived = input_.gcount();
        return dataReceived;
    }
    bool readLine(std::string& input) override { return static_cast<bool>(std::getline(input_, input)); }
    void writeOutput(const std::string& output) override { output_ << output; }

  private:
    std::istream& input_;
    std::ostream& output_;
};
}  // namespace lsps