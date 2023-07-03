//
// Created by User on 7/2/2023.
//

#ifndef NETWORKING_SIMPLESOCKET_H
#define NETWORKING_SIMPLESOCKET_H
#include <stdio.h>
#include <winsock2.h>
#include "ws2tcpip.h"
#include <iostream>

using namespace std;

namespace WSOC
{
class SimpleSocket
{
public:
    SimpleSocket(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface);
    virtual int connect_to_network(int sock, struct sockaddr_in addr) = 0;
    void test_connection(int item_to_test);

    const sockaddr_in getAddress();
    void setAddress(const sockaddr_in &address);

    int getSock();
    void setSock(int sock);

    int getConnection();
    void setConnection(int connection);

private:
    struct sockaddr_in address;
    int sock;
    int connection;
};
}




#endif //NETWORKING_SIMPLESOCKET_H
