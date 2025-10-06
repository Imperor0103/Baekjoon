#include <iostream>

using namespace std;

const int maxLine = 100000;

void Push(int* arr, int* topIndex, long long* total, int value)
{
	arr[(*topIndex)++] = value;
	*total += value;
}

void Pop(int* arr, int* topIndex, long long* total)
{
	if (*topIndex > 0)
		*total -= arr[--(*topIndex)];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int K;
	cin >> K;

	int arr[maxLine];
	int topIndex = 0;
	long long total = 0;

	for (int i = 0; i < K; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
			Pop(arr, &topIndex, &total);
		else
			Push(arr, &topIndex, &total, num);
	}

	cout << total << '\n';
	return 0;
}