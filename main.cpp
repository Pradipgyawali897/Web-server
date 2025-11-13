#include "Networking/Server/TestServer.hpp"

int main() {
    HDE::TestServer server(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10);
    server.lunch();
    return 0;
}
