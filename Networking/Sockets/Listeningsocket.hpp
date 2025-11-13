#ifndef Listeningsocket_hpp
#define Listeningsocket_hpp
#include<stdio.h>
#include "Binding_sockect.hpp"
namespcae HDE{
    class Listeningsocket:public BindingSocket{
        int backlog;
        int listening;
        public:
        Listeningsocket(int domain,int service,int protocal,int port,u_long interface,int bklog)
        :BindingSocket(int domain,int service,int protocal,int port,u_long interface);
        void start_listening();
    }
}

#endif