#include <iostream>
#include <algorithm>

using namespace std;

void Solution(int* arr)
{
	if (arr[0] + arr[1] > arr[2])
		cout << arr[0] + arr[1] + arr[2] << "\n";
	else
		cout << 2 * (arr[0] + arr[1]) - 1 << "\n";
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int arr[3] = { a,b,c };
	sort(arr, arr + 3,
		[](int x, int y)
		{
			return x < y;
		});

	Solution(arr);
	return 0;
}