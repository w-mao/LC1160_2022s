/*
 * TestAscendingOrder.cpp
 *
 *  Created on: Jan 2, 2022
 *      Author: mao
 */




#include <iostream>
using namespace std;

int testAscendingOrder()
{
	 double x, y, z;
	 cout << "Enter the three numbers:";
	 cin >> x >> y >> z;
	 cout << (x <= y && y <= z ? "In ascending order. " : "Not in ascending order.") << endl;
	 return 0;
}
