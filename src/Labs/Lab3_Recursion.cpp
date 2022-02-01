/*
 * Lab3_Recursion.cpp
 *
 *  Created on: Jan. 29, 2022
 *      Author: mao
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void forward(int);
void backward(int);
int sumR(int);
int sumDigits(int);
int maxR(const int [], int);
void revArray(int [], int, int); //arguments: array, array size and index

int testRecursion(){

	int n;
	int a[] = {3,16,2,4,7,11,19};

	cout <<"Enter a positive integer to compute sum:";
	cin >> n;
	forward(n);
	cout <<endl;

	backward(n);
	cout << endl;

	cout << "The sum of the above sequence is: " << sumR(n) << endl;
	cout <<"Enter a positive integer to compute sum of digits:";
	cin >> n;
	cout << "The sum of all digits is: " << sumDigits(n) << endl;

	cout << "Max in the array = " << maxR(a, sizeof(a)/sizeof(a[0])) << endl;

	revArray(a, sizeof(a)/sizeof(a[0]), 0);
	cout << "The array is now reversed" << endl;
	cout << "[";
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
		if (i == sizeof(a)/sizeof(a[0]) - 1)
			cout << a[i];
		else
			cout << a[i] << ",";
	}
	cout << "]" << endl;

	return 0;

}

/*
 * Your code here
 */

void forward(int n)
{
	if (n >= 0){
		forward(n - 1);
		cout << n << " ";
	}

}

void backward(int n)
{
	if (n >= 0){
		cout << n << " ";
		backward(n - 1);
	}
}


int sumR(int n)
{
	if (n > 0)
		return n + sumR(n-1);
	else
		return 0;
}

int sumDigits(int n)
{
	string s = to_string(n);
	//cout << static_cast<int>(s[0]) << endl;
	//int (s[0])
	//The above two lines compute the ASCII index.

	if (n <= 9)
		return n;
	else
		return s[0] - '0' + sumDigits(stoi(s.substr(1, s.length()-1)));
	// char& operator[] returns a character
}

int maxR(const int a[], int n)
{
	if (n <= 1)
		return a[0];
	else{
		return max(maxR(a, n-1), a[n-1]);
	}
}

void revArray(int a[], int n, int i = 0){

	if (i < n/2){
		int tmp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = tmp;
		revArray(a, n, i+1);
	}

}


