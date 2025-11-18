#include "render.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "../Server/TestServer.hpp"

std::string render(const HDE::RequestHandler &request, const std::string &path) {
    //std::string full_path = path + ".html";
    std::string full_path="hello.html"; // Temporary hardcoded for testing
    std::ifstream in(full_path);
    if (!in.is_open()) {
        std::cout << "No such file found: " << full_path << std::endl;
        return "<h1>404 - File Not Found</h1>";
    }

    std::stringstream buffer;
    buffer << in.rdbuf();  

    return buffer.str();
}
