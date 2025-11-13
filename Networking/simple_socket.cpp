#include "simple_socket.hpp"


HDE::SimpleSocket::SimpleSocket(int domain,int service,int protocal,u_long interface){
    address.sin_family=domain;
    address.sin_port=htons(port);
    address.sin_addr.s_addr=htonl(interface)
    sock=socket(domain,service,protocal);
    connect=connect_to_network();
}