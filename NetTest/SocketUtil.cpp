//
//  SocketUtil.cpp
//  NetTest
//
//  Created by roko on 7/19/16.
//  Copyright © 2016 roko. All rights reserved.
//

#include "SocketUtil.hpp"

bool SocketUtil::init()
{
#if _WIN32
    WSADATA wsaData;
    int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if ( iResult != NO_ERROR )
    {
        ReportError ("Starting Up");
        return false;
    }
#endif
    return true;
}

void SocketUtil::cleanUp()
{
#if _WIN32
    WSACleanup();
#endif
}

int SocketUtil::GetLastError()
{
#if _WIN32
    return WSAGetLastError();
#else
    return errno;
#endif
    
}