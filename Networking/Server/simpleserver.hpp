#ifndef SIMPLESERVER_HPP
#define SIMPLESERVER_HPP

#include <string>
#include "../base-networking.hpp"

namespace HDE {

    class SimpleServer {
        Listeningsocket *socket;

        virtual void acceptor() = 0;
        virtual void handlor() = 0;
        virtual void responder(const std::string &body);  // changed to const reference

    public:
        SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklog);
        virtual void lunch() = 0;
        Listeningsocket *get_socket();
        virtual ~SimpleServer();
    };

}

#endif
