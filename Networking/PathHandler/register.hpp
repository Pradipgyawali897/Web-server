#ifndef register_hpp
#define REGISTER_HPP
#include <string>
#include <map>
namespace Hde
{
    class PathRegistry{
        std::map<std::string, void(*)(void)> path_map;
    public:
       
        void register_path(std::string path, void(*handler_function)(void));
        std::map<std::string, void(*)(void)> get_path_map(){
            return path_map;
        }
    };
} 


#endif // !register_hpp
