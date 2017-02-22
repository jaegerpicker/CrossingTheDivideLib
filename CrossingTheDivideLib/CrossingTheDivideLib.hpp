/*
 *  CrossingTheDivideLib.hpp
 *  CrossingTheDivideLib
 *
 *  Created by Shawn Campbell on 1/30/17.
 *  Copyright © 2017 Shawn Campbell. All rights reserved.
 *
 */

#ifndef CrossingTheDivideLib_
#define CrossingTheDivideLib_

/* The classes below are exported */
#pragma GCC visibility push(default)
#include "string"

class CrossingTheDivideLib
{
    public:
	std::string HelloWorld(const std::string &);
	void quickSort(int unsorted[], int low, int right);
};

#pragma GCC visibility pop
#endif
