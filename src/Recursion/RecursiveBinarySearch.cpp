/*
 * RecursiveBinarySearch.cpp
 *
 *  Created on: Dec 27, 2021
 *      Author: mao
 */


#include <iostream>
using namespace std;

int binarySearchR(const int list[], int key, int low, int high) // helper function
{
	if (low > high) // The list has been exhausted without a match
		return -low - 1; // key not found, return the insertion point

	int mid = (low + high) / 2;
	if (key < list[mid])
		return binarySearchR(list, key, low, mid - 1);
	else if (key == list[mid])
		return mid;
	else
		return binarySearchR(list, key, mid + 1, high);
}

int binarySearchR(const int list[], int key, int size)
{
	int low = 0;
	int high = size - 1;
	return binarySearchR(list, key, low, high);
}

int testBinarySearchR()
{
	int list[] = { 2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79};
	int i = binarySearchR(list, 2, 13); // Returns 0
	int j = binarySearchR(list, 11, 13); // Returns 4
	int k = binarySearchR(list, 12, 13); // Returns �6

	cout << "binarySearchR(list, 2, 13) returns " << i << endl;
	cout << "binarySearchR(list, 11, 13) returns " << j << endl;
	cout << "binarySearchR(list, 12, 13) returns " << k << endl;

	return 0;
}
