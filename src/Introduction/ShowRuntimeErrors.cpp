/*
 * ShowRuntimeErrors.cpp
 *
 *  Created on: Jan 1, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int showRuntimeErrors()
{
	int i = 4;
	int j = 0;
	cout << "A runtime error of division by zero is happening!" << endl;
	cout << i / j << endl;

	return 0;
}

