//
// Created by User on 7/3/2023.
//

#include "ListningSocket.h"

WSOC::ListningSocket::ListningSocket(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface,
                                     int _iBacklog) : BindingSocket(_iDomain, _iService, _iProtocol, _iPort, _ulInterface)
{
    cout << "Listening Socket created" << endl;
    i_backlog = _iBacklog;
    start_listning();
    test_connection(i_Listning);
}

void WSOC::ListningSocket::start_listning()
{
    cout << "Start Listening at Listening Socket" << endl;
    i_Listning = listen(getSock(), i_backlog);
}


