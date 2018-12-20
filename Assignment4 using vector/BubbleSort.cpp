//BubbleSort.cpp 
#include "BubbleSort.h" 
#include <iostream>
#include<vector>
using namespace std;


BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::BubbleSorter(int *array, int n) {
	bool swapped = true;
	int j = 0;
	int temp;

	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; ++i) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}

void BubbleSort::printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++) {
		cout << arr[i] << endl;
	}

}