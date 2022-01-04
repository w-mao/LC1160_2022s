/*
 * TestSwitchOnDays.cpp
 *
 *  Created on: Jan 2, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int testSwitchOnDays()
{
	int day;
	cout << "Enter a day number from 0 to 6: ";
	cin >> day;

	switch (day)
	{
	case 1: // Fall to through to the next case
	case 2: // Fall to through to the next case
	case 3: // Fall to through to the next case
	case 4: // Fall to through to the next case
	case 5: cout << "It's a weekday!" << endl; break;
	case 0: // Fall to through to the next case
	case 6: cout << "It's weekend!" << endl; break;
	default: cout << "Sorry, the input is not correct!" << endl;
	}

	return 0;
}
