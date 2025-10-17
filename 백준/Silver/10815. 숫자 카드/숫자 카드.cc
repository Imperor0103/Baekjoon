#include <iostream>

using namespace std;

void CustomSwap(int* a, int* b);

void CustomQuickSort(int* arr, int left, int right)
{
	if (left >= right)
		return;

	int pivot = arr[(left + right) / 2];
	int l = left;
	int r = right;

	// ascending
	while (l <= r)
	{
		while (arr[l] < pivot)
			l++;
		while (arr[r] > pivot)
			r--;

		if (l <= r)
		{
			CustomSwap(&arr[l], &arr[r]);
			l++;
			r--;
		}
	}
	CustomQuickSort(arr, left, r);
	CustomQuickSort(arr, l, right);
}

bool CustomBinarySearch(int* arr, int size, int target)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] == target)
			return true;
		else if (arr[mid] < target)
			left = mid + 1;
		else if (arr[mid] > target)
			right = mid - 1;
	}
	return false;
}

void CustomSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N;
	cin >> N;
	int* cards = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> cards[i];
	}
	CustomQuickSort(cards, 0, N - 1);

	int M;
	cin >> M;
	int* targets = new int[M];

	for (int i = 0; i < M; i++)
	{
		cin >> targets[i];
	}

	for (int i = 0; i < M; i++)
	{
		cout << CustomBinarySearch(cards, N, targets[i]) << ' ';
	}

	delete[] cards;
	delete[] targets;
}