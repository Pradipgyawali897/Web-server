#ifndef Binding_sockect_hpp
#define Binding_sockect_hpp

#include <cstdio>
#include "simple_socket.hpp"

namespace HDE {
    class BindingSocket : public SimpleSocket {
    public:
        // Constructor
        BindingSocket(int domain, int service, int protocol, int port, u_long interface);
            

        // Function to connect
        int connect_to_network(int sock, const struct sockaddr_in& address);
    };
}

#endif
