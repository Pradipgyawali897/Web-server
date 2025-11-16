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
        bool route(std::string path);
        void(*get_handler(std::string path))(void);

    };
    extern Router router;
}
#endif // !router_hpp
