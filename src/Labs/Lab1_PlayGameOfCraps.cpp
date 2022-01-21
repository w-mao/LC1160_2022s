/*
 * PlayGameOfCraps.cpp
 *
 *  Created on: Jan. 16, 2022
 *      Author: mao
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int playGamesOfGraps (int n) // n is the parameter
{
	srand(time(0));
	bool endGame = false;
	int dice1 = rand()%6 + 1;
	int dice2 = rand()%6 + 1;

	cout << "dice1: " << dice1 << " and " << "dice2: " << dice2 << endl;

	if ((dice1 + dice2 == 7) || (dice1 + dice2 == 11))
		cout << "You win." << endl;
	else if ((dice1 + dice2 == 2) || (dice1 + dice2 == 3) || (dice1 + dice2 == 12))
		cout << "You lose." << endl;
	else{
		while (endGame == false){
			dice1 = rand()%6 + 1;
			dice2 = rand()%6 + 1;
			cout << "dice1: " << dice1 << " and " << "dice2: " << dice2 << endl;
			if (dice1 + dice2 == n)
			{
				cout << "You win." << endl;
				endGame = true;
			}
			else if (dice1 + dice2 == 7)
			{
				cout << "You lose." << endl;
				endGame = true;
			}

		}

	}
	return 0;

}


