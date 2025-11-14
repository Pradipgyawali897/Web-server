#include"HeaderParsor.hpp"


std::map<std::string, std::string> parseHeaders(const std::string& raw_headers) {
    std::map<std::string, std::string> headers;
    std::string remaining = raw_headers;

    while (!remaining.empty()) {
        size_t line_end = remaining.find("\r\n");
        if (line_end == std::string::npos) break;

        std::string line = remaining.substr(0, line_end);
        remaining.erase(0, line_end + 2);

        if (line.empty()) break;

        size_t colon = line.find(':');
        if (colon == std::string::npos) continue;

        std::string key = line.substr(0, colon);
        std::string value = line.substr(colon + 1);
        if (!value.empty() && value[0] == ' ') value.erase(0, 1);

        headers[key] = value;
    }

    return headers;
}
