//
// Created by User on 7/3/2023.
//

#ifndef NETWORKING_CONNECTINGSOCKET_H
#define NETWORKING_CONNECTINGSOCKET_H

#include <stdio.h>
#include "SimpleSocket.h"

namespace WSOC
{
class ConnectingSocket : public SimpleSocket
{
public:
    ConnectingSocket(int iDomain, int iService, int iProtocol, int iPort, u_long ulInterface);
    int connect_to_network(int stock, struct sockaddr_in address);

};
}

#endif //NETWORKING_CONNECTINGSOCKET_H
