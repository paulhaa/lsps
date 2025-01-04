#pragma once

#include <map>
#include <stdexcept>
#include <string>

namespace lsps {
enum Method { INITIALIZE, INITIALIZED, DEFINITION, HOVER, SHUTDOWN, EXIT, UNSUPPORTED };

class MethodEnum {
  public:
    static Method fromString(const std::string& methodString) {
        auto it = stringToMethod.find(methodString);
        if (it != stringToMethod.end()) {
            return it->second;
        } else {
            return UNSUPPORTED;
        }
    }

  private:
    static std::map<std::string, Method> stringToMethod;
};
}  // namespace lsps