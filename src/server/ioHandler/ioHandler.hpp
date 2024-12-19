#pragma once

#include <string>
#include <vector>

namespace lsps {
class IoHandler {
  public:
    virtual ~IoHandler() = default;
    virtual long read(std::vector<char>& input, long length) = 0;
    virtual bool readLine(std::string& input) = 0;
    virtual void writeOutput(const std::string& output) = 0;
};
}  // namespace lsps