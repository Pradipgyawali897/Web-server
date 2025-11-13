#include "Listeningsocket.hpp"


HDE::Listeningsocket::Listeningsocket(int domain,int service,int protocal,int port,u_long interface,int bklog)
:BindingSocket(int domain,int service,int protocal,int port,u_long interface){
    backlog=bklog;
    start_listening();
    test_connection(listening);
}
void HDE::Listeningsocket::start_listening(){
    listening =listen(get_connection(),backlog)
}