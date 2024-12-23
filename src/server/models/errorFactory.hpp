#include "errorCodes.hpp"
#include "generated/ResponseError.hpp"

namespace lsps {
class ErrorFactory {
  public:
    static ResponseError invalidRequest() {
        ResponseError error;
        error.set_code(ErrorCode::InvalidRequest);
        error.set_message("invalid request");
        return error;
    }

    static ResponseError serverNotInitialized() {
        ResponseError error;
        error.set_code(ErrorCode::ServerNotInitialized);
        error.set_message("server not initialized");
        return error;
    }
};
}  // namespace lsps