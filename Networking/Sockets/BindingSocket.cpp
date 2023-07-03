//
// Created by User on 7/2/2023.
//

#include "BindingSocket.h"

//Constructor
WSOC::BindingSocket::BindingSocket(int iDomain, int iService, int iProtocol, int iPort, u_long ulInterface)
        : SimpleSocket(iDomain, iService, iProtocol, iPort, ulInterface)
{
    cout << "Binding Socket created" << endl;
    int connection = connect_to_network(getSock(), getAddress());
    setConnection(connection);
    cout << "Testing connection at Binding Socket" << endl;
    test_connection(getConnection());
}

//definition of connect to network virtual function
int WSOC::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr*)&address,sizeof (address));
}
