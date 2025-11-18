#include <string>
#include <map>
#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
#include "register.hpp"
#include "Routeregesteration.hpp"
namespace Hde {
    Router router;   // Global router instance
}

bool Hde::Router::route(std::string path,const HDE::RequestHandler& request) {
    std::cout << "Routing path: " << path << std::endl;
    handel_regestration();//Here to debug up to 
    auto it = this->path_map[path];
    if (it == nullptr) {
        std::cout << "No handler found for path: " << path << std::endl;
        return false;
    }
    auto handler_function = get_handler(path);
    if (handler_function) {
        handler_function(request);
        std::cout << "Routed to handler for path: " << path << std::endl;
        return true;
    }

    return false;
}

std::string (*Hde::Router::get_handler(std::string path))(const  HDE::RequestHandler &) {
    std::cout << "Getting handler for path: " << path << std::endl;
    auto path_map = get_path_map();
    for (const auto& pair : path_map) {
        std::cout << "Registered path: " << pair.first << std::endl;
    }
    auto it = path_map.find(path);

    if (it != path_map.end()) {
        std::cout << "Found handler for path: " << path << std::endl;
        return it->second;
    }

    return nullptr;
}
