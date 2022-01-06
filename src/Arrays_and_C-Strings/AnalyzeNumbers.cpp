/*
 * AnalyzeNumbers.cpp
 *
 *  Created on: Jan 5, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;


int analyzeNumbers()
{
	cout << "Analyzing an array with the size of 10 ..." << endl;
	const int NUMBER_OF_ELEMENTS = 10;
	double numbers[NUMBER_OF_ELEMENTS];
	double sum = 0;

	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
	{
		cout << "Enter a new number: ";
		cin >> numbers[i];
		sum += numbers[i];
	}

	double average = sum / NUMBER_OF_ELEMENTS;

	int count = 0; // The number of elements above average
	for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
		if (numbers[i] > average)
			count++;

	cout << "Average is " << average << endl;
	cout << "Number of elements above the average " << count << endl;

	return 0;
}


