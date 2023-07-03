//
// Created by User on 7/3/2023.
//

#include "ConnectingSocket.h"

//Constructor
WSOC::ConnectingSocket::ConnectingSocket(int iDomain, int iService, int iProtocol, int iPort, u_long ulInterface)
        : SimpleSocket(iDomain, iService, iProtocol, iPort, ulInterface)
{
    int connection = connect_to_network(getSock(), getAddress());
    setConnection(connection);
    test_connection(getConnection());
}

//definition of connect to network virtual function
int WSOC::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return connect(sock, (struct sockaddr*)&address,sizeof (address));
}
