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

std::string CrossingTheDivideLib::HelloWorld(const std::string & s)
{
    CrossingTheDivideLibPriv *theObj = new CrossingTheDivideLibPriv;
	std::string ret = theObj->HelloWorldPriv(s);
    delete theObj;
	return ret;
};

void CrossingTheDivideLib::quickSort(int* arr, int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
};

std::string CrossingTheDivideLibPriv::HelloWorldPriv(const std::string & s)
{
	return s;
};

