#ifndef REGISTER_HPP
#define REGISTER_HPP

#include <string>
#include <map>

namespace HDE {
    class RequestHandler;   // forward declaration
}

namespace Hde {

class PathRegistry {
    protected:
    std::map<std::string, std::string(*)(const HDE::RequestHandler &)> path_map;

public:
    void register_path(std::string path,
                       std::string(*handler_function)(const HDE::RequestHandler &));
                    

    std::map<std::string, std::string(*)(const HDE::RequestHandler &)> get_path_map() const {
        return path_map;
    }
};

} 

#endif // REGISTER_HPP
