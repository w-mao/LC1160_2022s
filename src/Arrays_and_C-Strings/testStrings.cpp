/*
 * testStrings.cpp
 *
 *  Created on: Jan. 26, 2022
 *      Author: mao
 */


#include <iostream>
using namespace std;

int testStrings()
{
	string s = "Vancouver";
	cout << "length of " << s << " is " << s.length() << endl;
	//string s1 = "123" + "456";
	string s1 = s + "456";
	cout << s1 << endl;

}

