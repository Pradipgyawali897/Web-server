#include "render.hpp"
#include<iostream>
#include <fstream>
#include<string>

std::string render(HDE::RequestHandler request,std::string &path){
    std::string full_path=path+".html";
    std::ifstream in(path,std::ios::in);
    if(!in){
        std::cout<<"NO such file found";
        
    }
}