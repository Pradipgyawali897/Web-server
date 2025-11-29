#pragma once

namespace HttpStatus {
    constexpr int OK = 200;
    constexpr int CREATED = 201;
    constexpr int NO_CONTENT = 204;

    constexpr int MOVED_PERMANENTLY = 301;
    constexpr int FOUND = 302;
    constexpr int NOT_MODIFIED = 304;

    constexpr int BAD_REQUEST = 400;
    constexpr int UNAUTHORIZED = 401;
    constexpr int FORBIDDEN = 403;
    constexpr int NOT_FOUND = 404;
    constexpr int METHOD_NOT_ALLOWED = 405;

    constexpr int INTERNAL_SERVER_ERROR = 500;
    constexpr int NOT_IMPLEMENTED = 501;
    constexpr int BAD_GATEWAY = 502;
    constexpr int SERVICE_UNAVAILABLE = 503;

    inline const char* getText(int code);
}
