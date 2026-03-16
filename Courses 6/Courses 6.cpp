#include<iostream>
#include"min.h"

using namespace std;
using namespace readlib;
using namespace arraylib;
using namespace printlib;

int main()
{
	srand((unsigned)time(NULL));

	int n = ReadNumber("Enter a number: ");
	int arr[100];
	for (int i = 0; i < 10; i++)
	{
		fillArryWithRandomNumbers(arr, 10);
		PrintArray(arr, 10);
		cout << endl;
		n = ReadNumber("Enter a number: ");
	}
	cout << "Hello Word";
	
	

	return 0;
}