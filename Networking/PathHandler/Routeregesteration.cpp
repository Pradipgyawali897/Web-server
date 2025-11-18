#include "Routeregesteration.hpp"  
#include "../Filehandeler/render.hpp"    
#include <iostream>

std::string hello_handler(const HDE::RequestHandler& request) {
    return render(request, "hello");
}

bool HDE::handle_registration() {         
    Hde::router.register_path("/", hello_handler);   
    return true;
}