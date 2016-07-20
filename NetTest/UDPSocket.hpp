//
//  UDPSocket.hpp
//  NetTest
//
//  Created by roko on 7/19/16.
//  Copyright © 2016 roko. All rights reserved.
//

#ifndef UDPSocket_hpp
#define UDPSocket_hpp

#include <stdio.h>

//SOCKET socket(int af/*AF_INET or AF_INET6 of AF_UNSPEC*/, int type/*SOCK_STREAM or SOCK_DGRAM or SOCK_RAW or SOCK_SEQPACKET*/, int protocol/*IPPROTO_UDP or IPPROTO_TCP or IPPROTO_IP/0 */);

//int closesocket(SOCKET sock);//regardless of socket type

//int shutdown(SOCKET sock, int how/*can cease SD_SEND or SD_RECEIVE or SD_BOTH*/);

//for TCP socket type(or stream socket) to ensure that all outgoing and incoming data are transmitted and acknowledged we should first call "shutdown" and then "closesocket".

//int WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);

//int WSACleanup();//should be called as many times as "WSAStartup" has been called

class UDPSocket
{
public:
    
private:
    SOCKET m_Socket;
};

typedef shared_ptr< UDPSocket >	UDPSocketPtr;

#endif /* UDPSocket_hpp */
