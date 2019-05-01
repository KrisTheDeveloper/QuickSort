// QuickSort2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> arr, int start, int end) {
	int *leftIndex = &arr[start];
	int *rightIndex = &arr[end];
	
	int *pivot = &arr[start];
	
	for (int i = 0; i < arr.size(); i++)
	{
		if (*pivot == *leftIndex && *pivot == *rightIndex)
			break;
		else if (*pivot > *leftIndex)
			leftIndex++;			
		else if (*pivot < *leftIndex)
		{
			swap(*pivot, *leftIndex);
			pivot = leftIndex;
		}
		else if (*pivot < *rightIndex)
			rightIndex--;
		else if (*pivot > *rightIndex)
		{
			swap(*pivot, *rightIndex);
			pivot = rightIndex;
		}

	}
	quickSort(arr, *(pivot + 1), arr.size() - 1);
	quickSort(arr, 0, *(pivot - 1));

	return arr;

}

int main()
{
	vector<int> arr = { 6, 2, 8, 4, 1, 3, 9 };
	vector<int> result{};

	result = quickSort(arr, 0, arr.size() - 1);
	return 0;
}
