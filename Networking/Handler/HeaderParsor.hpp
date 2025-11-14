#ifndef HEADER_PARSOR_HPP
#define HEADER_PARSOR_HPP

#include <map>
#include <string>
#include "RequestHandler.hpp"

namespace HDE {

class HeaderParser {
    protected:
        std::map<std::string, std::string> headers;
public:
    HeaderParser(const std::string& raw_headers);
};

}

#endif
