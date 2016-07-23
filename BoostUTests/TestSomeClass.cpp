//
//  TestSomeClass.cpp
//  NetTest
//
//  Created by roko on 7/22/16.
//  Copyright © 2016 roko. All rights reserved.
//

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "TestSomeClass.hpp"

BOOST_AUTO_TEST_CASE(first_test)
{
    int i = 1;
    BOOST_TEST(i);
    BOOST_TEST(i == 2);
}