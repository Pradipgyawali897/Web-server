#pragma once
#include<istream>
#include<string>
#include<algorithm>
#include "../Handler/RequestHandler.hpp"

std::string render(const HDE::RequestHandler &request, const std::string &path);

std::string create_response(const std::string &request,int status=200);
   
    




