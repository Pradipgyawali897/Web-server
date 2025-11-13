#ifndef Listeningsocket_hpp
#define Listeningsocket_hpp

#include <cstdio>
#include "Binding_sockect.hpp"

namespace HDE {
    class Listeningsocket : public BindingSocket {
        int backlog;
        int listening;

    public:
        Listeningsocket(int domain, int service, int protocol, int port, u_long interface, int bklog);

        void start_listening();
    };
}

#endif
