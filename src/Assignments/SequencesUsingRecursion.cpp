// Assignment #2, CPSC 1160 (25 points)
// Describe what the code is doing in your own words.
// by #your name here#
// 3 points for comments
// 7 points in total for different tests


#include <iostream>
using namespace std;

string S = "0123456789ABCDEF";

/*
 * Get the largest sequence
 * tmplen = 2, base = 3: 22
 * tmplen = 5, base = 16: FFFFF
 */

string getInitialString(int tmplen, int base)
{
	if (tmplen <= 0)
		return "";
	else
		return S[base - 1] + getInitialString(tmplen - 1, base);
}


void generate(int len, int& count, string& working, int base, int stringIndex = 0)
{
	/*
	 * Your code (10 points)
	 */

}



int sequencesUsingRecursion()
{
	/*
	 * Your code (5 points)
	 */

	string working = getInitialString (5, 11); // This line can be deleted
	cout << working << endl; // This line can be deleted

	return 0;

}
