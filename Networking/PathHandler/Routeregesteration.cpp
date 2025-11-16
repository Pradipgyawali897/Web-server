#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
using namespace Hde;

    void hello_handler(){
        return 
        
    }
    void handel_regestration(){
        router.register_path("/hello", hello_handler);
    }

