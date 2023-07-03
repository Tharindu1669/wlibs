//
// Created by User on 7/3/2023.
//

#ifndef NETWORKING_LISTNINGSOCKET_H
#define NETWORKING_LISTNINGSOCKET_H

#include <stdio.h>
#include "BindingSocket.h"

namespace WSOC
{
class ListningSocket : public BindingSocket
{
public:
    ListningSocket(int _iDomain, int _iService, int _iProtocol, int _iPort, u_long _ulInterface, int _iBacklog);
    void start_listning();
private:
    int i_backlog;
    int i_Listning;
};
}


#endif //NETWORKING_LISTNINGSOCKET_H
