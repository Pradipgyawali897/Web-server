#include "register.hpp"
#include <string>
#include <map>
#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
namespace Hde {
    Router router;   // Global router instance
}

bool Hde::Router::route(std::string path,const HDE::RequestHandler& request) {
    auto path_map = get_path_map();
    auto it = path_map.find(path);

    if (it == path_map.end()) {
        return false;
    }

    auto handler_function = get_handler(path);
    if (handler_function) {
        handler_function(request);
        return true;
    }

    return false;
}

std::string (*Hde::Router::get_handler(std::string path))(const  HDE::RequestHandler &) {
    auto path_map = get_path_map();
    auto it = path_map.find(path);

    if (it != path_map.end()) {
        return it->second;
    }

    return nullptr;
}
