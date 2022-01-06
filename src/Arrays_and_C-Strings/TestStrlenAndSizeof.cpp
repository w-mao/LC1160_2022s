/*
 * TestStrlenAndSizeof.cpp
 *
 *  Created on: Jan 5, 2022
 *      Author: mao
 */
#include <iostream>
#include <cstring>

using namespace std;


int testStrlenAndSizeof()
{
    char city[30];
    cout << "Enter a city: "; // i.e., New York
    cin.getline(city, 30, '\n'); // Read to array city
    cout << "You entered " << city << endl;

    cout << "strlen() returns:" << strlen(city) << endl;
    cout << "sizeof() returns:" << sizeof(city) << endl;

    return 0;
}
