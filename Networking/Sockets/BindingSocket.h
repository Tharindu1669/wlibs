//
// Created by User on 7/2/2023.
//

#ifndef NETWORKING_BINDINGSOCKET_H
#define NETWORKING_BINDINGSOCKET_H

#include <stdio.h>
#include "SimpleSocket.h"

namespace WSOC
{
class BindingSocket: public SimpleSocket
{
public:
    BindingSocket(int iDomain, int iService, int iProtocol, int iPort, u_long ulInterface);
    int connect_to_network(int stock, struct sockaddr_in address);
};
}

#endif //NETWORKING_BINDINGSOCKET_H
