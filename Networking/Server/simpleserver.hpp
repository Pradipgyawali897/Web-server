#ifndef simpleserver_hpp
#define simpleserver_hpp
#include<stdio.h>
#include "../base-networking.hpp"


namespace HDE{
    class SimpleServer{
        Listeningsocket *socket;
        virtual void acceptor()=0;
        virtual void handlor()=0;
        virtual void responder()=0;
        public:
        SimpleServer(int domain, int service, int protocol, int port, u_long interface, int bklog);
        virtual void lunch()=0;
        Listeningsocket * get_socket();
         ~SimpleServer();
    };
}

#endif // !simpleserver_hpp
