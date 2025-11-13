#ifndef TestServer_hpp
#define TestServer_hpp

#include "simpleserver.hpp"
#include <iostream>
#include <unistd.h>

namespace HDE {
    class TestServer : public SimpleServer {
        int new_socket; 
    public:
        TestServer(int domain, int service, int protocol, int port, u_long interface, int bklog);

        void acceptor() override;
        void handlor() override;
        void responder() override;
        void lunch() override;
    };
}

#endif
