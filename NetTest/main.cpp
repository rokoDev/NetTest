//
//  main.cpp
//  NetTest
//
//  Created by roko on 7/15/16.
//  Copyright © 2016 roko. All rights reserved.
//

#include <iostream>

#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, const char * argv[]) {
    // insert code here...
    START_EASYLOGGINGPP(argc, argv);
    
    LOG(INFO) << "Hello, World!\n";
    return 0;
}
