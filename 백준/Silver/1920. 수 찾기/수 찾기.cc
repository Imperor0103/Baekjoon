#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool BinarySearch(const vector<int>& arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == target)
			return true;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end(),
		[](int i, int j)
		{
			return i < j;
		});

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		cout << BinarySearch(A, num) << '\n';
	}

	return 0;
}