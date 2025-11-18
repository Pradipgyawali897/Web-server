#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <string>
#include <iostream>
#include "router.hpp"
#include "../Handler/RequestHandler.hpp"
#include "../Filehandeler/render.hpp"
#include "../Handler/RequestHandler.hpp"





std::string hello_handler(const HDE::RequestHandler &request);
namespace HDE {

bool handle_registration();

}

#endif // HANDLER_HPP
