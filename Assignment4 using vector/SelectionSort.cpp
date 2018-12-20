//SelectionSort.cpp 

#include "SelectionSort.h" 
#include<vector>
#include<iostream>
using namespace std;

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

inline void Swap(  int &a, int &b)
{
	int k = a;
	a = b;
	b = k;
}

void SelectionSort::SelectionSorter( int arr[], int arr_size)
{
	for (int i = 0; i < arr_size - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < arr_size; ++j)
			if (arr[j] < arr[min])
				min = j;
		Swap(arr[min], arr[i]);
	}
}

void SelectionSort::printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++) {
		cout << arr[i] << endl;
	}

}
