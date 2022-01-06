/*
 * BinarySearch.cpp
 *
 *  Created on: Jan 5, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return -low - 1;
}


int testBinarySearch()
{
	int list[] = {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79};
	cout << "Testing binary search: looking for 11 in {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79}" << endl;
	cout << "The index is: " << binarySearch(list, 11, sizeof(list)/sizeof(list[0])) << endl;

	return 0;
}
