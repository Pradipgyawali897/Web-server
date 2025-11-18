#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <string>
#include <iostream>
#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
#include "../Filehandeler/render.hpp"
#include "../Handler/RequestHandler.hpp"


namespace Hde {

std::string hello_handler(const HDE::RequestHandler &request);

void handel_regestration();

} 

#endif // HANDLER_HPP
