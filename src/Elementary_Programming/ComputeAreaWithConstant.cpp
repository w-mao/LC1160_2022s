/*
 * ComputeAreaWithConstant.cpp
 *
 *  Created on: Jan 1, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int computeAreaWithConstant()
{
	const double PI = 3.14159; // PI is a constant
	cout << "Testing a constant:  const double PI = 3.14159" << endl;

	// Step 1: Read in radius
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// Step 2: Compute area
	double area = radius * radius * PI;

	// Step 3: Display the area
	cout << "The area is ";
	cout << area << endl;

	return 0;
}

