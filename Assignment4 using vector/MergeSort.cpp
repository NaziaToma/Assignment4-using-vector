//MergeSort.cpp 
#include "MergeSort.h" 
#include <iostream>
#include<vector>
using namespace std;


MergeSort::MergeSort()
{

}

MergeSort::~MergeSort()
{

}

void Merger(int arr[], int lo, int  mi, int hi)
{
	int *temp = new int[hi - lo + 1];//temporary merger array 
	int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand 
	int k = 0;//k is for the temporary array 
	while (i <= mi && j <= hi)
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	//rest elements of left-half 
	while (i <= mi)
		temp[k++] = arr[i++];
	//rest elements of right-half 
	while (j <= hi)
		temp[k++] = arr[j++];

	for (k = 0, i = lo; i <= hi; ++i, ++k)
		arr[i] = temp[k];

	delete[]temp;
}

void MergeSortHelper(int arr[], int lo, int hi)
{
	int mid;
	if (lo < hi)
	{
		mid = (lo + hi) / 2;
		MergeSortHelper(arr, lo, mid);
		MergeSortHelper(arr, mid + 1, hi);
		Merger(arr, lo, mid, hi);
	}
}

void MergeSort::MergeSorter(int arr[], int arr_size)
{
	MergeSortHelper(arr, 0, arr_size - 1);
}

void MergeSort::printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++) {
		cout << arr[i] << endl;
	}

}