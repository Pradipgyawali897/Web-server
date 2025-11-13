#ifndef simple_socket_hpp
#define simple_socket_hpp

#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE {
    class SimpleSocket {
        int sock;          // private member to store the socket descriptor
        int connection;
        struct sockaddr_in address;

    public:
        SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
        virtual int connect_to_network(int sock, const struct sockaddr_in& address) = 0;
        void test_connection(int con);
        struct sockaddr_in get_address() const;
        int get_sock() const;
        int get_connection() const;
        void set_connection(int con);
    };
}

#endif
