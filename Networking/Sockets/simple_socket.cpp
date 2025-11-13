#include "simple_socket.hpp"


HDE::SimpleSocket::SimpleSocket(int domain,int service,int protocal,int port,u_long interface){
    address.sin_family=domain;
    address.sin_port=htons(port);
    address.sin_addr.s_addr=htonl(interface);
    sock=socket(domain,service,protocal);
    test_connection(sock);

}-
void HDE::SimpleSocket::test_connection(int item_to_test){
    if(item_to_test<0){
        perror("Failed for sockect estblishment ...");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in HDE::SimpleSocket::get_address(){
    return address;
}
int sockaddr_in HDE::SimpleSocket::get_sock(){
    return sock;
}
int sockaddr_in HDE::SimpleSocket::get_connection(){
    return connection;
}
void HDE::SimpleSocket::set_conncetion(int con){
    connection=con;
}