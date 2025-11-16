#ifndef REGISTER_HPP
#define REGISTER_HPP
#include <string>
#include <map>
#include "../Handler/RequestHandler.hpp"

namespace Hde {

class PathRegistry {
    std::map<std::string, std::string(*)(const HDE::RequestHandler &)> path_map;


public:
    void register_path(std::string path,std::string(*handler_function)(const HDE::RequestHandler &));
    
    std::map<std::string, std::string(*)(const HDE::RequestHandler&)> get_path_map() const {
        return path_map;
    }
};

} // namespace Hde

#endif
