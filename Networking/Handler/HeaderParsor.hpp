#ifndef HeaderParsor_hpp
#define HeaderParsor_hpp

#include <string>
#include <map>

std::map<std::string, std::string> parseHeaders(const std::string& raw_headers);

#endif
