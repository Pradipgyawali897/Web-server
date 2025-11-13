#include "Connectingsocket.hpp"



HDE::Connectingsocket::Connectingsocket(int domain,int service,int protocal,int port,u_long interface){
    int con=connect_to_network(get_sock(),get_address());
    set_conncetion(con);
    test_connection(get_connection());
}

int HDE::Connectingsocket::connect_to_network(int sock,struct sockaddr_in address){
    return connect(sock,(struct sockaddr *)&address,sizeof(address));
}