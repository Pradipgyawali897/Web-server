#include "Listeningsocket.hpp"
#include <cstdio>
#include <unistd.h>
#include <sys/socket.h>

HDE::Listeningsocket::Listeningsocket(int domain, int service, int protocol, int port, u_long interface, int bklog)
    : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklog;
    start_listening();
    test_connection(listening);
}

void HDE::Listeningsocket::start_listening() {
    listening = listen(get_sock(), backlog);
    if (listening < 0) {
        perror("Listen failed");
    }
}
