// Assignment #2, CPSC 1160 (25 points)
// Describe what the code is doing in your own words.
// by #your name here#
// 3 points for comments
// 7 points in total for different tests
// 1/7 points for base=3, length = 2
// 2/7 points for base=4, length = 3
// 2/7 points for base=16, length = 2
// 2/7 points for a random test

#include <iostream>
using namespace std;

string S1 = "0123456789ABCDEF";

/*
 * Get the largest sequence
 * tmplen = 2, base = 3: 22
 * tmplen = 5, base = 16: FFFFF
 */

string getInitialStringAns(int tmplen, int base)
{
	if (tmplen <= 0)
		return "";
	else
		return S1[base - 1] + getInitialStringAns(tmplen - 1, base);
}


void generateAns(int len, int& count, string& working, int base, int stringIndex = 0)
{
	/*
	 * Your code 10 points
	 */

	//cout << "" << stringIndex << " "  << sIndex << endl;
	if(stringIndex == len){
		cout << working << endl;
		count++;
	}
	else {
		for (int i = 0; i < base; i++){
			working[stringIndex] = S1[i];
			generateAns(len, count, working, base, stringIndex + 1);
		}
	}
}



int sequencesUsingRecursionAns()
{
	/*
	 * Your code 5 points
	 */

	cout << "Enter a base: ";
	int base;
	cin >> base;

	int count = 0;

	cout << "Enter a length: ";
	int len;
	cin >> len;

	if (len > 6) len = 6;

	string working = getInitialStringAns(len, base); // You don't have to use this line
	//cout << getInitialString (len, 1) << endl;
	int stringIndex = 0;

	generateAns(len, count, working, base, stringIndex);

	cout << "Count = " << count << endl;

	return 0;
}
