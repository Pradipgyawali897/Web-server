#ifndef Connectingsocket_hpp
#define Connectingsocket_hpp
#include<stdio.h>
#include<iostream>
#include "simple_socket.hpp"

namespcae HDE{
    class Connectingsocket:public SimpleSocket{
        public:
        Connectingsocket(int domain,int service,int protocal,int port,u_long interface)
        :SimpleSocket::SimpleSocket(int domain,int service,int protocal,int port,u_long interface);
        int connect_to_network(int sock ,struct sockaddr_in address)
    }
}

#endif