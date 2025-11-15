#include "RequestHandler.hpp"
#include "HeaderParsor.hpp"
#include <algorithm> 

HDE::RequestHandler::RequestHandler(std::string request) {
    size_t pos_1 = request.find("\r\n");
    std::string request_line = request.substr(0, pos_1);

    size_t pos1 = request_line.find(' ');
    size_t pos2 = request_line.find(' ', pos1 + 1);

    method = request_line.substr(0, pos1);
    uri = request_line.substr(pos1 + 1, pos2 - pos1 - 1);

    if (uri.find("?") != std::string::npos && method == "GET") {
        size_t qpos = uri.find("?");
        std::string string_data = uri.substr(qpos + 1);
        uri = uri.substr(0, qpos);
        data=data_extractor(string_data);
    }

    std::string version_str = request_line.substr(pos2 + 1);
    version = 1.1;
    if (version_str.find("HTTP/") == 0) {
        version = std::stof(version_str.substr(5));
    }

    size_t pos_2 = request.find("\r\n\r\n");
    std::string raw_headers = request.substr(pos_1 + 2, pos_2 - (pos_1 + 2));

    std::map<std::string, std::string> header = parseHeaders(raw_headers);
    body = request.substr(pos_2 + 4);
  
}

std::map<std::string, std::string> data_extractor(std::string string_data){
    size_t start = 0;
    std::map<std::string, std::string> data;
        while (start < string_data.length()) {
            size_t eq_pos = string_data.find("=", start);
            size_t amp_pos = string_data.find("&", start);

            if (eq_pos == std::string::npos) return data;

            std::string key = string_data.substr(start, eq_pos - start);
            std::string value;
            if (amp_pos == std::string::npos) {
                value = string_data.substr(eq_pos + 1);
                data[key] = value;
                return data;
            } else {
                value = string_data.substr(eq_pos + 1, amp_pos - eq_pos - 1);
                data[key] = value;
                start = amp_pos + 1;
            }
        }
        return data;
}
