#include <memory>

#include "ioHandler/ioHandler.hpp"
#include "router.hpp"

namespace lsps {
constexpr auto JSON_RPC_VERSION = "2.0";

class RequestHandler {
  public:
    explicit RequestHandler(std::unique_ptr<IoHandler> ioHandler) : ioHandler_(std::move(ioHandler)) {}

    void initialize();
    void addHandler(const std::string& method, const MethodHandler& handler);
    bool handleRequest();

  private:
    std::unique_ptr<IoHandler> ioHandler_;
    Router router;

    RequestMessage parseRequest();
    bool dispatchResponse(const RequestMessage& request, const LspAny& result);
    int readHeader();
    json readPayload(int contentLength);
};
}  // namespace lsps