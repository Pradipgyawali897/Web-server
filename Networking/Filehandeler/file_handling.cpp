#include<fstream>
#include<string>
#include<iostream>
int main(){
    std::ifstream in("hello.html",std::ios::in);
    std::string res;
    in>>res;
    std::cout<<res;
}