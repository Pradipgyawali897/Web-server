#ifndef ROUTER_HPP
#define ROUTER_HPP

#include <string>
#include "register.hpp"

namespace HDE {
    class RequestHandler;  // forward declaration
}

namespace Hde {

class Router : public PathRegistry {
public:
    std::string route(std::string path, const HDE::RequestHandler &request);
    std::string (*get_handler(std::string path))(const HDE::RequestHandler &);
};

extern Router router; 

}

#endif // ROUTER_HPP
