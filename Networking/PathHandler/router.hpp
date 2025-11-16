#ifndef router_hpp
#define router_hpp
#include <string>
#include <map>
#include "register.hpp"
namespace Hde
{
    class Router:public PathRegistry    
    {
    public:
        bool route(std::string path, const HDE::RequestHandler &request);
        std::string(*get_handler(std::string path))(const HDE::RequestHandler &);

    };
    extern Router router;
}
#endif // !router_hpp
