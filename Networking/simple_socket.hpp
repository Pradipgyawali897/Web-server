#ifndef simple_socket_hpp
#define simple_socket_hpp

#include <stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

namespcae HDE{
    class SimpleSocket{
        int sock;//a private member to store the socket descriptor
        int connection;
        struct sockaddr_in address;
        public:
        SimpleSocket(int domain,int service,int protocal,u_long interface);//The constructor is used to take the argument for the socket creation
        virtual int connect_to_network()=0;
    }
}
#endif