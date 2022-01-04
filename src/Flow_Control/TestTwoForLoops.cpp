/*
 * TestTwoForLoops.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int testTwoForLoops()
{
	int sum = 0;
	cout << "Testing for (int i = 0; i < 10; ++i) " << endl;
	for (int i = 0; i < 10; ++i)
	{
		sum += i; // how about sum += ++i;
	}
	cout << "The sum is: " << sum << endl;

	sum = 0; // sum is set to 0 again
	cout << "Testing for (int i = 0; i < 10; i++) " << endl;
	for (int i = 0; i < 10; i++)
	{
		sum += i; // how about sum += i++;
	}
	cout << "The sum is: " << sum << endl;


	return 0;
}

