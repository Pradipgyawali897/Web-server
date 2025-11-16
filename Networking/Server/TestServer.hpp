#ifndef TESTSERVER_HPP
#define TESTSERVER_HPP

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
        void responder(const std::string &body) override;  // must match base
        void lunch() override;
    };

}

#endif
