/*
 *  CrossingTheDivideLib.cpp
 *  CrossingTheDivideLib
 *
 *  Created by Shawn Campbell on 1/30/17.
 *  Copyright © 2017 Shawn Campbell. All rights reserved.
 *
 */

#include <iostream>
#include "CrossingTheDivideLib.hpp"
#include "CrossingTheDivideLibPriv.hpp"

void CrossingTheDivideLib::HelloWorld(const char * s)
{
    CrossingTheDivideLibPriv *theObj = new CrossingTheDivideLibPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void CrossingTheDivideLibPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

