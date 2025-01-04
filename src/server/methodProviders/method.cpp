#include "lsps/methodProviders/method.hpp"

#include <map>
#include <string>

namespace lsps {
std::map<std::string, Method> MethodEnum::stringToMethod{{"initialize", INITIALIZE},
                                                         {"initialized", INITIALIZED},
                                                         {"textDocument/definition", DEFINITION},
                                                         {"textDocument/hover", HOVER},
                                                         {"shutdown", SHUTDOWN},
                                                         {"exit", EXIT}};
}  // namespace lsps