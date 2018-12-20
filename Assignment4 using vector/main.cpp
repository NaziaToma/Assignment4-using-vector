#include "SelectionSort.h" 
#include "InsertionSort.h" 
#include "MergeSort.h"
#include "BubbleSort.h" 
#include<vector>
#include<iostream>
#include <iterator>

using namespace std;

int main() {
	int arr[] = { 14,33,27,10,35,19,48,44 };
	SelectionSort number;
        std::vector <int> first(std::begin(arr), std::end(arr));
	number.SelectionSorter(arr, 8);
	number.printArray(arr, 8);
	
	InsertionSort num;
	num.InsertionSorter(arr, 8);
	std::vector <int> first(std::begin(arr), std::end(arr));
	num.InsertionSorter(arr, 8);
	num.printArray(arr, 8);


	MergeSort num1;
	num1.MergeSorter(arr, 8);
	std::vector <int> first(std::begin(arr), std::end(arr));
	num1.MergeSorter(arr, 8);
	num1.printArray(arr, 8);

	BubbleSort num2;
	num2.BubbleSorter(arr, 8);
	std::vector <int> first(std::begin(arr), std::end(arr));
	num2.BubbleSorter(arr, 8);
	num2.printArray(arr, 8);

	return 0;

}
