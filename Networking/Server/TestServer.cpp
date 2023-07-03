//
// Created by User on 7/3/2023.
//

#include "TestServer.h"

WSOC::TestServer::TestServer()
        : SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10)
{
    buffer[30000] = {0};
    cout << "Test server created" << endl;
    launch();
}

void WSOC::TestServer::launch()
{
    while (true)
    {
        std::cout << "======== WAITING =======" << std::endl;
        acceptor();
        handler();
        responder();
        std::cout << "======== DONE =======" << std::endl;
    }
}

void WSOC::TestServer::handler()
{
    cout << "Buffer Len: " << strlen(buffer) << endl;
    std::cout << buffer << std::endl;
}

void WSOC::TestServer::responder()
{
    cout << "responder called" << endl;
    char *hello = "Hello from server";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}

void WSOC::TestServer::acceptor()
{
    cout << "inside acceptor" << endl;
    struct sockaddr_in address = get_socket()->getAddress();

    cout << "Domain: " << address.sin_family << endl;
    cout << "port: " << address.sin_port << endl;
    cout << "Address: " << inet_ntoa(address.sin_addr) << endl;

    int iAddrLen = sizeof (address);
    new_socket = accept(get_socket()->getSock(), (struct sockaddr*)&address, (socklen_t *)&iAddrLen);
    accep
    cout << "New Socket '" << new_socket << "'" << endl;
    read(new_socket, buffer, 25000);
}
