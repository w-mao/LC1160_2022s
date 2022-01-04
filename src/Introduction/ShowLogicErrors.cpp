/*
 * ShowLogicErrors.cpp
 *
 *  Created on: Jan 1, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int showLogicErrors()
{
	cout << "Celsius 35 is Fahrenheit degree " << endl;
	cout << (9 / 5) * 35 + 32 << endl; // supposed to be 9.0 / 5

	return 0;
}


