/*
 * EffectOfPassArrayDemo.cpp
 *
 *  Created on: Jan 5, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

void passArray(int, int []);

int effectOfPassArrayDemo()
{
	int x = 1; // x represents an int value
	int y[10]; // y represents an array of int values
	y[0] = 1; // Initialize y[0]

	passArray(x, y); // Invoke m with arguments x and y

	cout << "x is " << x << endl;
	cout << "y[0] is " << y[0] << endl;

	return 0;
}

void passArray(int number, int numbers[])
{
	number = 1001; // Assign a new value to number
	numbers[0] = 5555; // Assign a new value to numbers[0]
}


