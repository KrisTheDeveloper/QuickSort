// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> arr) {
	const int *pivot = &arr[0];

	vector<int> left{}, equal{}, right{};
	vector<int>result{};

	for (int index = 0; index < arr.size(); index++)
	{
		if (*pivot == arr[index])
			equal.push_back(arr[index]);
		if (*pivot > arr[index])
			left.push_back(arr[index]);
		if (*pivot < arr[index])
			right.push_back(arr[index]);
	}

	result.insert(result.end(), left.begin(),left.end());
	result.insert(result.end(), equal.begin(), equal.end());
	result.insert(result.end(), right.begin(), right.end());

	return result;

}

int main()
{
	vector<int> arr = { 4, 5, 3, 7, 2 };
	vector<int> result{};

	result = quickSort(arr);

	return 0;
}