#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>
#include <utility>
#include <iomanip>
#include "randomlib.h"
using namespace std;

namespace readlib
{
	int ReadNumber(string message)
	{
		int n;

		do {
			cout << message;
			cin >> n;
			if (n > 0)
			{
				return n;
			}
		} while (n < 0);
		return n;

	}
	char ReadCharactar(string message)
	{
		char n;

		do {
			cout << message;
			cin >> n;
			if (n == 'Y' || n == 'y' || n == 'N' || n == 'n')
			{
				return n;
			}
		} while (!(n == 'Y' || n == 'y' || n == 'N' || n == 'n'));
		return n;

	}
}

namespace printlib
{
	void PrintArray(int arr[100], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
}

namespace arraylib
{


	void fillArryWithRandomNumbers(int arr[100], int arryLength)
	{
		for (int i = 0; i < arryLength; i++)
		{
			arr[i] = RandomNumber(1, 100);
		}
	}

	int GetIndexOfItemInArray(int arr[100], int size, int item)
	{
		int index = -1;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == item) return i;
		}
		return index;
	}

	bool IsNumberInArray(int arr[100], int size, int item)
	{
		return  GetIndexOfItemInArray(arr, size, item) != -1;
	}

	void AddArrayElement(int number, int arr[100], int& size)
	{
		arr[size++] = number;
	}
	int CountOddNumbersInArray(int arr[100], int size)
	{
		int odd = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0) odd++;
		}
		return odd;
	}

	int CountEvenNumbersInArray(int arr[100], int size)
	{
		int even = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0) even++;
		}
		return even;
	}

	int CountPositiveNumbersInArray(int arr[100], int size)
	{
		int pos = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0) pos++;
		}
		return pos;
	}

	int CountNegativeNumbersInArray(int arr[100], int size)
	{
		int Negative = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0) Negative++;
		}
		return Negative;
	}
}