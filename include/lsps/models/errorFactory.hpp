#pragma once

#include "errorCodes.hpp"
#include "generated/ResponseError.hpp"

namespace lsps::models {
class ErrorFactory {
  public:
    static ResponseError invalidRequest() {
        ResponseError error;
        error.set_code(ErrorCode::InvalidRequest);
        error.set_message("invalid request");
        return error;
    }

    static ResponseError methodNotFound() {
        ResponseError error;
        error.set_code(ErrorCode::MethodNotFound);
        error.set_message("method not found");
        return error;
    }

    static ResponseError serverNotInitialized() {
        ResponseError error;
        error.set_code(ErrorCode::ServerNotInitialized);
        error.set_message("server not initialized");
        return error;
    }
};
}  // namespace lsps::models