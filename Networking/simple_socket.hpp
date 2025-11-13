#ifndef simple_socket_hpp
#define simple_socket_hpp

#include <stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<iostream>

namespcae HDE{
    class SimpleSocket{
        int sock;//a private member to store the socket descriptor
        int connection;
        struct sockaddr_in address;
        public:
        SimpleSocket(int domain,int service,int protocal,u_long interface);//The constructor is used to take the argument for the socket creation
        virtual int connect_to_network(int sock ,struct sockaddr_in address)=0;//to make scure the bind and connect is called dependng the server or client 
        void test_connection(int);
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
    }
}
#endif