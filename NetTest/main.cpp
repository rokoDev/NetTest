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
    
    // Load configuration from file
    el::Configurations conf("myconfig.conf");
    // Reconfigure single logger
    el::Loggers::reconfigureLogger("default", conf);
    // Actually reconfigure all loggers instead
    el::Loggers::reconfigureAllLoggers(conf);
    // Now all the loggers will use configuration from file
    
    LOG(INFO) << "Hello, World! It's me!\n";
    return 0;
}
