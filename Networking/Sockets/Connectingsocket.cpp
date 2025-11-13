#include "Connectingsocket.hpp"
#include <cstdio>
#include <unistd.h>
#include <sys/socket.h>

HDE::Connectingsocket::Connectingsocket(int domain, int service, int protocol, int port, u_long interface)
    : SimpleSocket(domain, service, protocol, port, interface)
{
    int con = connect_to_network(get_sock(), get_address());
    set_connection(con);  
    test_connection(get_connection());
}

int HDE::Connectingsocket::connect_to_network(int sock, const struct sockaddr_in& address) {
    int result = connect(sock, (struct sockaddr *)&address, sizeof(address));
    if (result < 0) {
        perror("Connect failed");
    }
    return result;
}
