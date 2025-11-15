#include "register.hpp"
#include <string>
#include <map>
#include "router.hpp"


using namespace Hde;

bool Router::route(std::string path) {
    auto path_map = get_path_map();
    auto it = path_map.find(path);
    if(it == path_map.end()) {
        return false;
    }
    void(*handler_function)(void) = get_handler(path);
    if (handler_function) {
        handler_function();
    }
    else{
        return false;
    }
    return true;
}

void(*Router::get_handler(std::string path))(void) {
    auto path_map = get_path_map();
    auto it = path_map.find(path);
    if (it != path_map.end()) {
        return it->second;
    }
    return nullptr;
}