#include "Binding_sockect.hpp"
#include <cstdio>
#include <unistd.h>
#include <sys/socket.h>

HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface)
    : SimpleSocket(domain, service, protocol, port, interface)
{
    int con = connect_to_network(get_sock(), get_address());
    set_connection(con);
    test_connection(get_connection());
}

int HDE::BindingSocket::connect_to_network(int sock, const struct sockaddr_in& address) {
    int result = bind(sock, (struct sockaddr *)&address, sizeof(address));
    if (result < 0) {
        perror("Bind failed");
    }
    return result;
}
