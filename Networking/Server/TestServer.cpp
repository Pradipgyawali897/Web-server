#include "TestServer.hpp"
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>
#include <iostream>

using namespace HDE;

TestServer::TestServer(int domain, int service, int protocol, int port, u_long interface, int bklog)
    : SimpleServer(domain, service, protocol, port, interface, bklog) {}

void TestServer::acceptor() {
    struct sockaddr_in client_addr;
    socklen_t addrlen = sizeof(client_addr);

    new_socket = accept(get_socket()->get_sock(), (struct sockaddr*)&client_addr, &addrlen);
    if (new_socket < 0) {
        perror("Failed to accept connection");
        return;
    }

    std::cout << "New client connected!" << std::endl;
}

void TestServer::handlor() {
    char buffer[1024] = {0};
    int bytesReceived = read(new_socket, buffer, 1024);
    if (bytesReceived < 0) {
        perror("Error reading from client");
        return;
    }

    std::cout << "Received request:\n" << buffer << std::endl;
}

void TestServer::responder() {
    const char* httpResponse =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "Connection: close\r\n\r\n"
        "<html><body><h1>Hello from your C++ Web Server </h1></body></html>";

    send(new_socket, httpResponse, strlen(httpResponse), 0);
    std::cout << "Response sent to client.\n";
    close(new_socket);
}

void TestServer::lunch() {
    while (true) {
        acceptor();
        handlor();
        responder();
    }
}
