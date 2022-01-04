/*
 * TestContinue.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int testContinue()
{
	cout << "Testing continue ... " << endl;

	int sum = 0;
	int number = 0;

	while (number < 20)
	{
		number++;
		if (number == 10 || number == 11)
			continue;
		sum += number;
	}

	cout << "The sum is " << sum << endl;

	return 0;
}

