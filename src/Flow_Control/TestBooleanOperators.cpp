/*
 * TestBooleanOperators.cpp
 *
 *  Created on: Jan 2, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int testBooleanOperators()
{
	int number;
	cout << "Enter an integer: ";
	cin >> number;

	if (number % 2 == 0 && number % 3 == 0)
		cout << number << " is divisible by 2 and 3." << endl;

	if (number % 2 == 0 || number % 3 == 0)
		cout << number << " is divisible by 2 or 3." << endl;

	if ((number % 2 == 0 || number % 3 == 0) &&
			!(number % 2 == 0 && number % 3 == 0))
		cout << number << " is divisible by 2 or 3, but not both." << endl;
	else
		cout << number << " is not divisible by 2 or 3." << endl;

	return 0;
}

