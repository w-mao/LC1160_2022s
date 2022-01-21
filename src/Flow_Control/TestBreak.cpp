/*
 * TestBreak.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int testBreak()
{
	cout << "Testing break ... " << endl;

	int sum = 0;
	int number = 0;

	while (number < 20)
	{
		number++;
		sum += number;
		if (sum >= 100)
			break;
	}

	cout << "The number is " << number << endl;
	cout << "The sum is " << sum << endl;

	return 0;
}
