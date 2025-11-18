#include "Routeregesteration.hpp"
namespace Hde {

std::string hello_handler(const HDE::RequestHandler &request) {
    std::cout << "hello handler called" << std::endl;
    return render(request, "hello");
}

void handel_regestration() {
    router.register_path("/", hello_handler);
}

} // namespace Hde
