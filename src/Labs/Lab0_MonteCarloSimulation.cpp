/*
 * Lab0_MonteCarloSimulation.cpp
 *
 *  Created on: Jan. 9, 2022
 *      Author: mao
 */


#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;


int monteCarloSimulation()
{
	srand(time(0));
    int count = 0;
    int total = 30;

    for (int i = 0; i < total; i++) {
        float x = float(rand())/RAND_MAX * 2.0 - 1;
        float y = float(rand())/RAND_MAX * 2.0 - 1;

        cout<< "i = " << i << ": " << "x = : " << x << ", and y = "<< y << " in ";
        if (x < 0){
            count++;
        	cout << "area 1" << endl;
        }
        else if (x < 1 && x > 0 && y < 1 && y > 0 && -x+1 >= y) {
            count++;
            cout << "area 3" << endl;
        }
        else if(y < 0 && x > 0)
        	cout << "area 4" << endl;
        else cout << "area 2" << endl;
    }
    cout << "Odd rate is " << float(count)/total << endl;


	return 0;
}
