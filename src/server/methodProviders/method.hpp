#pragma once

#include <map>
#include <stdexcept>
#include <string>

namespace lsps {
enum Method { INITIALIZE, HOVER, SHUTDOWN, EXIT };

class MethodEnum {
  public:
    static Method getMethodFromString(const std::string& methodString) {
        auto it = stringToMethod.find(methodString);
        if (it != stringToMethod.end()) {
            return it->second;
        } else {
            throw std::runtime_error("Invalid method string");
        }
    }

  private:
    static std::map<std::string, Method> stringToMethod;
};
}  // namespace lsps