#include <iostream>

using namespace std;

int arr1[6] = { 1,1,2,2,2,8 };

void Solution(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] - arr[i] << " ";
	}
}

int main()
{
	int arr[6] = {0,0,0,0,0,0};
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	Solution(arr, size);
	return 0;
}

