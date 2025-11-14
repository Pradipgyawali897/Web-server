#include "RequestHandler.hpp"
#include "HeaderParsor.hpp"

HDE::RequestHandler::RequestHandler(std::string request) {
    size_t pos_1 = request.find("\r\n");
    std::string request_line = request.substr(0, pos_1);

    size_t pos1 = request_line.find(' ');
    size_t pos2 = request_line.find(' ', pos1 + 1);

    method  = request_line.substr(0, pos1);
    uri     = request_line.substr(pos1 + 1, pos2 - pos1 - 1);
    version = stof(request_line.substr(pos2 + 1));

    size_t pos_2 = request.find("\r\n\r\n");
    std::string raw_headers = request.substr(pos_1 + 2, pos_2 - (pos_1 + 2));



    std::map<std::string, std::string> header=parseHeaders(raw_headers);
    body = request.substr(pos_2 + 4);
}
