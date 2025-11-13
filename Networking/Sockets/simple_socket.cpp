#include "simple_socket.hpp"
#include <cstdlib>
#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface) {
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    sock = socket(domain, service, protocol);
    test_connection(sock);
}

void HDE::SimpleSocket::test_connection(int item_to_test) {
    if (item_to_test < 0) {
        perror("Socket establishment failed");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in HDE::SimpleSocket::get_address() const {
    return address;
}

int HDE::SimpleSocket::get_sock() const {
    return sock;
}

int HDE::SimpleSocket::get_connection() const {
    return connection;
}

void HDE::SimpleSocket::set_connection(int con) {
    connection = con;
}
