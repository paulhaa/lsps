#include "method.hpp"

#include <map>
#include <string>

namespace lsps {
std::map<std::string, Method> MethodEnum::stringToMethod{
    {"initialize", INITIALIZE}, {"textDocument/hover", HOVER}, {"shutdown", SHUTDOWN}, {"exit", EXIT}};
}  // namespace lsps