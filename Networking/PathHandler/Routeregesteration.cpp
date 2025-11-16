#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
#include "../Filehandeler/render.hpp"
#include "../Handler/RequestHandler.hpp"
using namespace Hde;

    std::string hello_handler(const HDE::RequestHandler &request){
        return render(request,"hello");
        
    }
    void handel_regestration(){
        router.register_path("/hello", hello_handler);
    }

