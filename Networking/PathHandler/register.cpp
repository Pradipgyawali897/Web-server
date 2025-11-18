#include "register.hpp"
#include <iostream>
using namespace Hde;

void PathRegistry::register_path(std::string path,
    std::string(*handler_function)(const HDE::RequestHandler &)) {
    path_map[path] = handler_function;
    std::cout << "Registered path: " << path << std::endl;
}
