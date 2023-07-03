//
// Created by User on 7/3/2023.
//

#include "SimpleServer.h"

WSOC::SimpleServer::SimpleServer(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface,
                                 int _iBacklog)
{
    cout << "Simple server created" << endl;
    socket = new ListningSocket(_iDomain, _iService, _iProtocol, _iPort,
                                _ulInterface, _iBacklog);
}

//WSOC::SimpleServer::~SimpleServer()
//{
//    delete socket;
//    socket = NULL;
//}

WSOC::ListningSocket *WSOC::SimpleServer::get_socket()
{
    return socket;
}
