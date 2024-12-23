#include "errorCodes.hpp"
#include "generated/ResponseError.hpp"

namespace lsps {
class ErrorFactory {
  public:
    static ResponseError createInvalidRequest() {
        ResponseError error;
        error.set_code(ErrorCode::InvalidRequest);
        error.set_message("invalid request");
        return error;
    }
};
}  // namespace lsps