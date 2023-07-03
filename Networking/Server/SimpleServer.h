//
// Created by User on 7/3/2023.
//

#ifndef NETWORKING_SIMPLESERVER_H
#define NETWORKING_SIMPLESERVER_H

#include <stdio.h>
#include <unistd.h>
#include "../wlibc-networking.h"
namespace WSOC
{
class SimpleServer
{
public:
    SimpleServer(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface, int _iBacklog);

//    virtual ~SimpleServer();
    virtual void launch() = 0;
    ListningSocket * get_socket();
private:
    virtual void handler() = 0;
    virtual void responder() = 0;
    virtual void acceptor() = 0;

    ListningSocket* socket;
};
}

#endif //NETWORKING_SIMPLESERVER_H
