#include "register.hpp"

using namespace Hde;

void PathRegistry::register_path(std::string path, void(*handler_function)(void)) {
    path_map[path] = handler_function;
}