// Assignment #2, CPSC 1160
// Describe what the code is doing in your own words.
// by #your name here#
// 3 points for comments


#include <iostream>
using namespace std;

string SS = "0123456789ABCDEF";

void recursionForLoop2(int, int&, string&, int, int, int, int);

string getInitialString2(int tmplen, int base)
{
	if (tmplen <= 0)
		return "";
	else
		return SS[base - 1] + getInitialString2(tmplen - 1, base);
}


//void generate21(int len, int& count, string& working, int base)
//{
//
//	cout << working << endl;
//	if (working == getInitialString(len, base=1))
//	{
//		return;
//	}
//	else
//	{
//		//working = getNextString (base, len, base - 1);
//		count++;
//		generate1(len, count, working, base);
//	}
//
//}

//void generate2(int len, int& count, string& working, int base, int stringIndex, int sIndex)
//{
//	//cout << "" << stringIndex << " "  << sIndex << endl;
//	count++;
//	working[stringIndex] = S[sIndex];
//	cout << working << endl;
//
//	if (stringIndex == len-1 && sIndex == 0)
//	{
//		return;
//	}
//	else
//	{
//		//working = getNextString (base, len, base - 1);
//		if (sIndex == 0 && stringIndex != len - 1)
//		{
//			stringIndex++;
//			sIndex = base - 1;
//
//		}
//		else
//		{
//			sIndex--;
//		}
//
//		generate(len, count, working, base, stringIndex, sIndex);
//	}
//
//}

void generate2(int len, int& count, string& working, int base, int stringIndex)
{
	//cout << "" << stringIndex << " "  << sIndex << endl;


	if(stringIndex == len){
		cout << working << endl;
		count++;
	}
	else {
		for (int i = 0; i < base; i++){
			working[stringIndex] = SS[i];
			generate2(len, count, working, base, stringIndex + 1);
		}
	}
}

void generateWithoutLoop2(int len, int& count, string& working, int base, int stringIndex, int i)
{
	//cout << "" << stringIndex << " "  << sIndex << endl;


	if(stringIndex == len){
		cout << working << endl;
		count++;
	}
	else {
		recursionForLoop2(len, count, working, base, stringIndex, stringIndex-1, i);
	}
}

void recursionForLoop2(int len, int& count, string& working, int base, int stringIndexR, int stringIndexLoop, int i)
{

	if (i < base)
	{ 	working[stringIndexR] = SS[i];
		generateWithoutLoop2(len, count, working, base, stringIndexR + 1, i);
		recursionForLoop2(len, count, working, base, stringIndexR, stringIndexLoop, i+1);
	}
}

int sequencesUsingRecursion2()
{
	cout << "Enter a base: ";
	int base;
	cin >> base;

	int count = 0;

	cout << "Enter a length: ";
	int len;
	cin >> len;

	string working = getInitialString2 (len, base);
	//cout << getInitialString (len, 1) << endl;
	int stringIndex = 0;
	int sIndex = 0;

	//generate(len, count, working, base, stringIndex);
	generateWithoutLoop2(len, count, working, base, stringIndex, sIndex);

	cout << "Count = " << count << endl;

	return 0;
}
