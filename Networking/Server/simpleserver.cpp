#include "simpleserver.hpp"

HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interface, int backlog) {
    socket = new Listeningsocket(domain, service, protocol, port, interface, backlog);
}

HDE::Listeningsocket* HDE::SimpleServer::get_socket() {
    return socket;
}

HDE::SimpleServer::~SimpleServer() {
    if (socket) {
        delete socket;
        socket = nullptr;
    }
}
