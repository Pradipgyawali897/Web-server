#ifndef Binding_sockect_hpp
#define Binding_sockect_hpp


#include<stdio.h>

#include "simple_socket.hpp"

namespcae HDE{
    class BindingSocket:public SimpleSocket{
        public:
        BindingSocket(int domain,int service,int protocal,int port,u_long interface)
        :SimpleSocket::SimpleSocket(int domain,int service,int protocal,int port,u_long interface);
        int connect_to_network(int sock ,struct sockaddr_in address)
    }
}

#endif