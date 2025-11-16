#include "simpleserver.hpp"

HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interface, int backlog) {
    socket = new Listeningsocket(domain, service, protocol, port, interface, backlog);
}

HDE::Listeningsocket* HDE::SimpleServer::get_socket() {
    return socket;
}

// Default responder definition
void HDE::SimpleServer::responder(const std::string &body) {
    // Default implementation: can be empty
}

HDE::SimpleServer::~SimpleServer() {
    if (socket) {
        delete socket;
        socket = nullptr;
    }
}
