#include "SelectionSort.h" 
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





}
