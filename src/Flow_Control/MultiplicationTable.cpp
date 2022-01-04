/*
 * MultiplicationTable.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */


#include <iostream>
#include <iomanip>
using namespace std;

/*
 * The setw() function from <iomanip> header file helps in
 * setting the field width which will be used on output operations.
 */

int multiplicationTable()
{
	cout << " Multiplication Table\n";
	cout << "--------------------------------\n";

	// Display the number title
	cout << "  | ";
	for (int j = 1; j <= 9; j++)
		cout << setw(3) << j;

	cout << "\n";

	// Display table body
	for (int i = 1; i <= 9; i++)
	{
		cout << i << " | ";
		for (int j = 1; j <= 9; j++)
		{
			// Display the product and align properly
			cout << setw(3) << i * j;
		}
		cout << "\n";
	}

	return 0;
}
