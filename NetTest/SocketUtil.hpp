//
//  SocketUtil.hpp
//  NetTest
//
//  Created by roko on 7/19/16.
//  Copyright © 2016 roko. All rights reserved.
//

#ifndef SocketUtil_hpp
#define SocketUtil_hpp

enum class SocketAddressFamily {
    INET = AF_INET,
    INET6 = AF_INET6
};

class SocketUtil
{
public:
    
    static bool	init();
    static void	cleanUp();
    
    static int GetLastError();
};

#endif /* SocketUtil_hpp */
