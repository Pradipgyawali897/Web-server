#ifndef Connectingsocket_hpp
#define Connectingsocket_hpp

#include <cstdio>
#include <iostream>
#include "simple_socket.hpp"

namespace HDE {
    class Connectingsocket : public SimpleSocket {
    public:
        Connectingsocket(int domain, int service, int protocol, int port, u_long interface);

        int connect_to_network(int sock, const struct sockaddr_in& address);
    };
}

#endif
