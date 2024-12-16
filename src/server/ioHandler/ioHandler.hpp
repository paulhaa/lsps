#pragma once

#include <string>

namespace lsps {
class IoHandler {
  public:
    virtual ~IoHandler() = default;
    virtual bool readInput(std::string& input) = 0;
    virtual void writeOutput(std::string& output) = 0;
};
}  // namespace lsps