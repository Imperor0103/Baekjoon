#include <iostream>
#include <algorithm>

using namespace std;

bool IsRightTriangle(int a, int b, int c)
{
	int arr[3] = { a, b, c };
	sort(arr, arr + 3);

	return arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (IsRightTriangle(a,b,c))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}