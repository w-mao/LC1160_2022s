/*
 * TestDoWhile.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int testDoWhile()
{
	// Keep reading data until the input is 0
	int sum = 0;
	int data = 0;

	do
	{
		sum += data;

		// Read the next data
		cout << "Enter an integer (the input ends " <<
				"if it is 0): ";
		cin >> data;
	}
	while (data != 0);

	cout << "The sum is " << sum << endl;

	return 0;
}


