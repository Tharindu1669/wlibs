//
// Created by User on 7/3/2023.
//

#ifndef NETWORKING_TESTSERVER_H
#define NETWORKING_TESTSERVER_H

#include <stdio.h>
#include "SimpleServer.h"

namespace WSOC
{
class TestServer : public SimpleServer
{
public:
    TestServer();

    void launch();
private:
    void handler();
    void responder();
    void acceptor();

    int new_socket;
    char buffer[30000];
};
}

#endif //NETWORKING_TESTSERVER_H
