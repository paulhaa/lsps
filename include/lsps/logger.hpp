#pragma once

#include <string>

namespace lsps {
class Logger {
  public:
    virtual ~Logger() = default;

    virtual void debug(const std::string &text) = 0;
    virtual void info(const std::string &text) = 0;
    virtual void warn(const std::string &text) = 0;
    virtual void error(const std::string &text) = 0;
    virtual void fatal(const std::string &text) = 0;
};
}  // namespace lsps
