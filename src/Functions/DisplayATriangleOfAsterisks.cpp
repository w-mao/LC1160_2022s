/*
 * DisplayATriangleOfAsterisks.cpp
 *
 *  Created on: Jan 4, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

int displayATriangleOfAsterisks()
{
	int row = 0;
	cout << "This program prints a triangle of asterisks.\nPLease Enter the row number: ";
	cin >> row;
	//print asterisks
	for (int i = 1; i <=row  ; i++) {
		for (int j = 1; j <= row ; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
















/*
int displayATriangleOfAsterisks()
{
	int row = 0;
	cout << "This program prints a triangle of asterisks.\nPLease Enter the row number: ";
	cin >> row;
	//print asterisks
	for (int i = 1; i <=row  ; i++) {
		for (int j = 1; j <= i ; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
*/
