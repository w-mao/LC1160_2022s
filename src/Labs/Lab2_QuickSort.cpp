/*
 * Lab2_QuickSort.cpp
 *
 *  Created on: Jan. 24, 2022
 *      Author: mao
 */
#include <iostream>
using namespace std;


// Swap two elements using reference
void quickSortSwapLab(double& a, double& b)
{
	double t = a;
	a = b;
	b = t;
}


int quickSortPartitionLab (double list[], int low, int high)
{
	// partition the array using last element as pivot
	double pivot = list[high];
	int i = (low - 1);

	for (int j = low; j <= high- 1; j++)
	{
		//if current element is smaller than pivot, increment the low element
		//swap elements at i and j
		if (list[j] <= pivot)
		{
			i++; // increment index of smaller element
			quickSortSwapLab(list[i], list[j]);
		}
	}

	quickSortSwapLab(list[i + 1], list[high]);

	return (i + 1);
}


int quickSortPartitionNew (double list[], int low, int high)
{
	// partition the array using last element as pivot
	double pivot = list[high];

	// Write your code here.

	return 0; // Change this line.
}

void quickSortLab(double list[], int low, int high)
{
	if (low < high)
	{
		//partition the array
		int pivot = quickSortPartitionLab(list, low, high);
		//int pivot = quickSortPartitionNew(list, low, high);
		cout << "pivot index: " << pivot << endl;
		//sort the sub arrays independently
		quickSortLab(list, low, pivot - 1);
		quickSortLab(list, pivot + 1, high);
	}
}


int testQuickSort()
{

	double a[] = {7.0, 3.0, 4.0, 6.0, 3.0, 2.0, 1.0, 8.0, 5.0};
	cout <<"Input list ...\n";
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		cout <<a[i]<<"\t";
	}
	cout<<endl;

	// sizeof(a[0]) returns the data type size (of the first element).
	quickSortLab(a, 0, sizeof(a)/sizeof(a[0])-1); // high = sizeof(a)/sizeof(a[0])-1, postion of the last element
	cout <<"Sorted Element List ...\n";
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		cout <<a[i]<<"\t";
	}
	return 0;
}


