/*
 * RepeatSubtractionQuiz.cpp
 *
 *  Created on: Jan 3, 2022
 *      Author: mao
 */

#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int repeatSubtractionQuiz()
{
	// 1. Generate two random single-digit integers
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	// 2. If number1 < number2, swap number1 with number2
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	// 3. Prompt the student to answer "What is number1 - number2"
	cout << "What is " << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;

	// 4. Repeatedly ask the user the question until it is correct
	while (number1 - number2 != answer)
	{
		cout << "Wrong answer. Try again. What is "
				<< number1 << " - " << number2 << "? ";
		cin >> answer;
	}



	cout << "You got it!" << endl;

	return 0;
}


