//
// Created by User on 7/2/2023.
//

#include "SimpleSocket.h"


WSOC::SimpleSocket::SimpleSocket(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface)
{
    cout << "Simple Socket created" << endl;
    //Define address structure.
    address.sin_family = _iDomain;
    //address.sin_port = htons(_iPort);
    address.sin_port = htons(80);
    //address.sin_addr.s_addr = htonl(_ulInterface);
    address.sin_addr.s_addr = inet_addr("127.0.0.1");
    // Establish socket.
    sock = socket(_iDomain, _iService, _iProtocol);
    test_connection(sock);
}

void WSOC::SimpleSocket::test_connection(int item_to_test)
{
    //Confirm that the connection or socket establish successfully
    if(item_to_test < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

const sockaddr_in WSOC::SimpleSocket::getAddress()
{
    return address;
}

int WSOC::SimpleSocket::getSock()
{
    return sock;
}

int WSOC::SimpleSocket::getConnection()
{
    return connection;
}

void WSOC::SimpleSocket::setAddress(const sockaddr_in &address)
{
    SimpleSocket::address = address;
}

void WSOC::SimpleSocket::setSock(int sock)
{
    SimpleSocket::sock = sock;
}

void WSOC::SimpleSocket::setConnection(int connection)
{
    SimpleSocket::connection = connection;
}
