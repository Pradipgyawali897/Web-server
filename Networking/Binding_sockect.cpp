#include "Binding_sockect.hpp"

HDE::BindingSocket::BindingSocket(int domain,int service,int protocal,int port,u_long interface){
    int connection=connect_to_network(get_sock(),get_address());
    test_connection(connection);
}

int HDE::BindingSocket::connect_to_network(int sock,struct sockaddr_in address){
    return bind(sock,(struct sockaddr *)&address,sizeof(address));
}